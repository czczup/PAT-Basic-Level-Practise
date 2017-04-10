from math import sqrt

def assign(temp,num,x,y,m,n,cnt,N):
	try:
		for i in range(y,n-1):#填充上行
			num[x][i] = temp[cnt]
			cnt = cnt + 1
		for i in range(x,m-1):#填充右列
			num[i][n-1] = temp[cnt]
			cnt = cnt + 1
		for i in range(n-1,y,-1):#填充下行
			num[m-1][i] = temp[cnt]
			cnt = cnt + 1
		for i in range(m-1,x,-1):#填充左列
			num[i][y] = temp[cnt]
			cnt = cnt + 1
		if cnt == N-1:
			num[x+1][y+1] = temp[cnt]
			return ''
		assign(temp,num,x+1,y+1,m-1,n-1,cnt,N)
	except:
		pass


def main():
	N = eval(input(""))
	min,m,n = N,0,0
	#求行数列数, m行n列
	for i in range(1,int(sqrt(N)+1)):
		if N%i==0:
			if min>N/i-i:
				min = N/i - i
				n = int(i)
				m = int(N/i)

	temp = input("").split(" ")
	temp = [int(item) for item in temp]
	temp.sort()
	temp.reverse()

	num = [[0]*n for i in range(m)]
	cnt = 0
	if n==1:
		while(cnt!=N):
			try:
				num[cnt][0] = temp[cnt]
				cnt = cnt + 1
			except:
				pass
	else:
		assign(temp,num,0,0,m,n,cnt,N)
	for i in range(m):
		for j in range(n):
			print(num[i][j],end='')
			if j == n-1:
				print("\n",end='')
			else:
				print(" ",end='')

	#print(num)

if __name__ == '__main__':
    main()
#最后测试点数据量过大

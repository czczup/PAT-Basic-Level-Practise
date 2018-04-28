from math import sqrt
def assign(temp,num,x,y,m,n,N,cnt=0):
    for i in range(x,n): # 填充上行
        num[y][i] = temp[cnt]
        cnt += 1
        if cnt == N:return ""
    if m != 1: # 不止一行时
        for i in range(y+1,m): # 填充右列
            num[i][n-1] = temp[cnt]
            cnt += 1
            if cnt==N: return ""
    if n!=1 and m != 1:
        for i in range(n-2,x-1,-1): # 填充下行
            num[m-1][i] = temp[cnt]
            cnt += 1
            if cnt==N: return ""
        for i in range(m-2,y,-1): # 填充左列
            num[i][x] = temp[cnt]
            cnt += 1
            if cnt==N: return ""
    if cnt!=N:
        assign(temp,num,x+1,y+1,m-1,n-1,N,cnt=cnt)

N = int(input())
minimum,m,n = N,0,0
for i in range(1,int(sqrt(N)+1)): # 求行数列数, m行n列
    if N % i == 0 and minimum >= N//i-i:
        minimum = N // i - i
        n,m = i,N // i
temp = [int(item) for item in input().split()] # 用split(" ")测试点7过不了
temp.sort(reverse=True)
nums = [[0 for i in range(n)] for i in range(m)]
assign(temp,nums,0,0,m,n,N)
for num in nums:
    print(" ".join([str(i) for i in num]))

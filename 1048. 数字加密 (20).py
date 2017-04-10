#1048. 数字加密 (20)
string = input("").split(' ')
A,B = string[0], string[1]
A,B = A[::-1], B[::-1] #反转字符串
ans = [] #存放加密结果的list
length = max(len(A),len(B))#取最大长度
for i in range(length):
	numA,numB = 0,0
	if i < len(A):
		numA = int(A[i])
	if i < len(B):
		numB = int(B[i])
	if i % 2 == 0:#偶数位
		temp = (numA + numB) % 13
		if temp == 10:
			ans.append('J')
		elif temp == 11:
			ans.append('Q')
		elif temp == 12:
			ans.append('K')
		else:
			ans.append(str(temp))
	else:#奇数位
		temp = numB - numA
		if temp < 0:
			temp = temp + 10
		ans.append(str(temp))
answer = "".join(ans)#list合成字符串
answer = answer[::-1]#反转字符串
print(answer)

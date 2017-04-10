#1049. 数列的片段和 (20)

# temp = input("") #无用变量
# lst = input("").split(' ')
# sumlst = 0 #数字总和
# length = len(lst)
# for p1 in range(length):
# 	for p2 in range(p1,length):
# 		list_a = [eval(num) for num in lst[p1:p2+1]] #将字符子列转化为数字
# 		sumlst += sum(list_a) #求和
# print("%.2f" % sumlst)


N = eval(input("")) #无用变量
lst = input("").split(' ')
sumlst = 0 #数字总和
for i in range(N):
	sumlst += eval(lst[i])*(N-i)*(i+1) #根据数字的出现规律求和
print("%.2f" % sumlst)
#还是超时 

#1019. 数字黑洞 (20)
num = int(input())
result = -1
while result!=6174:
    mylist = [num//1000,num%1000//100,num%100//10,num%10]
    #将数字各位记入list
    mylist.sort()
    num1 = mylist[0]*1000+mylist[1]*100+mylist[2]*10+mylist[3]
    mylist.sort(reverse = True)
    #反转数字
    num2 = mylist[0]*1000+mylist[1]*100+mylist[2]*10+mylist[3]
    result = max(num1,num2)-min(num1,num2)
    #计算数字差
    num = result
    print("%04d"%max(num1,num2),'-',"%04d"%min(num1,num2),'=',"%04d"%result)
    #相等只输出一次
    if result == 0:
        break

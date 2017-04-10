#1023. 组个最小数 (20)
import re
strnum = input()
amount = re.findall(r"\d+\.?\d*",strnum)
number = []
for i in range(0,10):
    for cnt in range(0,int(amount[i])):
        number.append(i)
#print(number)
number.sort()
#print(number)
flag = 0
for i in range(0,len(number)):
    if flag == 0:
        if int(number[i])!=0:
            print(number[i],end='')
            print('0'*i,end='')
            flag = 1
    else:
        print(number[i],end='')
    
 

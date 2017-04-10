#1022. D进制的A+B (20)
import sys
A,B,D = map(int,sys.stdin.readline().split())
number = []
sum = A + B
if sum == 0:
    print(0)
#0的2-10进制数都是0
while sum!=0:
    num = sum % D
    number.append(num)
    sum = (sum - num) / D
    #逆序记录
number.reverse()
#翻转
for i in range(0,len(number)):
    print(int(number[i]),end='')
 

A,B,D = [int(i) for i in input().split(" ")]
numbers = []
sum = A + B
if sum == 0: # 0的2-10进制数都是0
    print(0)
while sum!=0:
    num = sum % D
    numbers.append(num)
    sum = (sum - num) / D #逆序记录
numbers.reverse() # 翻转
for number in numbers:
    print(int(number),end='') # 取整
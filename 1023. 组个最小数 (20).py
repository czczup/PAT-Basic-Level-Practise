amount = [int(i) for i in input().split(" ")]
number = []
for i in range(10):
    for cnt in range(amount[i]):
        number.append(i)
number.sort()
flag = 0
for i in range(len(number)):
    if flag == 0:
        if number[i] != 0:
            print(number[i],end='')
            print('0'*i,end='')
            flag = 1
    else:
        print(number[i],end='')
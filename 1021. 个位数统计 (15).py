N = input() # 用字符串模拟大数
num = [0,0,0,0,0,0,0,0,0,0]
for i in range(len(N)):
    num[int(N[i])] = num[int(N[i])] + 1
for i in range(10):
    if num[i]!=0:
        print(i,end='')
        print(':',end='')
        print(num[i])
#1021. 个位数统计 (15) 
N = input()
#用字符串模拟大数
num = [0,0,0,0,0,0,0,0,0,0]
for i in range(0,len(N)):
    num[int(N[i])] = num[int(N[i])] + 1
for i in range(0,10):
    if num[i]!=0:   
        print(i,end='')
        print(':',end='')
        print(num[i])

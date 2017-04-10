#1005. 继续(3n+1)猜想 (25)
import re
cnt = int(input())
string = input()
inputnum = re.findall(r"\d+\.?\d*",string)
#从字符串string中提取数字
listnum = []
#用于嵌套num的list
finalnum = []
#记录结果数字的list
for i in range(0,cnt):
    n = int(inputnum[i])
    num = []
    while n!=1:
        if n%2==0:
            n = n/2
        else:
            n = (3*n+1)/2
        num.append(int(n))
    listnum.append(num)
    #将过程追加在num上
for i1 in range(0,cnt):
    n = int(inputnum[i1])
    flag = 0
    for i2 in range(0,cnt):
        if n in listnum[i2]:
            flag = 1
        #判断数字是否出现在过程中
    if flag==0:
        finalnum.append(n)
        #未出现则记录
finalnum.sort(reverse = True)
#从大到小排序
for i in range(0,len(finalnum)):
    print(finalnum[i],end='')
    #输出不换行
    if i!=len(finalnum)-1:
        print(' ',end='')
        #最后一个数字后不输出空格

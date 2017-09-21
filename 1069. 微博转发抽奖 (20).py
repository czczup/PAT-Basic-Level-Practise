[m,n,s] = [int(i) for i in input("").split(' ')]
#print(m,n,s)#转发总量、中奖间隔、第一位中奖者序号
get = []
mark = dict() #用字典记录是否中过奖
for i in range(m):
    get.append(input(""))
    mark[get[i]] = False
    #均标记为未中过奖
flag = False
#没有人中奖
i = s - 1
while i < m:
    if mark[get[i]] == False:
        mark[get[i]] = True
        print(get[i])
        flag = True
        i += n
    else:
        i += 1 #整体后移
if flag==False:
    print("Keep going...")
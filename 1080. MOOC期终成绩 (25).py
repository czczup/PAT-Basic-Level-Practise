P,M,N = [int(i) for i in input().split(" ")]
dic = {}
for i in range(P):
    name,G_p = input().split()
    dic[name] = [name,int(G_p),-1,-1,-1]
for i in range(M):
    name,G_mid = input().split()
    if name not in dic:
        dic[name] = [name,-1,-1,-1,-1]
    dic[name][2] = int(G_mid)
for i in range(N):
    name,G_end = input().split()
    if name not in dic:
        dic[name] = [name,-1,-1,-1,-1]
    dic[name][3] = int(G_end)
for stu in dic:
    if dic[stu][1] >= 200:
        if dic[stu][2] > dic[stu][3]:
            dic[stu][4] = round(dic[stu][2]*0.4 + dic[stu][3]*0.6)
        else:
            dic[stu][4] = dic[stu][3]
lst = sorted(dic, key=lambda x:(-dic[x][-1],dic[x][0]))
for stu in lst:
    if dic[stu][-1] >= 60:
        print(dic[stu][0],dic[stu][1],dic[stu][2],dic[stu][3],dic[stu][4])
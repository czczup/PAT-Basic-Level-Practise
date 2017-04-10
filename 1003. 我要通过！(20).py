#1003. 我要通过！(20)
n = int(input())
for i in range(0,n):
    flag = [1,0,0,1,1,1,1,1,0]
    #只有PAT 1 否则 0
    #中间存在PAT 1 否则 0
    #前后一样长 1 否则 0
    #前半段符合 1 否则 0
    #后半段符合 1 否则 0
    #b不为空且只含有A 1 否则 0
    #前半段符合 1 否则 0
    #后半段符合 1 否则 0
    #ca是a的len(b)倍 1 否则 0
    str = input()
    for cnt in range(0,len(str)):
        if str[cnt]!='P' and str[cnt]!='A' and str[cnt]!='T':
            flag[0] = 0
        #字符串中仅有P,A,T三种字符，不可含其它字符
        if str[cnt:cnt+3]=="PAT":
            flag[1] = 1
            x1 = str[0:cnt]
            x2 = str[cnt+3:]
            if len(x1)==len(x2):
                flag[2]=1
            #前后段长度相等
            for i1 in range(0,len(x1)):
                if x1[i1]!='A' and x1[i1]!='':
                    flag[3] = 0
                #前段只有A或空
            for i2 in range(0,len(x2)):
                if x2[i2]!='A' and x2[i2]!='':
                    flag[4] = 0
                #后段只有A或空
        if str[cnt]=='P':
            mark1 = cnt
        if str[cnt]=='T':
            mark2 = cnt
            b = str[mark1+1:mark2]
            if len(b)==0:
                flag[5] = 0
            for i3 in range(0,len(b)):
                    if b[i3]!='A':
                        flag[5] = 0
            #b不为空且只含有A
            if flag[5]==1:
                a = str[0:mark1]
                ca = str[mark2+1:]
                for i1 in range(0,len(a)):
                    if a[i1]!='A' and a[i1]!='':
                        flag[6] = 0
                    #前半段符合
                for i2 in range(0,len(ca)):
                    if ca[i2]!='A' and ca[i2]!='':
                        flag[7] = 0
                    #后半段符合
                if len(ca)==len(a)*len(b):
                    flag[8] = 1
                #ca是a的len(b)倍
    if flag[0]==1:
        if flag[1:5]==[1,1,1,1]:
            print("YES")
        elif flag[5:]==[1,1,1,1]:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

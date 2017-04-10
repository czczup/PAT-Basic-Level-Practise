#1029. 旧键盘 (20)
str1 = input().upper()
str2 = input().upper()
#转换为大写
charlist = list(str1)
#转换为list
char = []
#用来记录是否重复出现
for i in range(0,len(charlist)):
    if charlist[i] not in str2:
        if charlist[i] not in char:
            char.append(charlist[i])
            print(charlist[i],end='')

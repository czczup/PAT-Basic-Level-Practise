str1 = input().upper() # 转换为大写
str2 = input().upper()
charList = list(str1) # 转换为list
badKey = [] #用来记录是否重复出现
for char in charList:
    if char not in str2:
        if char not in badKey:
            badKey.append(char)
            print(char, end='')

number = input().split("E")
listnum = [number[0][i] for i in range(len(number[0]))]
exp = int(number[1])

decimal = len(number[0]) - 3 # 小数部分的长度
if exp > 0: # 指数大于0
    if exp >= decimal: # 指数大于小数长度
        listnum.pop(2) # 去掉'.'号
        for i in range(exp - decimal):
            listnum.append('0') # 末尾补'0'
    else: # 指数小于等于0
        listnum.pop(2) # 去掉'.'号
        listnum.insert(2 + exp,'.') # 把'.'号插入在2+exp处
if exp <= 0: # 指数小于等于0
    listnum.pop(2) # 去掉'.'号
    for i in range(-exp):
        listnum.insert(1,'0') # '+'或'-'后补'0'
    listnum.insert(2,'.') # 原位置插入'.'号

if listnum[0]=='+':
    listnum = listnum[1:]
str = ('').join(listnum)
print(str)
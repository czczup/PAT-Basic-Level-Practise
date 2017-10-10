#1024. 科学计数法 (20)
import re
string = input()
number = re.findall(r".\d+\.?\d*",string)
listnum = re.findall(r".",number[0])
exp = int(number[1])
#数字部分分有小数点和无小数点
#指数部分分大于和小于0
if number[0][2]=='.':
    decimal = len(number[0]) - 3
    if exp > 0:
        if exp >= decimal:
            listnum.pop(2)
            for i in range(0,exp - decimal):
                listnum.append('0')
        else:
            listnum.pop(2)
            listnum.insert(2 + exp,'.')
    if exp <= 0:
        listnum.pop(2)
        for i in range(0,-exp):
            listnum.insert(1,'0')
        listnum.insert(2,'.')
else:
    if exp >= 0:
        for i in range(0,exp):
            listnum.append('0')
    else:
        for i in range(0,-exp):
            listnum.insert(1,'0')
        listnum.insert(2,'.')
if listnum[0]=='+':
    listnum.pop(0)
str = ('').join(listnum)
print(str)

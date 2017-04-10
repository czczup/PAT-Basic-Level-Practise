#1024. 科学计数法 (20) 
import re
str1 = input()
num1 = re.findall(r".\d+\.?\d*",str1)
valid = re.findall(r"\d+?\d*",str1)
if '.' in str1:
    if int(num1[1]) < 0:
        lenstr = len(valid[1]) + int(valid[2])
    else:
        lenstr = len(valid[1]) - int(valid[2])
        if len(valid[1]) < int(valid[2]):
            lenstr = 0
#分有小数点和无小数点两类
else:
    if int(num1[1]) < 0:
        lenstr = int(valid[1])
    else:
        lenstr = 0
num = eval(num1[0])*(10**int(num1[1]))
print("%.*f"%(lenstr,num))

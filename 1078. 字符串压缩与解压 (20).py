def compress(string):
    cnt = 0
    ch = string[0]
    lst = []
    for i in range(len(string)):
        if string[i] == ch:
            cnt += 1
        else:
            if cnt == 1:
                lst.append(ch)
            else:
                lst.append(str(cnt)+ch)
            cnt = 1
            ch = string[i]
    print("".join(lst))

def decompress(string):
    s = ""
    i = 0
    while(i<len(string)):
        j = i
        while string[j].isdigit():  # 找数字
            j += 1
        if j > i: #成功找到数字
            num = int(string[i:j])  # 切割数字
            s += string[j] * num    # 解压缩
            if j+1 < len(string):   # 判断边界
                i = j + 1
            else:
                break
        if not string[i].isdigit(): # 不是数字
            s += string[i]
            i += 1
    print(s)


command = input()
string = input()
if command == 'C':
    compress(string + "*")
else:
    decompress(string)
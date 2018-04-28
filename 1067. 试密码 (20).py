password, time = input().split(" ")
time = eval(time)
cnt = 0
while True:
    try_password = input()
    if try_password == '#': #只有#字符时，输入结束
        break
    if try_password == password and cnt < time: #是正确的密码且尝试次数不超过N
        print("Welcome in")
        break
    else:
        print("Wrong password: "+try_password)
    cnt += 1
    if cnt == time: #当错误尝试达到N次时
        print("Account locked")
        break
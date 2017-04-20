def isturenum(num):
    try:
        point = num.find('.') #记录‘.’出现的下标，不存在为-1
        length = len(num) #数出字符串num的总长度
        num = eval(num) #尝试转化为数字
    except: #不能转化说明为非法输入
        return 0
    if num>=-1000 and num<=1000:
        if length - point <= 3 and point >=0: #‘.’存在且只小于两位小数
            return 1
        elif point == -1: #‘.’不存在
            return 1
    else:
        return 0

def main():
    n = eval(input(""))
    num = input("").split(' ')
    amount,sum = 0,0

    for i in range(n):
        if isturenum(num[i]):
            amount += 1
            sum += eval(num[i])
        else:
            print("ERROR: %s is not a legal number"%num[i])
    try:
        sum /= amount
        if amount==1:
            print("The average of 1 number is %.2f"%sum)
        else:
            print("The average of %d numbers is %.2f"%(amount,sum))
    except:
        print("The average of %d numbers is Undefined"%amount)

if __name__ == '__main__':
    main()
#允许‘.’作为字符串最后一位，否则最后一个测试点通不过
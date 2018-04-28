N,M = [int(i) for i in input().split(" ")]
check_lst = input().split(" ")
dic = {}
num_person,num_good = 0,0
for i in range(N):
    name,_,*goods = input().split(" ")
    flag = 0
    for good in goods:
        if good in check_lst:
            if flag == 0:
                print(name+":",end='')
                flag = 1
            print(" "+good,end='')
            num_good += 1
    if flag == 1:
        print("")
        num_person += 1
print(num_person,num_good)

def check(lst1,lst2):
    flag = 0
    for i in range(len(lst2)-1):
        if lst2[i] > lst2[i+1]:
            flag = i + 1
            break
    if lst1[flag:] == lst2[flag:]: # 插入排序
        result = sorted(lst1[:flag+1])+lst2[flag+1:] # 再迭代一轮的结果
        return True,result
    else: # 归并排序
        cnt = 2 # 归并的数量
        result = lst2
        while result == lst2: # 不断归并排序直到顺序发送变化
            sub_lst = [sorted(lst2[i:i+cnt]) for i in range(0,len(lst2),cnt)]
            result = [num for sub in sub_lst for num in sub]
            cnt *= 2
        return False,result

num = int(input())
lst1 = [int(i) for i in input().split()]
lst2 = [int(i) for i in input().split()]
flag,next_list = check(lst1,lst2)
if flag:
    print("Insertion Sort")
else:
    print("Merge Sort")
print(" ".join([str(i) for i in next_list]))
N,M = [int(i) for i in input().split(" ")]
for i in range(N):
    G2,*score = [int(num) for num in input().split(" ")]
    lst = [] # 记录合法的同学评分
    for j in range(N-1):
        if score[j] >= 0 and score[j] <= M:
            lst.append(score[j])
    lst.remove(max(lst)) # 去掉一个最高分
    lst.remove(min(lst)) # 去掉一个最低分
    G1 = sum(lst) / len(lst)
    result = round((G1 + G2)/2+0.001) # 四舍五入
    print(result)
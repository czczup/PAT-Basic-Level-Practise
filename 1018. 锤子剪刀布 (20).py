cnt = int(input()) # 读入数据量
A = [0,0,0,0,0,0] # 胜平负BCJ
B = [0,0,0,0,0,0]
for i in range(cnt):
    a,b = input().split(" ")
    if b == a:
        A[1] += 1
    if a == 'B' and b == 'C':
        A[3] += 1
    if a == 'C' and b == 'J':
        A[4] += 1
    if a == 'J' and b == 'B':
        A[5] += 1
    if b == 'B' and a == 'C':
        B[3] += 1
    if b == 'C' and a == 'J':
        B[4] += 1
    if b == 'J' and a == 'B':
        B[5] += 1

A[0] = A[3] + A[4] + A[5] # A胜
B[0] = B[3] + B[4] + B[5] # B胜
B[1] = A[1] # 补全表格
A[2] = B[0]
B[2] = A[0]
id1,id2 = 3,3
idnum = ['B','C','J'] # 按字母排序
for id in range(4,6):
    if A[id] > A[id1]:
        id1 = id
    if B[id] > B[id2]:
        id2 = id
print(A[0],A[1],A[2])
print(B[0],B[1],B[2])
print(idnum[id1-3],idnum[id2-3])


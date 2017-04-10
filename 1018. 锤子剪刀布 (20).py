#1018. 锤子剪刀布(20)
import sys
cnt = int(input())#读入数据量
#胜平输BCJ
A = [0,0,0,0,0,0]
B = [0,0,0,0,0,0]
for i in range(0,cnt):
    a,b = map(str,sys.stdin.readline().split())
    if a == 'C' and b == 'J':
        A[4] = A[4] + 1
    if a == 'J' and b == 'B':
        A[5] = A[5] + 1
    if a == 'B' and b == 'C':
        A[3] = A[3] + 1
    if b == 'C' and a == 'J':
        B[4] = B[4] + 1
    if b == 'J' and a == 'B':
        B[5] = B[5] + 1
    if b == 'B' and a == 'C':
        B[3] = B[3] + 1
    if b == a:
        A[1] = A[1] + 1
A[0] = A[3]+A[4]+A[5]#A胜
B[0] = B[3]+B[4]+B[5]#B胜
B[1] = A[1]#补全表格
A[2] = B[0]
B[2] = A[0]
id1,id2 = 3,3
for cnt in range(4,6):
    if A[cnt]>A[id1]:id1 = cnt
    if B[cnt]>B[id2]:id2 = cnt
print(A[0],A[1],A[2])
print(B[0],B[1],B[2])
idnum = ['B','C','J']#按字母排序
print(idnum[id1-3],idnum[id2-3])
 

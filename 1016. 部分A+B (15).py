A,DA,B,DB = input().split(" ")
PA,PB = "0","0"
for cnt1 in range(len(A)):
    if A[cnt1] == DA:
        PA = PA + DA
for cnt2 in range(len(B)):
    if B[cnt2] == DB:
        PB = PB + DB
print(int(PA)+int(PB))


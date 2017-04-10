#1016. 部分A+B (15)
import sys
A,DA,B,DB = map(str, sys.stdin.readline().split())
PA,PB = "0","0"
for cnt1 in range(0,len(A)):
    if A[cnt1]==DA[0]:
        PA = PA + A[cnt1]
for cnt2 in range(0,len(B)):
    if B[cnt2]==DB[0]:
        PB = PB + B[cnt2]
print(int(PA)+int(PB))

        
#Python一行读入多个整数/字符串
import sys  
a,b,c = map(int,sys.stdin.readline().split())  
print(a,b,c)   
str1,str2 = map(str, sys.stdin.readline().split())  
print(str1,str2) 

address = {}
point = {}
start,N,K = [int(i) for i in input().split(" ")]
for i in range(N):
    Address,Data,Next = [int(item) for item in input().split(" ")]
    address[Address] = Data
    point[Data] = Next

less_than_zero = []
zero_to_K = []
more_than_K = []

while start!=-1:
    if address[start] < 0:
        less_than_zero.append(start)
    elif address[start] >= 0 and address[start] <= K:
        zero_to_K.append(start)
    else:
        more_than_K.append(start)
    start = point[address[start]]

lst = less_than_zero + zero_to_K + more_than_K
for i in range(len(lst)-1):
    print("%05d"%lst[i],address[lst[i]],"%05d"%lst[i+1])
print("%05d" %lst[-1],address[lst[-1]],-1)
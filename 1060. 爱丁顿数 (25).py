N = input("")
distance = [int(item) for item in input("").split(' ')]
distance.sort()
distance.reverse()
#print(distance)
point = 0
for i in range(len(distance)):
    if distance[i] > i+1 :
        point = i + 1
print(point)
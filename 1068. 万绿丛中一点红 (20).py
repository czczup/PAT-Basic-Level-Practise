def judge(image,y,x,TOL):
    for loc_x in [-1,0,1]:
        for loc_y in [-1,0,1]:
            if [loc_x,loc_y] != [0,0]:
                if abs(image[y][x]-image[y+loc_y][x+loc_x]) <= TOL:
                    return False
    return True

M,N,TOL = [int(i) for i in input().split()]
image = []
image.append([0 for i in range(M+2)])
for i in range(N):
    image.append([0] + [int(i) for i in input().split()] + [0])
image.append([0 for i in range(M+2)])
result,time = [],{}

for y in range(1,N+1):
    for x in range(1,M+1):
        if image[y][x] not in time:
            time[image[y][x]] = 1
        else:
            time[image[y][x]] += 1

for y in range(1, N+1):
    for x in range(1, M+1):
        if len(result) > 1:
            break
        if judge(image,y,x,TOL) and time[image[y][x]] == 1:
            result.append(["("+str(x)+", "+str(y)+"): "+str(image[y][x])])
if len(result) == 1:
    print(result[0][0])
elif len(result) == 0:
    print("Not Exist")
else:
    print("Not Unique")


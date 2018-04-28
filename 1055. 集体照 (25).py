N,K = [int(i) for i in input().split()]
persons = [input().split() for i in range(N)]
persons.sort(key=lambda person:(-int(person[1]),person[0]))
cnt = 0
for i in range(K):
    if i == 0:
        num = N % K + N // K
    else:
        num = N // K
    line = []
    for j in range(num):
        if j % 2 == 0:
            line.append(persons[cnt][0])
        else:
            line.insert(0,persons[cnt][0])
        cnt += 1
    print(" ".join(line))



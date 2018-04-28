N = int(input())
alpha_to_number = {'A':1,'B':2,'C':3,'D':4}
for i in range(N):
    answers = input().split(" ")
    dic = {}
    for answer in answers:
        dic[answer[2]] = answer[0]
    print(alpha_to_number[dic['T']],end='')

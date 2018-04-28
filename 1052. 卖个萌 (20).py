import re
hands = re.findall("\[(.*?)\]", input())
eyes = re.findall("\[(.*?)\]", input())
mouths = re.findall("\[(.*?)\]", input())
N = int(input())
for i in range(N):
    num = [int(num)-1 for num in input().split()]
    try:
        print(hands[num[0]]+"("+eyes[num[1]]+mouths[num[2]]+eyes[num[3]]+")"+hands[num[4]])
    except:
        print("Are you kidding me? @\/@")


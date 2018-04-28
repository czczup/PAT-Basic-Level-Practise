T,K = [int(i) for i in input().split()]
x = T
for i in range(K):
    n1,b,t,n2 = [int(i) for i in input().split()]
    if t>x:
        print("Not enough tokens.  Total = "+str(x)+".")
    elif n2 > n1 and b == 1: # 赌大
        x += t
        print("Win "+str(t)+"!  Total = "+str(x)+".")
    elif n1 > n2 and b == 0: # 赌小
        x += t
        print("Win "+str(t)+"!  Total = "+str(x)+".")
    else:
        x -= t
        print("Lose "+str(t)+".  Total = "+str(x)+".")
        if x==0:
            print("Game Over.")
            break
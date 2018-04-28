def isSimple(a,b):
    n = min(a,b)
    for i in range(2,n+1):
        if b%i==0 and a%i==0:
            return 0
    return 1

def main():
    min,max,K = [eval(item) for item in input("").split(" ")]
    if min > max:
        min,max = max,min
    start,flag = 1,0
    while start/K < max:
        if start/K > min and isSimple(start, K):
            if flag==0:
                print("%d/%d"%(start,K),end='')
                flag = 1
            else:
                print(" %d/%d"%(start, K), end='')
        start = start + 1

if __name__ == '__main__':
    main()
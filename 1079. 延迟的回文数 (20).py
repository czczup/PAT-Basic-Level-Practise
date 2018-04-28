def is_palindrome(n):
    n=str(n)
    m=n[::-1]
    return n==m

num = int(input())
for i in range(10):
    if is_palindrome(num):
        print(num,"is a palindromic number.")
        break;
    num_re = int(str(num)[::-1])
    result = num + num_re
    print(num,"+",num_re,"=",result)
    num = result

else:
    print("Not found in 10 iterations.")
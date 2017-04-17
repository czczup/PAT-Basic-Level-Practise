import re

def symbolprint(hand,eye,mouth,number):
    print(hand[number[0]-1] + '(' + eye[number[1]-1] + \
          mouth[number[2]-1] + eye[number[3]-1] + ')' + \
          hand[number[4]-1])

def isexist(number,amount):
    if number[0] > amount[0]:
        return 0
    elif number[1] > amount[1]:
        return 0
    elif number[2] > amount[2]:
        return 0
    elif number[3] > amount[1]:
        return 0
    elif number[4] > amount[0]:
        return 0
    else:
        return 1

def symbol_in():
    number = input("").split(" ")
    number = [int(item) for item in number]
    return number

def dealsymbol():
    symbol = input("").split('...')
    symbol = "".join(symbol)
    symbol = symbol.split(' ')
    symbol = "".join(symbol)
    symbol = symbol.split('][')
    symbol[0] = symbol[0][1:]
    symbol[-1] = symbol[-1][:-1]
    return symbol

def main():
    hand = dealsymbol()
    eye = dealsymbol()
    mouth = dealsymbol()
    amount = [len(hand),len(eye),len(mouth)]
    N = int(input(""))
    for i in range(N):
        number = symbol_in()
        if isexist(number,amount):
            symbolprint(hand,eye,mouth,number)
        else:
            print("Are you kidding me? @\/@")

if __name__ == '__main__':
    main()
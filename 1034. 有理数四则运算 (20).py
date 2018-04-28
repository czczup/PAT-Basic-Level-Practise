class number():
    def __init__(self,num):
        if num[0] < 0 or num[1] < 0:
            self.symbol = "-"
        else:
            self.symbol = ""
        self.integer = 0
        self.numerator = abs(num[0])
        self.denominator = abs(num[1])
        self.value = ""
    def gcd(self,b,a):
        b,a=a,b%a
        if a==0:
            return b
        else:
            return self.gcd(b,a)
    def simplify(self):
        if self.denominator == 0:
            self.value = "Inf"
        elif self.numerator == 0:
            self.value = "0"
        else:
            maxnum = self.gcd(self.numerator,self.denominator) # 最大公约数
            self.integer = self.numerator // self.denominator
            self.numerator -= self.integer * self.denominator
            self.numerator = self.numerator // maxnum
            self.denominator = self.denominator // maxnum
            if self.integer == 0:
                if self.numerator == 0:
                    self.value = str(self.integer)
                else:
                    self.value = str(self.numerator) + "/" + str(self.denominator)
            else:
                if self.numerator == 0:
                    self.value = str(self.integer)
                else:
                    self.value = str(self.integer) + " " + str(self.numerator) + "/" + str(self.denominator)
    def add(self,num):
        numerator = int(self.symbol + str(self.numerator)) * num.denominator + int(num.symbol + str(num.numerator)) * self.denominator
        denominator = self.denominator * num.denominator
        return number([numerator,denominator])
    def sub(self,num):
        numerator = int(self.symbol + str(self.numerator)) * num.denominator - int(num.symbol + str(num.numerator)) * self.denominator
        denominator = self.denominator * num.denominator
        return number([numerator,denominator])
    def mul(self,num):
        numerator = int(self.symbol + str(self.numerator)) * int(num.symbol + str(num.numerator))
        denominator = self.denominator * num.denominator
        return number([numerator,denominator])
    def div(self,num):
        numerator = int(self.symbol + str(self.numerator)) * int(num.symbol + str(num.denominator))
        denominator = self.denominator * num.numerator
        return number([numerator,denominator])
    def __str__(self):
        if self.symbol == "-":
            return "(" + self.symbol + self.value + ")"
        else:
            return self.symbol + self.value


input_num = [i.split("/") for i in input().split(" ")]
num1 = number([int(i) for i in input_num[0]])
num2 = number([int(i) for i in input_num[1]])
num_add = num1.add(num2)
num_sub = num1.sub(num2)
num_mul = num1.mul(num2)
num_div = num1.div(num2)
[num.simplify() for num in [num1,num2,num_add,num_sub,num_mul,num_div]]
print(num1,"+",num2,"=",num_add)
print(num1,"-",num2,"=",num_sub)
print(num1,"*",num2,"=",num_mul)
print(num1,"/",num2,"=",num_div)
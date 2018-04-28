N,M = [int(i) for i in input().split()] # 学生人数、多选题的个数
class question():
    def __init__(self,number,score,op_num,true_op_num,true_op):
        self.number = number # 题目编号
        self.score = score # 题目分值
        self.option = [op_num,true_op_num,true_op] # 选项数，正确选项数，正确答案
        self.dic = {} # 存储各个选项的错误次数
        for i in range(op_num):
            self.dic[chr(97+i)] = 0 # 根据选项数生成字典，错误答案错误次数初始化为0
        for option in self.option[2]:
            self.dic[option] = N # 正确答案错误次数初始化为N
    def check(self,options):
        flag = False
        for op in options:
            if op not in self.option[2]:
                flag = True # 选择错误
                self.dic[op] += 1 # 错误选项被选择的次数
            else:
                self.dic[op] -= 1 # 正确选项被选择的次数
        if flag == True:
            return 0 # 得0分
        if options == self.option[2]:
            return self.score # 得满分
        else:
            return self.score*0.5 # 得一半分

lst = []
for i in range(M):
    score,op_num,true_op_num,*true_op = input().split()
    lst.append(question(i+1,int(score),int(op_num),int(true_op_num),true_op)) # 生成question对象存在lst中
for i in range(N):
    answers = input()[1:-1].split(") (")
    grade = 0
    for j in range(M):
        _,*answer = answers[j].split()
        grade += lst[j].check(answer) # 计算每个学生的总分
    print("%.1f"%grade)
max_false = max([max(question.dic.items(),key=lambda x:x[1])[1] for question in lst]) # 错误次数最大值
result = []
for i in range(M):
    for key in lst[i].dic:
        if lst[i].dic[key] == max_false and lst[i].dic[key] > 0: # 取出错误次数最大的非0记录
            result.append([max_false,lst[i].number,key,lst[i].number]) # 错误次数 题目编号-选项号
if result != []: # 若存在错误记录
    result.sort(key=lambda item:(item[3],item[2])) # 按题目编号递增顺序输出；再并列则按选项号递增顺序输出。
    for question in result:
        print(question[0],str(question[1])+"-"+str(question[2]))
else: # 所有题目都没有人错
    print("Too simple")

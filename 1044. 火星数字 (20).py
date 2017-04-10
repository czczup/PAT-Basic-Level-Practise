#1044. 火星数字 (20)
numlow = ['tret','jan', 'feb', 'mar', 'apr', 'may', 'jun',
		  'jly', 'aug', 'sep', 'oct', 'nov', 'dec']
numhigh = ['tam', 'hel', 'maa', 'huh', 'tou', 'kes',
		   'hei', 'elo', 'syy', 'lok', 'mer', 'jou']
N = eval(input(""))
for i in range(0,N):
	ch = input("")
	if ch[0].isdigit():#如果是数字
		if int(ch)<=12 and int(ch)>=0:#小于等于12
			number = int(ch)
			print(numlow[number])
		elif int(ch)%13==0 and int(ch)>0:#13的倍数
			number = int(ch)//13-1
			print(numhigh[number])
		else:#其他
			number = int(ch)
			part1 = int(number / 13)
			part2 = int(number % 13)
			print(numhigh[part1-1],numlow[part2])
	if ch[0].isalpha():#如果是字母
		lst = ch.split(' ')
		if len(lst)==1:#一串字母
			try:#小于等于12
				print(numlow.index(lst[0]))
			except:#13的倍数
				print(numhigh.index(lst[0])*13+13)
		if len(lst)==2:#两串字母
			print((numhigh.index(lst[0])+1)*13+numlow.index(lst[1]))

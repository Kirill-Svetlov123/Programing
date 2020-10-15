a = int(input('Введите число, факториал которого вы хотите узнать: '))
if (a>=1):
	for i in range (1,a):
		a = a * i
	print(a)
else: print('Введено неправильное число')
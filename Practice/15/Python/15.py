import random;
print('Данная программа загадывает число от 0 до 100.\nУ вас есть 5 попыток на то, чтобы угадать загаданное число\n')
Bool = True
while Bool == True:
	Randnum = random.randint(0, 100)
	print('Введите число')
	for i in range(0,5):
		Num = int(input())
		if (Num < Randnum):
			print('Загаданное число больше')
		elif (Num > Randnum):
			print('Загаданное число меньше')
		elif (Num == Randnum):
			print('Поздравляю! Вы угадали')
			NewTry=input('Хотите начать сначала? (1 - ДА ) ')
			if (NewTry=='1'):
				Bool = True;
			else:
				Bool = False;
	if (Num != Randnum):
		print('Вы проиграли. Было загадано: ', Randnum)
		NewTry=input('Хотите начать сначала? (1 - ДА ) ')
		if (NewTry=='1'):
			Bool = True;
		else:
			Bool = False;

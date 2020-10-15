a = int(input('Введите число: '))
b = False
for i in range (2,a-1):
	if (a % i == 0):
		b = True
if (b == True):
	print('Число сложное')
else:
	print('Число простое')
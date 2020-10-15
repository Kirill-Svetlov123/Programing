a = int(input('Введите число: '))
b = int(input('Введите степень: '))
k = 1
if (b<0):
	for i in range(b,0):
		k = k * (1/a)
	print(round(k, 2))
else:
	for i in range(0,b):
		k = k * a
	print(k)
		
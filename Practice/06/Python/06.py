import math
while 1:
	try:
		a = float(input("Введите значение a: "))
		b = float(input("Введите значение b: "))
		c = float(input("Введите значение c: "))

		if (a == 0):
			if (c == 0) & (b == 0):
				print("Корнем является любое число")
			elif (b == 0):
				print("Нет корней")
			else:
				print("x = " , -c/b)

		elif (a != 0):
			d = b * b - 4 * a * c
			if (d < 0):
				print("Нет корней")
			elif (d == 0):
				print('x = ' , -b/(2*a))
			else:
				x1 = (-b + math.sqrt(d))/(2*a)
				x2 = (-b - math.sqrt(d))/(2*a)
				print("x1 = " , x1 , " x2 = " , x2)
		break;
	except Exception:
		print("Ошибка!")
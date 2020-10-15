import math
while 1:
	try:
		print("Введите 1 или 2\n1 - чтобы найти площадь треугольника через длины его сторон\n2 - чтобы найти площадь треугольника через координаты его вершин")
		n = input()
		if n == '1':
			print("Введите длины сторон a, b и c")
			a = int(input("Введите длину стороны a: "))
			b = int(input("Введите длину стороны b: "))
			c = int(input("Введите длину стороны c: "))
			p = (a + b + c)/2
			if ((p > a) & (p > b) & (p > c)):
				S = math.sqrt(p*(p-a)*(p-b)*(p-c))
				print(round(S, 3))
			else: print("Ошибка")
		elif n == '2':
			print("Введите координаты x и y вершин A, B и C")
			x1=int(input("Введите координату x1"))
			y1=int(input("Введите координату y1"))
			x2=int(input("Введите координату x2"))
			y2=int(input("Введите координату y2"))
			x3=int(input("Введите координату x3"))
			y3=int(input("Введите координату y3"))
			S = 0.5 * abs((x1-x3)*(y2-y3) - (y1-y3)*(x2-x3))
			print(round(S, 3))
	except Exception:
		print("Ошибка!")
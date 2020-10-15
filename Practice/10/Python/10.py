while True:
	try:
		l1, r1 = map(int, input('Введите первый и последний элемент 1-го диапозона: ').split(' '))
		l2, r2 = map(int, input('Введите первый и последний элемент 2-го диапозона: ').split(' '))
		s = int(input('Введите искомую сумму: '))

		if (l1 + r2 < s):
			l1 = min(s-r2, r1)
		else:
			r2 = max(s-l1, l2)

		if l1 + r2 == s:
			print(l1,r2)
		else:
			print(-1)

		break
		
	except Exception:
		print('Ошибка!')
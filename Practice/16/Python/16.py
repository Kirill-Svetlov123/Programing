import re

while True:

	try:

		n = int(input('Введите кол-во билетов: '))
		
		if (n < 1):
			continue

		test = re.match("^a[a-z][0-9]{2}55661$", test)

		lst = [x for x in map(str, input().split(" ")) if test]

		print(' '.join(test) if test else -1)
		break

	except Exception:
		print('Ошибка!')
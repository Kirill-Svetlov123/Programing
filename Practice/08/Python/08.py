while True:
	try:
		print("Введите выражение:")
		print(eval(input()))
		break;
	except ZeroDivisionError:
		print('Делить на "0" нельзя')
	except Exception:
		print("Ошибка!")
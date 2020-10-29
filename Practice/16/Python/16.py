import re

n = int(input('Введите кол-во билетов N: '))
s = str(input('Введите билеты: ').split(' '))
pattern = r'\ba\w\d{2}55661\b'
for i in range(n):
	ticket = re.findall(pattern, s[i])
	if True:
		print(ticket)
		continue
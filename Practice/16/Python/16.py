import re

n = int(input('Введите кол-во билетов N: '))
s = str(input('Введите билеты: ').split(' '))
pattern = r'\ba\w\d{2}55661\b'
ticket = re.findall(pattern, s[i])
print(ticket)

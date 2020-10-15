n = int(input('Введите число n: '))
a = 2
k = 0
for i in range (0,n):
	if ((a**i)<=n):
		k = k + 1
print(k)
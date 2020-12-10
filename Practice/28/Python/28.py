def verification(f, i):
	if (f % i != 0 and f != 1):
		while (f % i != 0):
			i+=1
	return i

def funct(n, i, order):
	k = 0
	while (n % i == 0):
		k+=1
		n = n / i
	if (order == True):
		return n
	else:
		if (k < 2):
			return 0
		else:
			return k

def print_factorization(n):
	power = [0]*(n+1)
	factor = []
	f = n
	i = 2
	i = verification(f, i)
	while (f % i == 0):
		power[i] = funct(f, i, False)
		f = funct(f, i, True)
		factor.append(i)
		i+=1
		i = verification(f, i)
	for j in range(len(factor)):
		if (j != 0):
			print(' *',factor[j], end='')
		else:
			print(factor[j], end='')
		if (power[factor[j]] > 0):
			print(' ^',power[factor[j]], end='') 


n = int(input('Введите число n: '))
print_factorization(n)
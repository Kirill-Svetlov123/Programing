k = 0

n = 37
NumBer = []
for i in range(n):
	NumBer.append(i)

Schet = 37*[0]

max = -1

red = 0
black = 0

while(k < 12):

	a = int(input())

	if (a < 0 and a > -37):

		break

	elif (a > 36 or a < -36):

		print('Введено не верное число!')

	else:

		for i in range(37):
			if(i == a):
				Schet[i] += 1

		for i in range(37):
			if(Schet[i] > max):
				max = Schet[i]

		for i in range(37):
			if(Schet[i] == max):
				print(i, end=' ')
		print()

		for i in range(n):
			if (NumBer[i] == a):
				NumBer.remove(NumBer[i])
				n -= 1
				break

		for i in range(n):
			print(NumBer[i], end=' ')

		Znachenia = 'z101010101001010101101010101001010101' # 1 - красный, 0 - чёрный, z - ноль
		for i in range(len(Znachenia)):
			if (i == a and Znachenia[i] == '1'):
				red += 1
			elif (i == a and Znachenia[i] == '0'):
				black += 1
		print()
		print(red, black,'\n')

	k+=1
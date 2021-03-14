orig_print = print

def print(mass):
	orig_print(mass)

def sort(mass):
	for j in range(len(mass)):
		x = mass[j]
		t = j
		while(t > 0 and mass[t-1] > x):
			mass[t] = mass[t-1]
			t = t-1
		mass[t] = x

def create(length, first_num = 0, step = 0):
	mass = length*[0]
	mass[0] = first_num
	for r in range(1, length):
		mass[r] = mass[r-1] + step
	return mass

length = int(input('Введите длину массива - '))
first_num = int(input('Введите значение первого элемента массива - '))
step = int(input('Введите значение шага - '))
mass = create(length, first_num, step)
sort(mass)
print(mass)
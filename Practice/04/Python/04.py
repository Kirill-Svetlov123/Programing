print ("\nЗадание №4")
f = int(input("Введите первое число: "))
g = int(input("Введите второе число: "))
third = f; f = g; g = third
print ("\n" + str(f) + "\n" + str(g))
f, g = g, f
print ("\n" + str(f) + "\n" + str(g))
input()
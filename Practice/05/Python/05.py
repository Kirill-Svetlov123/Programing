print ("\nЗадание №5")
uskr = 9.8
x0 = int(input("Введите начальную координату: "))
v0 = int(input("Введите начальную скорость: "))
t = int(input("Введите время: "))
S = x0 + (v0 * t) - (uskr*t**2)/2
print ("Расстояние равно: " + str(S))
input()
uskr = 9.8
x0 = float(input("Введите начальную координату: "))
v0 = float(input("Введите начальную скорость: "))
t = float(input("Введите время: "))
S = x0 + (v0 * t) - (uskr*t**2)/2
S = abs(S - x0)
print ("Расстояние равно: " + str(round(S, 2)))

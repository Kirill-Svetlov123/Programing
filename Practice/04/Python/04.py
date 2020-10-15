f = input()
g = input()
third = f; f = g; g = third
print ("\n" + str(f) + "\n" + str(g))
f, g = g, f
print ("\n" + str(f) + "\n" + str(g))

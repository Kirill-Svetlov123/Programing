def replacement(top, rep):
    for i in range(len(top)):
        if ((top[i] == max(top)) and (top[i] > rep)):
            top[i] = rep
            break
    return top

def sortirovka(top):
    top.sort()
    for i in range(len(top)-1, -1, -1):
        print(top[i], end='')
    print('')

top = []
n = int(input('Введите колличество чисел n: '))
lst = list(map(int, input('Введите n чисел: ').split(' ')))
for i in range(len(lst)):
    if (len(top) == 5):
        top = replacement(top, lst[i])
    else:
        top.append(lst[i])
    sortirovka(top)
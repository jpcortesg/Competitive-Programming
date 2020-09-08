t = int(input()) # Number of cases

for x in range(t):
    n = int(input()) # Field specification
    field = input()
    cont = 0

    i = 0
    while i < n:
        if field[i] == '.':
            cont += 1
            i = i + 3
        else: i += 1
    print('Case ' + str(x+1) + ': ' + str(cont))

num = int(input())

def staircase(num):
    for x in range(num):
        print(' ' * (num - (x + 1)) + '#' * (x + 1))

staircase(num)

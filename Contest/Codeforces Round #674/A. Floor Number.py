t = int(input())

for i in range(t):
    n, x = map(int, input().split())
    if n == 1 or n == 2:
        print(1)
        continue

    for i in range(n):
        if n >= (i*x)+3 and n <= ((x*(i+1))+2):
            print(i+2)
            break

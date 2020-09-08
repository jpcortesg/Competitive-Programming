n = int(input())
rci = input().split() # Robo-Coder Inc
bsi = input().split() #other robot

contrci = 0
contbsi = 0

for i in range(n):
    if rci[i] != bsi[i]:
        if rci[i] == '1': contrci += 1
        else: contbsi += 1

if contrci == 0: print('-1')
else: print(contbsi // contrci + 1)

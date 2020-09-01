s = int(input())
st = input()

nue = ''
if s % 2 == 0:
    for x in range(s):
        if(x%2 != 0): nue = nue + st[x]
        else: nue = st[x] +  nue
else:
    for x in range(s):
        if(x%2 != 0): nue = st[x] +  nue
        else: nue = nue + st[x]

print(nue)

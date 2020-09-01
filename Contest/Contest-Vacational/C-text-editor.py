numOpe = int(input())

ope = []
for x in range(numOpe):
    oper = input()
    ope.append(oper)
S = ''
Sa = []
ind = 0
for x in ope:
    op = x[0]
    if(op == '1'):
        Sa.append(S)
        ind += 1
        S += x[2:len(x)]
    if(op == '2'):
        Sa.append(S)
        ind += 1
        n = x[2:len(x)]
        S = S[:len(S) - int(n)]
    if(op == '3'):
        n = x[2:len(x)]
        print(S[int(n) - 1])
    if(op == '4'):
        S = Sa[ind-1]
        ind-=1
        Sa.pop()

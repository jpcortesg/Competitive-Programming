nRomanos = {'M':1000, 'D':500, 'C':100, 'L':50, 'X':10, 'V':5, 'I':1}

def traducir(num):
    res = 0
    i = 0
    while i < len(num):
        if i + 1 < len(num) and nRomanos[num[i]] < nRomanos[num[i+1]]:
            res += nRomanos[num[i+1]] - nRomanos[num[i]]
            i+=2
        else:
            res += nRomanos[num[i]]
            i+=1
    return res

n = ''
casos = []

while n != '#':
    n = input()
    if( n == '#'): break
    casos.append(n)

# xx+xx=xl

for caso in casos:

    res = ''
    primerNumero = caso[0:caso.index('+')]
    segundoNumero = caso[caso.index('+')+1:caso.index('=')]
    solucion = caso[caso.index('=')+1:len(caso)]

    traduccionPrimero = traducir(primerNumero)
    traduccionS = traducir(segundoNumero)
    traduccionT = traducir(solucion)

    if(traduccionPrimero+traduccionS == traduccionT): res += 'posible'
    else: res += 'no es posible'



v = 4
v = 5 x= 10
x = ?

x = 4
4 + 4 = 44



V+V=XC
X+X=XX
XX+XX=MXC

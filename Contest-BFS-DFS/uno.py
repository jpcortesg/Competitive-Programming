def recorre(matr, posi, posj, mayor, mayorGlo, cont):
    cont += 1
    mayorGlo = max(mayor, mayorGlo)
    if(cont > len(matr)):
        return mayorGlo
    if(posi < len(matr) and posj < len(matr)):
        if(matr[posi][posj] != 0):
            mayor += matr[posi][posj]
            return recorre(matr, posj, 0, mayor, mayorGlo, cont)
        else:
            return recorre(matr, posi, posj + 1, mayor, mayorGlo, cont)
    elif(posi < len(matr) and posj == len(matr)):
        return recorre(matr, posi + 1, 0, mayor, mayorGlo, cont)
    return mayorGlo

casosDePrueba = (input())

for x in range(int(casosDePrueba)):

    print(' ')
    nodosAristas = (input())
    unidadesDeAprendizaje = (input().split(' '))
    split = nodosAristas.split(' ')
    nodos = int(split[0])
    aristas = int(split[1])

    nodosValor = []
    for x in range(len(unidadesDeAprendizaje)):
        nodosValor.append([x, unidadesDeAprendizaje[x]])

    matrCaminos = []
    for x in range(aristas): # Caminos
        camino = (input().split(' '))
        inicio = int(camino[0])
        fin = int(camino[1])
        matrCaminos.append([inicio, fin])

    matr = []
    for x in range(nodos): # Crear matriz
        arr = []
        for x in range(nodos):
            arr.append(0)
        matr.append(arr)

    for x in range(len(matrCaminos)): # Para saber cuales se conectan
        pos = matrCaminos[x]
        matr[pos[0]][pos[1]] = 1

    ret = recorre(matr, 0, 0, 0, 0, 0)
    print(ret)


    # print('grafo')
    # for x in range(len(matr)):
    #     for y in range(len(matr[x])):
    #         print(matr[x][y], end=" ")
    #     print(" ")

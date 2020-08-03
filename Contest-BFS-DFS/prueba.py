def rec(uno, dos, mayor):
    if(uno > dos):
        return mayor
    else:
        mayor += dos
        return rec(uno, dos-1, mayor)

algo = rec(3, 8, 0)
print(algo)

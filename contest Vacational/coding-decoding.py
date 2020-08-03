s = int(input())
st = input()

def decoding(st, s, ret):
    if(s == 0):
        return ret
    else:
        if(s % 2 == 0):
            ret = st[0] + ret
            st = st[1:]
            return decoding(st, s-1, ret)
        else:
            ret = ret + st[0]
            st = st[1:]
            return decoding(st, s-1, ret)

def coding(st, s, ret):
    if(s == 1 or s == 2):
        ret += st
        return ret
    else:
        if(s % 2 == 0):
            ret += st[ int(s / 2) - 1]
            st = st[: int(s / 2) - 1] + st[int(s / 2):]
            return coding(st, s-1, ret)
        else:
            ret += st[int((s-1) / 2)]
            st = st[: int((s-1) / 2)] + st[int((s-1) / 2 + 1):]
            return coding(st, s-1, ret)

cod = coding(st, s, '')
print(cod)

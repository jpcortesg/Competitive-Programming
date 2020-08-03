s = 5
st = 'londo'
st = st[int((s-1) / 2)] + st[: int((s-1) / 2)] + st[int((s-1) / 2 + 1):]
st = st[ int(s / 2) - 1] + st[: int(s / 2) - 1] + st[int(s / 2):]

print(st)

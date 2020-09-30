for i in range(int(input())):
    n, m = map(int, input().split())
    a = []
    for j in range(n):
        a.append([[int(x) for x in input().split()] for k in range(2)])
    ok = False
    for i in range(n):
        if ok or a[i][0][1] == a[i][1][0]: ok = True
        else: ok = False

    if ok and m%2 == 0: ok = True
    else: ok = False
    print("YES" if ok else "NO")

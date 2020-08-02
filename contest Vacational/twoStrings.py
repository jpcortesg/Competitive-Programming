cases = input()

s1 = []
s2 = []

for x in range(int(cases)):
    s1.append(input())
    s2.append(input())

for x in range(int(cases)):
    res = 'No'
    dicS1 = {}
    for s in s1[x]:
        if(not s in dicS1): dicS1[s] = 1

    for s in s2[x]:
        if(s in dicS1):
            res = 'Yes'
            break
    print(res)

n_k = input().split()

dic  = {'0':[], '1':[]}
sum = 0
isOne = 0

for x in range(int(n_k[0])):
    e = input().split()
    sum += int(e[0])
    if e[1] == '1':
        isOne += 1
        leng = len(dic['1'])
        i = 0
        while leng > 0 and int(dic['1'][leng-i-1]) > int(e[0]):
            if i == leng: break
            i+=1
        dic['1'].insert(leng-i, e[0])
    else: dic['0'].append(e[0])

if n_k[1] != '0':
    isOne = isOne - int(n_k[1])
    for i in range(isOne):
        sum -= int(dic['1'][i])*2

if n_k[1] == '0' and len(dic['0']) == 0: print(sum*-1)
else: print(sum)

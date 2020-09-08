n_k = input().split()
prices = list(map(int, input().split()))
prices.sort()

tot=0
cont=0
for x in range(int(n_k[0])):
    if tot+prices[x] > int(n_k[1]): break
    tot+=prices[x]
    cont+=1

print(cont)

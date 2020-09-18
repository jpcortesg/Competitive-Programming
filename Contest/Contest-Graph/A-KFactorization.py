def factRec(num,flag):

    if len(A)==0:
        return 0
    if num%A[0]==0:
        if flag == 0:
            factList.append(num)
            flag = 1
        pivot = num/A[0]
        factList.append(int(pivot))
        return factRec(pivot,flag)
    else:
        pivot = num
        del A[0]
        return factRec(pivot,flag)

n,k = input().split()
n,k = int(n),int(k)
A = list(map(int,input().strip().split(' ')))
factList = []
flag = 0
A.sort(reverse=True)
x = factRec(n,flag)
if len(factList)== 0 or factList[-1]!=1:
    print(-1)
else:
    factList.reverse()
    print(*factList)

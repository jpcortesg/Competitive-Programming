def maxMin(k, arr):
    k-=1
    arr.sort()
    mini = arr[len(arr)-1]
    for i in range(len(arr)-k):
        mini = min(arr[i+k]-arr[i], mini)
    return mini

n = int(input())
k = int(input())
arr = [int(input()) for _ in range(n)]
print(maxMin(k, arr))

eggs = int(input())

arr = ['R', 'O', 'Y', 'G', 'B', 'I', 'V']

res = ''.join(arr) * int(eggs / len(arr)) + ''.join(arr[:int(eggs % len(arr))])

print(res)

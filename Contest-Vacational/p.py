import math
import os
import random
import re
import sys

# Complete the reverseArray function below.
def reverseArray(a):
    str1 = ''
    size = len(a)
    for x in range (size):
        # if x is size: str1 += str(a.pop())
        str1 += str(a.pop()) + ''
    return (str1)

arr_count = int(input())

arr = list(map(int, input().rstrip().split()))

res = reverseArray(arr)

print(res)

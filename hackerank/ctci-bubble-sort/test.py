#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countSwaps' function below.
#
# The function accepts INTEGER_ARRAY a as parameter.
#

def countSwaps(a):
    n = len(a)
    num_swap = 0

    i = 0
    while i < n:
        j = 0
        while j < n - 1:
            if a[j] > a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]
                num_swap+=1
            j+=1
        i+=1

    return a, num_swap

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    a, num_swap  = countSwaps(a)

    print("Array is sorted in {} swaps.".format(num_swap))
    print("First Element: {}".format(a[0]))
    print("Last Element: {}".format(a[len(a)-1]))



#!/bin/python3

import math
import os
import random
import re
import sys


#https://www.hackerrank.com/challenges/array-left-rotation/problem

if __name__ == '__main__':
    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    a = list(map(int, input().rstrip().split()))

    rotation = d % n

    i = 0
    i2 = rotation
    ans = []
    while i < n:
        if i2 >= n:
            i2 = 0
        ans.append(a[i2])
        i2 = i2 + 1
        i = i + 1

    for i in range(len(ans)):
        print(ans[i],end=" ")


#!/bin/python3

import math
import os
import random
import re
import sys

### https://www.hackerrank.com/challenges/count-triplets-1/problem

# Complete the countTriplets function below.
def countTriplets(arr, r):
    count = 0
    dict_value_count = {}
    dict_value_pair_count = {}

    for x in arr[::-1]:  # reverse
        x_r = x * r
        x_r_r = x_r * r

        # if x is the first element
        count += dict_value_pair_count.get((x_r, x_r_r), 0)

        # if x is the middle element
        dict_value_pair_count[(x, x_r)] = dict_value_pair_count.get((x, x_r), 0) + dict_value_count.get(x_r, 0)

        # if x is third element
        dict_value_count[x] = dict_value_count.get(x, 0) + 1

    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nr = input().rstrip().split()

    n = int(nr[0])

    r = int(nr[1])

    arr = list(map(int, input().rstrip().split()))

    ans = countTriplets(arr, r)

    fptr.write(str(ans) + '\n')

    fptr.close()

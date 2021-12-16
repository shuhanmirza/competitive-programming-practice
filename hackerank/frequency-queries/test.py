#!/bin/python3

import math
import os
import random
import re
import sys
# https://www.hackerrank.com/challenges/frequency-queries/problem
# Complete the freqQuery function below.
def freqQuery(queries):
    result = ''
    array = []
    value_count_dict = {}  # count of a values
    count_value_dict = {}  # number of values those have same counts

    for query in queries:
        command = query[0]
        value = query[1]

        if command == 1:
            prev_count = value_count_dict.get(value, 0)
            if prev_count in count_value_dict.keys() and count_value_dict[prev_count] > 0:
                count_value_dict[prev_count] -= 1

            value_count_dict[value] = prev_count + 1

            new_count = value_count_dict[value]
            count_value_dict[new_count] = count_value_dict.get(new_count, 0) + 1

            array.append(value)

        elif command == 2:
            prev_count = value_count_dict.get(value, 0)
            if prev_count in count_value_dict.keys() and count_value_dict[prev_count] > 0:
                count_value_dict[prev_count] -= 1

            if prev_count > 0:
                value_count_dict[value] = prev_count - 1

            new_count = value_count_dict.get(value, 0)
            if new_count > 0:
                count_value_dict[new_count] = count_value_dict.get(new_count, 0) + 1

            if prev_count > 0:
                array.remove(value)

        elif command == 3:
            if count_value_dict.get(value, 0) > 0:
                result+="1"
            else:
                result+="0"


    return result


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    ans = freqQuery(queries)

    fptr.write('\n'.join(map(str, ans)))
    fptr.write('\n')

    fptr.close()

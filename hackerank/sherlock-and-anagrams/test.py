#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sherlockAndAnagrams' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#
def get_all_substrings_organized(text: str) -> dict:
    substring_list_dict = {}
    text_len = len(text)

    for i in range(text_len):
        j = i
        while j < text_len:
            sub_str = text[i:j + 1]
            len_sub_str = len(sub_str)
            if len_sub_str not in substring_list_dict.keys():
                substring_list_dict[len_sub_str] = []
            substring_list_dict[len_sub_str].append(sub_str)
            j += 1
    return substring_list_dict


def is_anagram(text1: str, text2: str) -> bool:
    if len(text1) == len(text2):
        for letter in text1:
            text2 = text2.replace(letter, "", 1)
        if len(text2) == 0:
            return True
        else:
            return False
    else:
        return False


def sherlockAndAnagrams(text):
    count = 0
    sub_str_list_dict = get_all_substrings_organized(text)

    for key in sub_str_list_dict.keys():
        sub_str_list = sub_str_list_dict.get(key)
        len_sub_str_list = len(sub_str_list)
        for i in range(len_sub_str_list):
            j = i + 1
            while j < len_sub_str_list:
                if is_anagram(sub_str_list[i], sub_str_list[j]):
                    count += 1
                j += 1

    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = sherlockAndAnagrams(s)

        fptr.write(str(result) + '\n')

    fptr.close()

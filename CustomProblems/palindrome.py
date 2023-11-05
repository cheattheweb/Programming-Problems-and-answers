#!/usr/bin/env python3


# 1,2, 3, ..., 9,11,22,33,...,99,101,111,121,... these are called palindrome numbers
# write a program that outputs the N-th palindrome number , N < 100;

num = int(input())

if num <= 9:
    print(num)
elif num > 9:
    num -= 9
    print(num * 11)

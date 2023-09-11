#!/usr/bin/env python3

x = int(input())
y = int(input())
sum = 0
for i in range(y+1, x):
    # print(i)
    if i % 2 != 0:
        # print("condition")
        # print(i)
        sum += i


print(sum)

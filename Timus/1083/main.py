str = input().split(" ")
n = int(str[0])
k = str[1].count('!')

sum = 1
while n >= 1:
    sum *= n
    n -= k

print(sum)

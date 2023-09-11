sum = 0
j = 1 
for i in range(1, 40, 2):
    sum += i / j
    j *= 2

print("%.2f"%sum)

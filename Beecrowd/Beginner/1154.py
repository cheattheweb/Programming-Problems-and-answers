i = 0
sum = 0
while True:
    age = int(input())
    if age < 0:
        break
    sum += age
    i += 1

print("%.2f" %(sum / i))


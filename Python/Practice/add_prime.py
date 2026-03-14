sum = 0

for i in range(2, 101):
    num = i
    flag = 0
    for j in range(2, num):
        if num % j == 0:
            flag = 1
            break
    if flag == 0:
        sum += num
        
print("Sum of prime numbers from 1 to 100 is:", sum)
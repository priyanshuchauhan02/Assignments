num = 11
flag = 0
for i in range(2,num):
    if num%1==0:
        flag = 1
        break

if flag == 0:
    print(f"{num} is prime")
else:
    print(f"{num} is not prime")
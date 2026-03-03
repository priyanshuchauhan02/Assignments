for i in range(3,100):
    num = i
    flag = 0
    for j in range(2,num):
        if num%j==0:
            flag=1
            break
    if flag==0:
        print(f"{i} is prime")
    else:
        pass
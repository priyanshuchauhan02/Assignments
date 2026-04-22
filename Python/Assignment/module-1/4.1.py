limit = 50

num = int(input("Enter a number20"))

if num > limit:
    print(f"{num} is greater than {limit}.")
elif num < limit:
    print(f"{num} is less than {limit}.")
else:
    print(f"{num} is exactly equal to {limit}.")
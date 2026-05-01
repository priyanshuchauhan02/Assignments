import re

# number = input("enter number: ")
# k = re.match("^[0-9]{10}$",number)
# if k is None:
#     print("Invalid number")
# else:
#     print(number)

email = "priyanshu@gmail.com"

k = re.match("^[a-z0-9_-]+@[a-z]+\\.[a-z]{2,4}$",email)
print(k)
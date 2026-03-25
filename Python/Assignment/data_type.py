age = 25                          # Integer (int): Whole numbers
price = 19.99                     # Floating point (float): Decimals
complex_num = 3 + 5j              # Complex: Real and imaginary parts

# 2. Sequence Types
user_name = "Gemini"              # String (str): Text data
prime_numbers = input ("Enter number: ")    # List: Ordered, changeable collection
coordinates = (10.0, 20.5)        # Tuple: Ordered, unchangeable collection

# 3. Mapping Type
user_data = {"id": 1, "admin": True} # Dictionary (dict): Key-Value pairs

# 4. Boolean Type
is_python_fun = True              # Boolean (bool): True or False

# 5. Set Type
unique_ids = {101, 102, 103}      # Set: Unordered collection of unique items

print("Variable Value | Data Type")
print("-" * 30)
print(f"{age}{type(age)}")
print(f"{price} {type(price)}")
print(f"{user_name} {type(user_name)}")
print(f"{prime_numbers} {type(prime_numbers)}")
print(f"{user_data} {type(user_data)}")
print(f"{is_python_fun} {type(is_python_fun)}")
list = ['apple', 'banana', 'mango']
search_target = 'mango'

for fruit in list:
    if fruit == search_target:
        print(f"Success: '{search_target}' was found in the list!")
        break  
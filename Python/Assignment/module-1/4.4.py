age = int(input("Enter your age: "))
weight = float(input("Enter your weight in kg: "))

if age >= 18:
    if weight >= 50:
        print("Eligibility: You are eligible to donate blood.")
    else:
        print("Eligibility: Denied. You must weigh at least 50kg.")
else:
    print("Eligibility: Denied. You must be at least 18 years old.")
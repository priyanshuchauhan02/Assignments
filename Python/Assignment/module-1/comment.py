# Initialize the total sum
prime_sum = 0

# Outer loop: Iterate through numbers from 2 to 100
for num in range(2, 101):
    is_prime = True  # Using a boolean 'flag' is more Pythonic than 0/1
    
    # Inner loop: Check for factors between 2 and the current number
    for i in range(2, num):
        if num % i == 0:
            is_prime = False  # Found a divisor, so it's not prime
            break             # Exit inner loop early for efficiency
            
    # If no divisors were found, add the number to the sum
    if is_prime:
        prime_sum += num

# Display the final result
print(f"Sum of prime numbers from 1 to 100 is: {prime_sum}")
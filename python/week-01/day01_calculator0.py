"""
Day: 01
Date: 2026-08-01
Topic: Simple Calculator
Challenge: Create a basic calculator that can perform addition, subtraction, multiplication, and division
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [15 minutes]
"""

# Your code here
# Prompt the user for two numbers and perform addition
x = float(input("Enter the first number: "))
y = float(input("Enter the second number: "))

z = x + y

print(f"The sum of {x} and {y} is: {z}")

z = round(x + y, 2)  # Round the result to 2 decimal places

print(f"The sum of {x} and {y} is: {z}")

print(round(x + y, 2))

print(f"{z:,}")  # Round the result to 2 decimal places

z = x / y

print(f"{z:.2f}")
# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
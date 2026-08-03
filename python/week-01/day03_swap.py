"""
Day: 03
Date: 2026-08-03
Topic: Swap two variables without using a third variable
Challenge: [Ask user for two numbers. Swap them WITHOUT using a third variable. Print before and after.
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [10 minutes]
"""

# Your code here
a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))

print(f"Before swapping: a = {a}, b = {b}")

a = a + b
b = a - b
a = a - b

print(f"After swapping: a = {a}, b = {b}")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
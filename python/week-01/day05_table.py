"""
Day: 05
Date: 2026-08-05
Topic: Multiplication Table
Challenge: Ask the user for a number. Print its multiplication table from 1 to 10.
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [05 minutes]
"""

# Your code here
number = int(input("Enter a number: "))
print(f"Multiplication Table for {number}:")
for i in range(1, 11):
    result = number * i
    print(f"{number} x {i} = {result}")
# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
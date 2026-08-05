"""
Day: 05
Date: 2026-08-05
Topic: Sum of N Numbers
Challenge: Ask the user for a number N. Calculate the sum of all numbers from 1 to N.
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [05 minutes]
"""

# Your code here
N = int(input("Enter a number N: "))
sum_of_numbers = sum(range(1, N + 1))
print(f"The sum of numbers from 1 to {N} is: {sum_of_numbers}") 
# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
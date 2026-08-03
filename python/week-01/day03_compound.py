"""
Day: 03
Date: 2026-08-03
Topic: Compound Interest Calculation
Challenge: Ask for principal (P), rate (R), and time (T) and calculate compound interest: A = P × (1 + R/100)^T
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [10 minutes]
"""

# Your code here
P = float(input("Enter principal: "))
R = float(input("Enter rate: "))
T = float(input("Enter time: "))
A = P * (1 + R/100) ** T
CI = A - P
print(f"Compound Interest: {CI}")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
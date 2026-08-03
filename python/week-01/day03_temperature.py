"""
Day: 03
Date: 2026-08-03
Topic: Convert temperature from Celsius to Fahrenheit
Challenge: Take temperature in Celsius as input and display it in Fahrenheit. Then do the reverse too — ask for Fahrenheit and convert it to Celsius.
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [10 minutes]
"""

# Your code here
celsius = float(input("Enter Celsius: "))
fahrenheit = (celsius * 9/5) + 32
print(f"Fahrenheit: {fahrenheit}")

fahrenheit = float(input("Enter Fahrenheit: "))
celsius = (fahrenheit - 32) * 5/9
print(f"Celsius: {celsius}")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
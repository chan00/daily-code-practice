"""
Day: 03
Date: 2026-08-03
Topic: Calculate the area and perimeter of a rectangle
Challenge: Take length and width as input and display the area and perimeter
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [10 minutes]
"""

# Your code here
length = float(input("Enter the length "))
width = float(input("Enter the width: "))

area = length * width
perimeter = 2 * (length + width)

print(f"Area: {area}")
print(f"Perimeter: {perimeter}")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
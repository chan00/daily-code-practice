"""
Day: 01
Date: 2026-08-01
Topic: Area Calculator
Challenge: Create a basic area calculator by defining a function with a return value
What I Learned: defining functions in Python, using return values, and calling functions from a main() function
Difficulty: [Easy]
Time Taken: [15 minutes]
"""

# Your code here
def area(length, width):
    print(str(length * width) + " square feet")
    return length * width

def main():
    house = area(10, 20)
    yard = area(15, 25)
    total = house + yard
    print(str(total) + " total square feet")

main()
# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
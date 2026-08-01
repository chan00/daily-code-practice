"""
Day: 01
Date: 2026-08-01
Topic: Simple Calculator
Challenge: Create a basic calculator by defining a function with a return value
What I Learned: defining functions in Python, using return values, and calling functions from a main() function
Difficulty: [Easy]
Time Taken: [15 minutes]
"""

# Your code here
def main():
    x = int(input("Enter the first number: "))
    print("x sqaured is: ", square(x))

def square(n):
    return n * n

main()

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
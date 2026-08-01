"""
Day: 01
Date: 2026-08-01
Topic: Input and Output in Python using main() and def
Challenge: Print a simple message to the console
What I Learned: defining functions in Python, using default parameters, and calling functions from a main() function
Difficulty: [Easy]
Time Taken: [20 minutes]
"""

def main():
    name = input("What is your name? ")
    hello(name)

def hello(to="world"):
    print(f"Hello, {to}!")

main()

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
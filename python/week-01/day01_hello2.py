"""
Day: 01
Date: 2026-08-01
Topic: Input and Output in Python using def and functions
Challenge: Print a simple message to the console
What I Learned: defining functions in Python, using default parameters
Difficulty: [Easy]
Time Taken: [20 minutes]
"""

def hello():
    print("Hello, World!")

name = input("What is your name? ")
hello()
print(f"Hello, {name}!")

def hello_(to):
    print(f"Hello, {to}!")

name = input("What is your name? ")
hello_(name)

def hello__(to = "World"):
    print(f"Hello, {to}!")

hello__()
name = input("What is your name? ")
hello__(name)

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
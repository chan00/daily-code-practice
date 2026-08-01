"""
Day: 01
Date: 2026-08-01
Topic: Input and Output in Python
Challenge: Print a simple message to the console
What I Learned: stings with strip(), title(), split(), and f-strings for formatting output
Difficulty: [Easy]
Time Taken: [20 minutes]
"""

name = input("What is your name? ")

# using strip() to remove any leading or trailing whitespace from the input
name = name.strip()

# Using title() to capitalize the first letter of each word in the name
name = name.title()

# Using split() to separate the first and last name into two variables
first, last = name.split(" ")

# Using "+" to concatenate strings
print("hello, " + name)

# When used "," in print(), it automatically adds a space between the items being printed
print("hello,", name)

# Ask the user for their name, remove whitespace from the str and capitalize the first letter of each word
name = input("What is your name? ").strip().title()

# the most elegant way to use strings. f(formatted strings) is a special indicator for Python to treat this string a special way
print(f"Hello, {name}!")

print(f"Hello, {first} {last}!")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
"""
Day: 04
Date: 2026-08-04
Topic: Voter Eligibility
Challenge: Ask for the user's age. Print "You can vote!" if 18 or older, otherwise print "You cannot vote yet. X years to go." where X is how many years they need to wait.
What I Learned: if else elif loop
Difficulty: [Easy]
Time Taken: [05 minutes]
"""

# Your code here
age = int(input("Enter your age: "))

if age >= 18:
    print("You can vote!")
else:
    years_to_go = 18 - age
    print(f"You cannot vote yet. {years_to_go} years to go.")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
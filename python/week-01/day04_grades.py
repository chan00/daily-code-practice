"""
Day: 04
Date: 2026-08-04
Topic: Grades
Challenge: Ask for a grade (0-100) and print the corresponding letter grade.
What I Learned: if else elif loop
Difficulty: [Easy]
Time Taken: [05 minutes]
"""

# Your code here
grade = int(input("Enter your grade (0-100): "))
if grade >= 90 and grade <= 100:
    print("Your letter grade is: A")
elif grade >= 80 and grade <= 89:
    print("Your letter grade is: B")
elif grade >= 70 and grade <= 79:
    print("Your letter grade is: C")
elif grade >= 60 and grade <= 69:
    print("Your letter grade is: D")
elif grade < 60:
    print("Your letter grade is: F")
else:
    print("Invalid grade entered. Please enter a grade between 0 and 100.")
# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
"""
Day: 03
Date: 2026-08-03
Topic: Calculate BMI (Body Mass Index)
Challenge: Take weight and height as input and display the BMI and Print the BMI and the category
What I Learned: [Fill this AFTER completing]
Difficulty: [Easy]
Time Taken: [10 minutes]
"""

# Your code here
weight = float(input("Enter your weight in kg: "))
height = float(input("Enter your height in meters: "))
bmi = weight / (height ** 2)
print(f"Your BMI is: {bmi:.2f}")

if bmi < 18.5:
    category = "Underweight"
elif 18.5 <= bmi < 25:
    category = "Normal weight"
elif 25 <= bmi < 30:
    category = "Overweight"
else:
    category = "Obese"

print(f"Category: {category}")

# ============ NOTES ============
# Write any observations, tricks, or "aha!" moments here
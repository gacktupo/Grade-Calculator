# Grade-Calculator
This program calculates the final numerical score and letter grade for a student.

Program description:
The purpose of the program is to calculate the final numerical score and letter grade for a student in a course. The program prompts the user to enter the number of assignments, assignment scores, midterm score, and final exam score. It then calculates the average assignment score, the final numerical score based on the weights of assignments, midterm, and final exam, and determines the corresponding letter grade. The program provides data validation to ensure that the entered values are within the specified ranges and displays the final numerical score, letter grade, and the corresponding level.

Sample run:
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.

Enter the number of assignments (0 to 10): 3
Enter score 1: 4
Enter score 2: 4
Enter score 3: 4
Enter your midterm exam score: 4
Enter your final exam score: 3

Your Final Numeric score is 3.8
Your Final Grade is A
Level: Exceeds

Thank you for using my Grade Calculator!
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.

Enter the number of assignments (0 to 10): 1
Enter score 1: 12
Illegal Score! Please try again!
Enter score 1: 1
Enter your midterm exam score: 3
Enter your final exam score: 3

Your Final Numeric score is 1.8
Your Final Grade is D
Level: Not Yet

Thank you for using my Grade Calculator!
--------------------------------------------------
Inputs:
------
Number of assignments: Integer
Assignment scores: Floating-point numbers
Midterm exam score: Floating-point number
Final exam score: Floating-point number

Outputs: 
---------
Final numeric score: Floating-point number
Final letter grade: Character (representing a letter grade)


Calculations: 
-----------------
Calculation of the average assignment score: Sum up all the assignment scores and divide by the total number of assignments.
Formula: average = sum of assignment scores / number of assignments
Calculation of the final numerical score: Apply the weightage to the assignment average, midterm score, and final exam score.
Formula: final score = (assignment average * assignment weight) + (midterm score * midterm weight) + (final exam score * final exam weight)
Determination of the letter grade: Based on the final numerical score, assign a letter grade according to the specified ranges and thresholds.
Formulas:
If the final score is >= 3.3 and <= 4.0: Letter grade is 'A'.
If the final score is >= 2.8 and < 3.3: Letter grade is 'B'.
If the final score is >= 2.0 and < 2.8: Letter grade is 'C'.
If the final score is >= 1.2 and < 2.0: Letter grade is 'D'.
If the final score is > 0.0 and < 1.2: Letter grade is 'F'.






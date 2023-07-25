/******************************************************************************
# Author:           Courtney
# Lab:              Assignment #9
# Date:             June 6th, 2023
# Description:      Calculate the final numerical score and letter grade for a student
# Input:           Number of assignments: Integer, Assignment scores: Floating-point numbers, Midterm exam score: Floating-point number, Final exam score: Floating-point number
# Output:           Final numeric score: Floating-point number, Final letter grade: Character
#******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

// function prototypes
void welcomeMessage();
int readInt(string prompt, int minVal, int maxVal);
double readScore(string prompt, double minVal, double maxVal);
double assignAverage(int numAssigns);
void getInput(double &midtermScore, double &finalExamScore);
double calcFinalScore(double assignAvg, double midterm, double final);
char calcLetterGrade(double finalScore);
void printResults(double finalScore, char letterGrade);
void goodbyeMessage();

int main() {
  welcomeMessage();

  // read the number of assignments
  int numAssignments =
      readInt("Enter the number of assignments (0 to 10): ", 0, 10);

  // calculate the average assignment score
  double assignmentAverage = assignAverage(numAssignments);

  // read the midterm and final exam scores
  double midtermScore, finalExamScore;
  getInput(midtermScore, finalExamScore);

  // calculate the final score
  double finalScore =
      calcFinalScore(assignmentAverage, midtermScore, finalExamScore);

  // calculate the letter grade
  char letterGrade = calcLetterGrade(finalScore);

  // print the results
  printResults(finalScore, letterGrade);

  goodbyeMessage();

  return 0;
}

// function to display the welcome message
void welcomeMessage() {
  cout << "Welcome to my Final Grade Calculator!" << endl;
  cout << "Please enter the following information and I will calculate your "
          "Final Numerical Grade and Letter Grade for you!"
       << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4." << endl << endl;
}

// function to display the goodbye message
void goodbyeMessage() {
  cout << "Thank you for using my Grade Calculator!" << endl;
}

// function to read an integer from the user within a specified range
int readInt(string prompt, int minVal, int maxVal) {
  int num;
  cout << prompt;
  cin >> num;
  while (num < minVal || num > maxVal) {
    cout << "Illegal Value! Please try again!!" << endl;
    cout << prompt;
    cin >> num;
  }
  return num;
}

// function to read a score from the user within a specified range
double readScore(string prompt, double minVal, double maxVal) {
  double score;
  cout << prompt;
  cin >> score;
  while (score < minVal || score > maxVal) {
    cout << "Illegal Score! Please try again!" << endl;
    cout << prompt;
    cin >> score;
  }
  return score;
}

// function to calculate the average assignment score
double assignAverage(int numAssigns) {
  double sum = 0;
  for (int i = 1; i <= numAssigns; i++) {
    double score = readScore("Enter score " + to_string(i) + ": ", 0, 4);
    sum += score;
  }
  return sum / numAssigns;
}

// function to read the midterm and final exam scores
void getInput(double &midtermScore, double &finalExamScore) {
  midtermScore = readScore("Enter your midterm exam score: ", 0, 4);
  finalExamScore = readScore("Enter your final exam score: ", 0, 4);
}

// function to calculate the final score
double calcFinalScore(double assignAvg, double midterm, double final) {
  const double ASSIGNMENT_WEIGHT = 0.6;
  const double EXAM_WEIGHT = 0.2;
  return (assignAvg * ASSIGNMENT_WEIGHT) + (midterm * EXAM_WEIGHT) +
         (final * EXAM_WEIGHT);
}

// function to calculate the letter grade
char calcLetterGrade(double finalScore) {
  if (finalScore >= 3.3) {
    return 'A';
  } else if (finalScore >= 2.8) {
    return 'B';
  } else if (finalScore >= 2.0) {
    return 'C';
  } else if (finalScore >= 1.2) {
    return 'D';
  } else {
    return 'F';
  }
}

// function to print the final score and letter grade
void printResults(double finalScore, char letterGrade) {
  string level;
  switch (letterGrade) {
  case 'A':
    level = "Exceeds";
    break;
  case 'B':
    level = "Meets";
    break;
  case 'C':
    level = "Approaching";
    break;
  case 'D':
    level = "Not Yet";
    break;
  case 'F':
    level = "No Evidence";
    break;
  }

  cout << endl;
  cout << "Your Final Numeric score is " << finalScore << endl;
  cout << "Your Final Grade is " << letterGrade << endl;
  cout << "Level: " << level << endl << endl;
}

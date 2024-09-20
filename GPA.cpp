#include <iostream>
using namespace std;

int main() {
    const int numCourses = 3; 
    double totalGradePoints = 0.0;
    double totalCreditHours = 0.0;
    double gradePoints = 0.0;
    double grade1, grade2, grade3;
    int credits1, credits2, credits3;
    
    
    // Course 1 User Input
    cout << "Enter the grade (0.0 - 4.0) for Course 1: ";
    cin >> grade1;

    cout << "Enter the credit hours for Course 1: ";
    cin >> credits1;

    // Ensure the grade is within the valid range for Course 1
    if (grade1 >= 0.0 && grade1 <= 4.0) {
        // Calculate the grade points for Course 1
        gradePoints = grade1 * credits1;

        // Update the total grade points and total credit hours
        totalGradePoints += gradePoints;
        totalCreditHours += credits1;
    } else {
        cout << "Invalid grade entered for Course 1. Please enter a grade between 0.0 and 4.0.";
        return 1; // Exit the program with an error code
    }

    // Course 2
    cout << "Enter the grade (0.0 - 4.0) for Course 2: ";
    cin >> grade2;

    cout << "Enter the credit hours for Course 2: ";
    cin >> credits2;

    // Ensure the grade is within the valid range for Course 2
    if (grade2 >= 0.0 && grade2 <= 4.0) {
        // Calculate the grade points for Course 2
        gradePoints = grade2 * credits2;

        // Update the total grade points and total credit hours
        totalGradePoints += gradePoints;
        totalCreditHours += credits2;
    } else {
        cout << "Invalid grade entered for Course 2. Please enter a grade between 0.0 and 4.0." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Enter the grade (0.0 - 4.0) for Course 3: ";
    cin >> grade3;

    cout << "Enter the credit hours for Course 3: ";
    cin >> credits3;
    
        // Ensure the grade is within the valid range for Course 3
    if (grade3 >= 0.0 && grade3 <= 4.0) {
        // Calculate the grade points for Course 2
        gradePoints = grade3 * credits3;

        // Update the total grade points and total credit hours
        totalGradePoints += gradePoints;
        totalCreditHours += credits3;
    } else {
        cout << "Invalid grade entered for Course 3. Please enter a grade between 0.0 and 4.0." << endl;
        return 1; // Exit the program with an error code
    }


    // Calculate the GPA
    double gpa = totalGradePoints / totalCreditHours;
    
    char finalLetterGrade;
    if (gpa >= 3.5) {
        finalLetterGrade = 'A';
    } else if (gpa >= 3.0) {
        finalLetterGrade = 'B';
    } else if (gpa >= 2.0) {
        finalLetterGrade = 'C';
    } else if (gpa >= 1.0) {
        finalLetterGrade = 'D';
    } else {
        finalLetterGrade = 'F';
    }

    // Display the GPA with two decimal places
    cout << "Your GPA is: " << gpa << endl;
    cout << "Your final letter grade is: " << finalLetterGrade;

    return 0; 
}

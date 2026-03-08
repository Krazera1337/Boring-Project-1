#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
int x;
double totalPoints = 0;
int totalCredits = 0;

cout << "How many classes do you have? ";
cin >> x;

for (int i = 0; i < x; i++) {
string subject;
int credits;
char grade;
double gradeValue = 0;

cout << "Class" << i + 1 << endl;
cout << "Enter Subject Name: ";
cin >> subject;
cout << "Enter Credit Hours: ";
cin >> credits;
cout << "Enter Grades : ";
cin >> grade;

switch(toupper(grade)) {
case 'A': gradeValue = 4.0; break;
case 'B': gradeValue = 3.0; break;
case 'C': gradeValue = 2.0; break;
case 'D': gradeValue = 1.0; break;
case 'F': gradeValue = 0.0; break;
default: 
cout << "Invalid Grade Entered" << endl;
}

totalPoints += (gradeValue * credits );
totalCredits += credits;
}

if (totalCredits > 0) {
double gpa = totalPoints / totalCredits;
cout << "\n================================" << endl;
cout << "Total Credits: " << totalCredits << endl;
cout << "Your GPA is "<< gpa << endl;
cout << "==============================" << endl;
} else {
cout << "No credits entered, cannot calculate GPA." << endl;
}

return 0;

}

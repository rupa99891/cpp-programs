#include <iostream>
#include <string>
using namespace std;
void printDetails(string name, int rollNumber) {
 cout << "\nStudent Details:\n";
 cout << "Name: " << name << "\nRoll Number: " << rollNumber << endl;
}
void printDetails(string name, string subject) {
	cout << "\nTeacher Details:\n";
 cout << "Name: " << name << "\nSubject: " << subject << endl;
}
void printDetails(string courseName, float duration) {
 cout << "\nCourse Details:\n";
 cout << "Course Name: " << courseName << "\nDuration: " << duration << " months" << endl;
 }
int main() {
 int choice;
 cout << "Select Option:\n";
 cout << "1. Print Student Details\n";
 cout << "2. Print Teacher Details\n";
 cout << "3. Print Course Details\n";
 cout << "Enter your choice (1-3): ";
 cin >> choice;
 cin.ignore();
 if (choice == 1) {
 	string name;
 int roll;
 cout << "Enter Student Name: ";
 getline(cin, name);
 cout << "Enter Roll Number: ";
 cin >> roll;
 printDetails(name, roll);
 }
 else if (choice == 2) {
 string name, subject;
 cout << "Enter Teacher Name: ";
 getline(cin, name);
 cout << "Enter Subject: ";
 getline(cin, subject);
 printDetails(name, subject);
 }
 else if (choice == 3) {
 string course;
 float duration;
 cout << "Enter Course Name: ";
 getline(cin, course);
 cout << "Enter Duration (in months): ";
 cin >> duration;
 printDetails(course, duration);
 }
 else {
 cout << "Invalid Choice!" << endl;
 }
 return 0;
}

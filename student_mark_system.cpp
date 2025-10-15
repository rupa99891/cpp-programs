#include <iostream>
#include <string>
using namespace std;
class Student {
private:
 string studentName;
 int rollNumber;
 float marks;
public:
 string college;
 void setDetails() {
 cout << "Enter student name: ";
 cin.ignore();
 getline(cin, studentName);
 cout << "Enter roll number: ";
 cin >> rollNumber;
 cout << "Enter marks (out of 100): ";
 cin >> marks;
 }
 void displayDetails() {
 cout << "\n--- Student Details ---\n";
 cout << "Name : " << studentName << endl;
 cout << "Roll No : " << rollNumber << endl;
 cout << "Marks : " << marks << endl;
 cout << "College : " << college << endl;
 }
};
int main() {
 Student s1;
 cout << "Enter college name: ";
 getline(cin, s1.college);
 s1.setDetails();
 s1.displayDetails();
 s1.college = "Aditya University";
 cout << "\nUpdated College Name: " << s1.college << endl;
 return 0;}

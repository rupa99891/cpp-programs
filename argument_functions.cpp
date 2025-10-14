#include <iostream>
using namespace std;
void greet(string name, string greeting = "Hello", int times = 1) {
 for (int i = 0; i < times; ++i) {
 cout << greeting << ", " << name << "!" << endl;
 }
}
int main() {
 string name, greeting;
 int choice, times;
 cout << "Enter your name: ";
 getline(cin, name);
 cout << "\nChoose Greeting Type:\n";
 cout << "1. Just Name (use default greeting and times)\n";
 cout << "2. Name and Custom Greeting (use default times)\n";
 cout << "3. Name, Custom Greeting, and Times\n";
 cout << "Enter your choice (1-3): ";
 cin >> choice;
 cin.ignore();
 if (choice == 1) {
 greet(name);
 }
 else if (choice == 2) {
 cout << "Enter your custom greeting (e.g., Hi, Welcome, Good Morning): ";
 getline(cin, greeting);
 greet(name, greeting);
 }
 else if (choice == 3) {
 cout << "Enter your custom greeting: ";
 getline(cin, greeting);
 cout << "How many times do you want the greeting? ";
 cin >> times;
 greet(name, greeting, times);
 }
 else {
 cout << "Invalid choice!" << endl;
 }
 return 0;
}

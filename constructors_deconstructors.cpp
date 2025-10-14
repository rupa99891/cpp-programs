#include <iostream>
using namespace std;
class Rectangle {
private:
int length;
int width;
public:
Rectangle() {
length = 0;
width = 0;
cout << "Default constructor called!" << endl;
}
Rectangle(int side) {
	length = side;
width = side;
cout << "Square constructor called!" << endl;
}
Rectangle(int l, int w) {
length = l;
width = w;
cout << "Rectangle constructor called!" << endl;
}
void display() {
cout << "Length: " << length << ", Width: " << width << endl;
}
};
int main() {
int choice;
cout << "Choose how to create the rectangle:\n";
cout << "1. Default (0x0)\n";
cout << "2. Square (one side)\n";
cout << "3. Rectangle (length & width)\n";
cout << "Enter choice: ";
cin >> choice;
if (choice == 1) {
Rectangle r1;
r1.display();
}
else if (choice == 2) {
	int side;
cout << "Enter side length: ";
cin >> side;
Rectangle r2(side);
r2.display();
}
else if (choice == 3) {
int l, w;
cout << "Enter length: ";
cin >> l;
cout << "Enter width: ";
cin >> w;
Rectangle r3(l, w);
r3.display();
}
else {
cout << "Invalid choice!\n";
}
return 0;
}

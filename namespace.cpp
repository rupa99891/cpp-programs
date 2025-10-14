#include <iostream>
int value = 100;
namespace A {
 int value = 10;
 void display() {
 std::cout << "Namespace A value: " << value << std::endl;
 }
}
namespace B {
 int value = 20;
 void display() {
 std::cout << "Namespace B value: " << value << std::endl;
  }
}
void show() {
 int value = 50;
 std::cout << "Local value in show(): " << value << std::endl;
 std::cout << "Global value accessed with scope resolution: " << ::value << std::endl;
}
int main() {
 A::display();
 B::display();
 show();
return 0;
}

#include <iostream>
using namespace std;
class Animal {
public:
 virtual void speak() {
 cout << "Animal makes a sound." << endl;
  }
};
class Dog : public Animal {
public:
 void speak() override {
 cout << "Dog barks." << endl;
 }
};
class Cat : public Animal {
public:
 void speak() override {
 cout << "Cat meows." << endl;
 }
};
int main() {
	Animal* animalPtr;
 Dog d;
 Cat c;
 animalPtr = &d;
 animalPtr->speak(); // Runtime call to Dog::speak()
 animalPtr = &c;
 animalPtr->speak(); // Runtime call to Cat::speak()
 return 0;
}

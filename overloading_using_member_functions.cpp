#include <iostream>
using namespace std;
class complex {
private:
 float real, image;
public:
 complex(float r = 0, float i = 0) : real(r), image(i) {}
 void display() const {
 cout << real << "+" << image << "i" << endl;
 }
 friend complex operator-(const complex& c);
 friend complex operator++(complex& c);
 friend complex operator+(const complex& a, const complex& b);
 friend complex operator-(const complex& a, const complex& b);
};
complex operator-(const complex& c) {
 return complex(-c.real, -c.image);
}
complex operator++(complex& c) {
 ++c.real;
 ++c.image;
 return c;
}
complex operator+(const complex& a, const complex& b) {
 return complex(a.real + b.real, a.image + b.image);
}
complex operator-(const complex& a, const complex& b) {
 return complex(a.real - b.real, a.image - b.image);
}
int main() {
 complex c1(3, 4), c2(1, 2), c3;
 cout << "Original complex numbers:" << endl;
 cout << "c1 = "; c1.display();
 cout << "c2 = "; c2.display();
 c3 = -c1;
 cout << "\nAfter unary - on c1:" << endl;
 cout << "c3 = "; c3.display();
 ++c1;
 cout << "\nAfter unary ++ on c1:" << endl;
 cout << "c1 = "; c1.display();
 c3 = c1 + c2;
 cout << "\nAfter c1 + c2:" << endl;
 cout << "c3 = "; c3.display();
 c3 = c1 - c2;
 cout << "\nAfter c1 - c2:" << endl;
 cout << "c3 = "; c3.display();
 return 0;
}

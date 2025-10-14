#include <iostream>
using namespace std;
inline int square(int x) {
 return x * x;
}
inline int max(int a, int b) {
 return (a > b) ? a : b;
}
int main() {
 int num1 = 5, num2 = 8;
 cout << "Square of " << num1 << " = " << square(num1) << endl;
 cout << "Square of " << num2 << " = " << square(num2) << endl;
 cout << "Maximum of " << num1 << " and " << num2 << " = " << max(num1, num2) << endl;
 return 0;
}

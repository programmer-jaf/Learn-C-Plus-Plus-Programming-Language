#include <iostream>

using namespace std;

int main(){
  cout << "learn about operators in C++" << endl;
  
  // Arithmetic operators
  int a = 10, b = 5;
  cout << "Addition: " << a + b << endl;
  cout << "Subtraction: " << a - b << endl;
  cout << "Multiplication: " << a * b << endl;
  cout << "Division: " << a / b << endl;
  cout << "Modulus: " << a % b << endl;

  // Assignment operators

  // Equals operator (=)
  int c = 10;
  // Plus equals to (+=)
  c += 10;
  cout << "Value of c after += operation: " << c << endl;
  // Minus equals to (-=)
  c-= 10;
  cout << "Value of c after -= operation: " << c << endl;
  // Multiply equals to (*=)
  c*= 10;
  cout << "Value of c after *= operation: " << c << endl;
  // Division equals to (/=)
  c /= 10;
  cout << "Value of c after *= operation: " << c << endl;
  // Modulus equals to (%=)
  c%= 10;
  cout << "Value of c after %= operation: " << c << endl;
  
  // Increment and decrement operators
  // Prefix Increment (++)
  int d = 10;
  cout << "Value of d before ++ operation: " << d << endl;
  cout << "Value of d after ++ operation: " << ++d << endl;
  // Postfix Increment (++)
  int e = 10;
  cout << "Value of e before ++ operation: " << e << endl;
  cout << "Value of e after ++ operation: " << e++ << endl;
  // Prefix Decrement (--)
  int f = 10;
  cout << "Value of f before -- operation: " << f << endl;
  cout << "Value of f after -- operation: " << --f << endl;
  // Postfix Decrement (--)
  int g = 10;
  cout << "Value of g before -- operation: " << g << endl;
  cout << "Value of g after -- operation: " << g-- << endl;
  
  // Logical operators
  int h = 5, i = 10;
  cout << "Logical AND: " << (h && i) << endl;
  cout << "Logical OR: " << (h || i) << endl;
  cout << "Logical NOT: " << (!h) << endl;
  
  // Ternary operator
  int j = 5, k = 10;
  cout << "Ternary operator: " << ((j < k)? j : k) << endl;
  
  // Bitwise operators
  int l = 5, m = 10;
  cout << "Bitwise AND: " << (l & m) << endl;
  cout << "Bitwise OR: " << (l | m) << endl;
  cout << "Bitwise XOR: " << (l ^ m) << endl;
  cout << "Bitwise NOT: " << (~l) << endl;
  cout << "Left shift: " << (l << 2) << endl;
  cout << "Right shift: " << (l >> 2) << endl;
  
  // Comma operator
  int n = 5, o = 10;
  cout << "Comma operator: " << (n++, o--) << endl;
  cout << "Value of n after comma operation: " << n << endl;
  cout << "Value of o after comma operation: " << o << endl;
  return 0;
}
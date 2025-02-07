#include <iostream>

using namespace std;

int main() {
  cout << "User inputs in C++" << endl;
  
  // Declare variables
  int number1, number2;
  
  // Ask user for input
  cout << "Enter first number: ";
  cin >> number1;
  cout << "Enter second number: ";
  cin >> number2;
  
  // Perform addition
  int sum = number1 + number2;
  
  // Display the result
  cout << "Sum: " << sum << endl;
  
  // End the program
  return 0; 
}
#include<iostream>

using namespace std;
//main Program
int main() {
  int rem, num, sum = 0;
  cout << "Enter the number to check : ";
  //user input
  cin >> num;
  //loop to find the sum of divisors
  for (int i = 1; i < num; i++) {
    rem = num % i;
    if (rem == 0)
      sum += i;
  }
  //checking for perfect number
  if (sum == num)
    cout << num << " is a perfect number.";
  else
    cout << num << " is not a perfect number.";
}

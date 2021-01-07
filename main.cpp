#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
  double result = 0, input;
  while (true) {
    cout << "Enter a number to add to sum. "; 
    cout << "Or enter a non-number to quit and calculate sum." << endl;
    cin >> input;
    //check if input matches data type
    if (cin.good())
      result += input;
    if (cin.fail())
      cout << "Sum = " << result << endl;
      break;
  }
}

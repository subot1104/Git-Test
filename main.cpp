
#include <iostream>

using namespace std;

int sum (int n);

int main() {
  int n;
  
  cout << "Hello World!" << endl;
  
  cout << "Please enter an integer." << endl;
  cin >> n;
  
  cout << sum (n) << endl;
  
  return 0;
}

int sum (int n) {
  int sum = 0;
  
  for (int i = 1; i <= n; i++)
    sum += i;
  
  return sum;
}

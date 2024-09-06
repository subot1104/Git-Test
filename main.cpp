
#include <iostream>

using namespace std;


/**
 * Adds all positive integers from 1 to n"
 *
 * @param int n inputted integer
 * @pre There is an integer to be inputted
 * @return int the total sum from 1 to n
 * @post 
 * 
 */
int sum (int n);


/**
 * Multiplies all positive integers from 1 to n
 *
 * @param int n inputted integer
 * @pre There is an integewr to be inputted
 * @return int the total product from 1 to n
 * @post 
 * 
 */
int prod (int n);

int main() {
  int n;
  
  cout << "Hello World!" << endl;
  
  cout << "Please enter an integer." << endl;
  cin >> n;
  
  cout << "The sum from 1 to " << n << " is " << sum (n) << '.' << endl;

  cout << "The product from 1 to " << n << " is " << prod (n) << '.' << endl;

  return 0;
}

int sum (int n) {
  int sum = 0;
  
  for (int i = 1; i <= n; i++)
    sum += i;
  
  return sum;
}

int prod (int n) {
  int prod = 1;
  for (int i = 1; i <= n; i++)
    prod = prod * i;
  return prod;
}
  

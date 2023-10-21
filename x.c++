#include <iostream>

using namespace std;

void print_x_mark(int n) {
  // Check if the input is valid.
  if (n % 2 == 0) {
    cout << "The input is not valid. N must be an odd number." << endl;
    return;
  }

  // Loop over the rows.
  for (int i = 0; i < n; i++) {
    // Print the first and last characters.
    if (i == 0 || i == n - 1) {
      cout << "*";
      for (int j = 1; j < n - 1; j++) {
        cout << "*";
      }
      cout << "*";
    } else {
      cout << "*";
      cout << "/";
      for (int j = 1; j < n - 1; j++) {
        cout << "*";
      }
      cout << "\\";
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  // Get the input from the user.
  int n;
  cin >> n;

  // Print the X mark.
  print_x_mark(n);

  return 0;
}
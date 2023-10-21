#include <iostream>

using namespace std;

void draw_x_mark(int n) {
  // Check if the input is valid.
  if (n % 2 == 0) {
    cout << "The input is not valid. N must be an odd number." << endl;
    return;
  }

  // Create a 2D array to store the X mark.
  char array[n][n];

  // Initialize the array with X's.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      array[i][j] = 'X';
    }
  }

  // Set the top left and bottom right corners to slashes.
  array[0][0] = '/';
  array[n - 1][n - 1] = '/';

  // Set the top right and bottom left corners to backslashes.
  array[n - 1][0] = '\\';
  array[0][n - 1] = '\\';

  // Set the center of the X mark to asterisks.
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      array[i][j] = '*';
    }
  }

  // Print the X mark.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << array[i][j];
    }
    cout << endl;
  }
}

int main() {
  // Get the input from the user.
  int n;
  cin >> n;

  // Draw the X mark.
  draw_x_mark(n);

  return 0;
}
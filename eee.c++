#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int min_val = arr[0];
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (i % k == 0) {
      cout << min_val << " ";
      min_val = arr[i];
    } else {
      min_val = min(min_val, arr[i]);
    }
    j++;
  }

  if (j % k != 0) {
    cout << min_val << endl;
  }

  return 0;
}

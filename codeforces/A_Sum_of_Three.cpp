#include <iostream>
using namespace std;
bool findTriplet(int n, int& x, int& y, int& z) {
  for (int i = 1; i <= n / 3; i++) {
    for (int j = i + 1; j <= n / 2; j++) {
      int k = n - i - j;
      if (i%3==0 || j%3==0 || k%3==0) {
        continue;
      }
      if (i != j && j != k && i != k) {
        x = i;
        y = j;
        z = k;
        return true;
      }
    }
  }

  return false;
}

int main() {
  int t;
  cin >> t;

  while (t--)     {
    int n;
    cin   >>    n;

    int  x,  y, z;
    if (findTriplet (n, x, y, z)) {
      cout << "YES" << endl;
      cout << x << " " << y << " " << z << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
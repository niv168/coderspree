#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= (n - i))
        cout << "\t";
      else
        cout << "*\t";
    }
    cout << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  cout << ((n & (1<<x))?"Yes":"No") << endl;

  return 0;
}

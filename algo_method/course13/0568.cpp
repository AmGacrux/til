#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int j = 0; j < m; ++j) cin >> b[j];

  int sum = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      sum += (a[i] + b[j]);
    }
  }

  cout << sum << endl;

  return 0;
}

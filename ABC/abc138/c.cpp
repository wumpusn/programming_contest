#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; ++i) cin >> a[i];

  sort(a, a + n);
  double ans = a[0];
  for(int i = 0; i < n; ++i){
    ans = ( a[i] + ans ) / 2.0;
  }
  cout << fixed;
  cout << setprecision(8);
  cout << ans << endl;
}

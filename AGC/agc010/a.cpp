#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[110000];
	cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		if(a[i] % 2 != 0) cnt++;
	}
	if(cnt % 2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

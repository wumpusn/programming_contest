#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0;
	int digit = n;
	while(digit){
		sum += digit % 10;
		digit /= 10;
	}
	if(n % sum == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(char c : s){
		if(c == '1') cout << 9;
		else cout << 1;
	}
}

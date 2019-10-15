#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int n; cin >> n;
	vector<pair<string, int>> a(n);
	int sum = 0;
	rep(i, n) {
		cin >> a[i].first >> a[i].second;
		sum += a[i].second;
	}
	rep(i, n){
		if(a[i].second >= sum / 2){
			cout << a[i].first;
			return 0;
		}
	}
	cout << "atcoder";

}

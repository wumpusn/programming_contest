#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
const ll INF = 1LL << 60;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	int maxv = max({a, b, c});
	sum -= maxv;
	if(maxv == sum) puts("Yes");
	else puts("No");
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M, C; cin >> N >> M >> C;
	vector<int> B(M);
	vector<vector<int>> A(N, vector<int>(M));
	for(int i = 0; i < M; ++i) cin >> B[i];
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			cin >> A[i][j];
		}
	}
	int cnt = 0;
	for(int i = 0; i < N; ++i){
		int ans = C;
		for(int j = 0; j < M; ++j){
			ans += A[i][j] * B[j];
		}
		if(ans > 0) cnt++;
	}
	cout << cnt << endl;
}

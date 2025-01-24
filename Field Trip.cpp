

#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define pb push_back
using namespace std;

int32_t main() {
	int t ; cin >> t;
	while( t--){
		int n; cin >> n; 
		vector<int>v(n);
		for(auto &u : v)cin >> u;
		int last=n-2;
		for(int i=1; i<n/2; i++){
			if(v[i]==v[i-1] || v[last]==v[last+1]){
				swap(v[i],v[last]);

			}
			last--;
		}
		int cnt=0;
		for(int i=0 ; i<n-1; i++){
			if(v[i]==v[i+1])cnt++;
		}
		cout<<cnt<<endl;
	}
}

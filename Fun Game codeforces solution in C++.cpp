

#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define pb push_back
using namespace std;

void solve(){
	int n; cin >> n;
	string s,t;
	cin >> s >> t;
	bool ok=true;
	int cnt=0;
	for(int i=0 ; i< n; i++){
		if(s[i]=='1')cnt++;
		if(s[i]!=t[i]){
			if(s[i]=='0' && cnt==0){
				ok=false;
				break;
			}
			
		}
	}
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int32_t main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}

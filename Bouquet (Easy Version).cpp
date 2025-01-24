
#include <bits/stdc++.h>
#include <cstdint>
#define int long long
#define pb push_back
using namespace std;

int32_t main() {
	int       t ;           cin >> t;
	while(t--){
		int n , m;          cin >> n >> m;
		vector<int>v(n);
		for(auto &i : v)cin >> i;
		sort(v.begin(),v.end());
		int ans=0;
		int low=0,high=1;
		if(v[0]>m){
			cout<<0<<endl;
			continue;
		}
		ans=v[0];
		int res=v[0];
		while(low<n){
                 if(high<n && v[high]-v[low]<=1 && res+v[high]<=m ){
					 res=res+v[high];
					 high++;
				 }
				 else {
					 res-=v[low];
					 low++;
				 }
				 ans=max(ans,res);
		}
		cout<<ans<<endl;
      
	}
}

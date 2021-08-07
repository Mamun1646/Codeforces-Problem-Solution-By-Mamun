#include<bits/stdc++.h>
using namespace std;
#define pb push_back


void solve(){
        int TestCase=1;
    cin >> TestCase;
     for(int tc = 1; tc <= TestCase; ++tc){
    int n,m,x1,y1,x2,y2,w,h;
		cin>>n>>m>>x1>>y1>>x2>>y2>>w>>h;
		if (w+x2-x1>n&&h+y2-y1>m){
			cout<<-1<<endl;
			continue;
		}
		int ans=INT_MAX;
		if (w+x2-x1<=n) ans=min(ans,min(w-x1,x2-n+w));
		if (h+y2-y1<=m) ans=min(ans,min(h-y1,y2-m+h));
		cout<<max(0,ans)<<endl;
     }
}


int32_t main(){



         solve();
     return 0;
}

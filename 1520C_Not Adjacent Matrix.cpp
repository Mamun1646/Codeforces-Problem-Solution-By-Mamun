#include<bits/stdc++.h>
using namespace std;
#define pb push_back


void solve(){
     int temp; cin>> temp;
     vector<int>v;                                                                          v;
     int n=temp*temp;
      if( temp ==2)
          cout << -1 << endl;
     else {
          if(n%2){
             for(int i =2;i<n; i=i+2)
               v.pb(i);
             for(int j =1;j<=n; j=j+2)               v.pb(j);
          }
          else {

             for(int i =2;i<=n; i=i+2)
               v.pb(i);
             for(int j =1;j<n; j=j+2)               v.pb(j);

          }

          for(int i = 0; i<n; i++){
               cout<< v[i] <<' ';
               if((i+1)%temp==0)
                    cout << endl;
          }

     }
}


int32_t main(){

     int TestCase=1;
     cin >> TestCase;
     for(int tc = 1; tc <= TestCase; ++tc)
         solve();
     return 0;
}

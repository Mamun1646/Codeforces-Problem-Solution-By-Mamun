/****15-Sept-2020*****/
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define pb              push_back
#define mp              make_pair
#define ss              set<string> //insert() .top()
#define si              set<int>
#define pii             pair<int,int>
#define vi              vector<int> //push_back()
#define mii             map<int,int>
#define endl            "\n"
#define pq              priority_queue<int> //insert()
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define m(arr,n,type)   type *arr=new type[n];
#define TestCase(x)     int x; cin>>x; while(x--)
#define FOR	        for(int i=0;i<n;i++)
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define pf(v)            for(auto i:v)cout<<i<<endl
#define Mamun           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/*erase(start_index,delete_length)*/
/*int myfun(int a,int b)
{
    return a>b;
}
*/
/*sort(vect.rbegin(),vect.rend())*/



void solve()
{
int n; cin >> n;
vi a(n+1);
for(int i = 1 ; i<= n; ++i){
    cin >> a[i];
}
int ans=0;
for(int i = 1; i<= n; ++i){
     for(int j = a[i] - i; j<=n; j+=a[i]){
         if(j>0 and i< j){
          if(a[i]*a[j]==i+j and i < j){
              ans++;
          }
         }

     }

     }
     cout << ans <<endl;





}


int32_t main()
// int main()
{
    Mamun;
    //freopen("input.txt","r",stdin);
    TestCase(t)
    solve();
    return 0;
}


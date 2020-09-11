
/****19-Aug-2020*****/
#include<bits/stdc++.h>
using namespace std;
#define int              long long
#define pb              push_back
#define mp              make_pair
#define ss              set<string> //insert() .top()
#define si              set<int>
#define pii             pair<int,int>
#define vi              vector<int> //push_back()
#define mii             map<int,int>
#define pq              priority_queue<int> //insert()
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define M(arr,n,type)   type *arr=new type[n];
#define T(x)            int x; cin>>x; while(x--)
#define FOR	        for(int i=0;i<n;i++)
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define Mamun           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/*erase(start_index,delete_length)*/
/*int myfun(int a,int b)
{
    return a>b;
}
*/
/*sort(vect.rbegin(),vect.rend())*/

void solve(){

 int n;cin>>n;
    int a[n];
    int sum=0,r=0;
    FOR{
        cin>>a[i];

    }


      FOR{
          // 7 -6 -4 17 -13 4
        sum+=a[i];
         if(sum<0)
            sum=0;



    }
    cout<<sum<<endl;





}



int32_t main()
{
    Mamun;
    //freopen("input.txt","r",stdin);
    T(t)
    {
      solve();

    }
    return 0;
}


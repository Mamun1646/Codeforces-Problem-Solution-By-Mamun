/****15-Sept-2020*****/
#include<bits/stdc++.h>
using namespace std;
#define ll              long long
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
#define m(arr,n,type)   type *arr=new type[n];
#define TestCase(x)            int x; cin>>x; while(x--)
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

bool cmp ( const pair<int,int> &p1, const pair<int,int> &p2 )
{
    if ( p1.first > p2.first ) return 1;
    else if ( p1.first == p2.first ) return ( p1.second < p2.second );
    return 0;
}



void solve(){
    int n,k;cin>>n>>k;
    vector<pair<int,int> >v(n);

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;
        v[i].first=a;
        cin>>b;
        v[i].second=b;


    }
    sort(v.begin(),v.end(),cmp);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[k-1].first==v[i].first and v[k-1].second==v[i].second){
            c++;
           // cout<<i+1<<endl;
           // cout<<v[i].first<<" "<<v[i].second<<endl;;
        }
    }


        cout<<c<<endl;




}


//int32_t main()
int main()
{
    Mamun;
    //freopen("input.txt","r",stdin);

      solve();
    return 0;
}


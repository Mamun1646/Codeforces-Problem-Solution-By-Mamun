/****19-Aug-2020*****/
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
    int k2,k3,k5,k6;cin>>k2>>k3>>k5>>k6;
    int s=min(k6,min(k2,k5));
    int sum=s*256;
    int s1=min(k3,(k2-s))*32;
    cout<<s1+sum<<endl;

}



int main()
{
    Mamun;
    //freopen("input.txt","r",stdin);


      solve();


    return 0;
}


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

void solve(){
    int n;cin>>n;
    string s;
   cin>>s;
   int tt=s.size();
   int flag=1,flag1=1;
   for(int i=0;i<n;i++){
        if(tt%2==0){
   if((s[i]-'0')%2==0 and (i+1)%2==0)
    {
       cout<<2<<endl;
       flag=0;

       break;
    }
   }
   else{
            if((s[i]-'0')%2 && (i+1)%2){

                cout<<1<<endl;
                flag1=0;
                break;}}
        }

    if(flag and n%2==0)
    cout<<1<<endl;
    if(flag1 and n%2)
    cout<<2<<endl;
    }

//int32_t main()
int main()
{
    Mamun;
    //freopen("input.txt","r",stdin);
    TestCase(t)
    {
      solve();

    }
    return 0;}

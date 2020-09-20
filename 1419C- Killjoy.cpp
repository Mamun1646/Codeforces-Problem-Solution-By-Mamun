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
#define FOR	            for(int i=0;i<n;i++)
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
        int x,c=0,count1=0;cin>>x;
        int a[n];
        FOR
        {
            cin>>a[i];
            if(a[i]==x)
            {

                count1++;
            }
             c+=a[i];

        }
        // if(count1)cout<<c<<" "<<c/count1<<endl;

        if(count1==n)cout<<0<<endl;
        else if(count1>0){
            cout<<1<<endl;
             //cout<<c<<" "<<c/count1<<endl;
        }
        else if(c==n*x){
            cout<<1<<endl;
             //cout<<c<<" "<<c/count1<<endl;
        }
        else cout<<2<<endl;


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

}


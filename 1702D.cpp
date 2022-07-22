
#include<bits/stdc++.h>
using namespace std;
#define int          long long
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
#define ps(x,y)         fixed<<setprecision(y)<<x    //y=10 //0000000000
#define m(arr,n,type)   type *arr=new type[n];
#define TestCase(x)     int x; cin>>x; while(x--)
#define FOR	              for(int i=0;i<n;i++)
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define Mamun           ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


#define Toggle(n,i)     (n^((ll)1<<i))
#define Check(n,i)      (n&((ll)1<<i))
#define Set(n,i)        (n|((ll)1<<i))
#define Reset(n,i)      (n&(~((ll)1<<i)))

int dx[]= {+1,-1,0,0};  //vertical horizontal
int dy[]= {0,0,+1,-1};  //vertical horizontal
//int dx[]={+1,-1,0,0,+1,+1,-1,-1};//vertical horizontal diagonal
//int dy[]={0,0,+1,-1,-1,+1,+1,-1};//vertical horizontal diagonal
/// ----------------------------- (Debug) ------------------------------
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge
{
    c b, e;
};
sim > rge<c> range(c i, c j)
{
    return rge<c> {i, j};
}
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug
{
#ifdef LOCAL
    eni(!=) cerr << boolalpha << i;
    ris;
}
eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair < b, c > d)
{
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d)
{
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
    sim dor(const c&)
    {
        ris;
    }
#endif
};
vector<char*> tokenizer(const char* args)
{
    char *token = new char[111];
    strcpy(token, args);
    token = strtok(token, ", ");
    vector<char*> v({token});
    while(token = strtok(NULL,", "))
        v.push_back(token);
    return reverse(v.begin(), v.end()), v;
}
void debugg(vector<char*> args)
{
    cerr << "\b\b ";
}
template <typename Head, typename... Tail>
void debugg(vector<char*> args, Head H, Tail... T)
{
    debug() <<  args.back() << " = " << H ;
    cout<<endl;
    args.pop_back();
    debugg(args, T...);
}

#define harg(...) #__VA_ARGS__
#ifdef LOCAL
#define pr(...) { debugg(tokenizer(harg(__VA_ARGS__, \b\t-->Line)), __VA_ARGS__, __LINE__); cerr << endl;}
#else
#define pr(...) { }
#endif
/*erase(start_index,delete_length)*/
/*int myfun(int a,int b)
{
    return a>b;
}


/*double factorial(double n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

/*sort(vect.rbegin(),vect.rend())
    int MaxElement=*max_element(arr, arr + n); */

void solve(){
    string s1,s2; cin>> s1;
    s2=s1;
    int n; cin>> n;
    sort(s2.rbegin(),s2.rend());
    int cost =0;
    for(int i=0;i<s2.size();++i){
        cost += s2[i]-'a'+1;
    }
    ///cout << cost <<endl;
    map<char,int>mp;
    for(int i =0;i<s1.size();++i){
            if(cost>n){
                mp[s2[i]]++;
                cost-=s2[i]-'a'+1;
            }
            ///else mp[s2[i]]=0;

    }
    for(int i =0;i<s1.size();++i){
        if(mp[s1[i]]>0)
        {

            mp[s1[i]]--;
            continue;
        }
        else cout <<s1[i] ;
    }
    cout <<"\n";

}
int32_t main(){
    Mamun;
    //freopen("input.txt","r",stdin);
    TestCase(t)
    solve();
    return 0;
}

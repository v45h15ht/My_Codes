#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define fr(i,a,b) for (ll i = (a), _b = (b); i <= _b; i++)
#define frr(i,a,b) for (ll i = (a), _b = (b); i >= _b; i--)
#define rep(i,n) for (ll i = 0, _n = (n); i < _n; i++)
#define repr(i,n) for (ll i = (n) - 1; i >= 0; i--)
#define devec(a,n) { cout << #a << " = "; rep(_,n) cout << a[_] << ' '; cout << '\n'; }
#define all(ar) ar.begin(), ar.end()
#define rall(ar) ar.rbegin(), ar.rend()
#define sz(x) ((long long)x.size())
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007

template<typename T>
void __p(T a) { cout << a << " "; }
template<typename T>
void __p(std::vector<T> a) { cout << "{ "; for (auto p : a) __p(p); cout << "}"; }
template<typename T, typename F>
void __p(pair<T, F> a) { cout << "{ "; __p(a.first); __p(a.second); cout << "}"; }
template<typename T, typename ...Arg>
void __p(T a1, Arg ...a) { __p(a1); __p(a...); }
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
    cout<<name<<" : ";__p(arg1);cout<<endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
    int bracket=0,i=0;
    for(; ;i++)
        if(names[i]==','&&bracket==0)
            break;
        else if(names[i]=='(')
            bracket++;
        else if(names[i]==')')
            bracket--;
    const char *comma=names+i;
    cout.write(names,comma-names)<<" : ";
    __p(arg1);
    cout<<"| ";
    __f(comma+1,args...);
}
#define debug(...) cout<<"Debug : "; __f(#__VA_ARGS__, __VA_ARGS__)

const ll INF = 1e18L+5;
const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};

typedef pair<ll, ll> ii;
typedef pair<ll, ii> iii;
typedef vector<ii> vii;
typedef vector<ll> vi;
typedef vector<int> vint;
typedef vector<string> vs;
typedef vector<vi> vvi;

void solve(){

}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(6);
 
    ll t = 1;
    cin>>t;
    while(t--)
        solve();
 
    return 0;
}
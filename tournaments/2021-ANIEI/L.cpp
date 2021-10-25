#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define endl                        '\n'
#define fastIO()                    cin.tie(0); cout.tie(0);
#define FO(i, b)                    for (int i = 0; i < (b); i++)
#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define TR(v, arr)                  for (auto& (v) : (arr))
#define debug(x)                    cout << #x << " = "; _debug(x); cout << endl;
#define si(x)	                    scanf("%d",&x)
#define sl(x)	                    scanf("%lld",&x)
#define pi(x)	                    printf("%d\n",x)
#define pl(x)	                    printf("%lld\n",x)
#define pb                          push_back
#define mp                          make_pair
#define F                           first
#define S                           second
#define all(x)                      x.begin(), x.end() 
#define sz(x)                       (int) x.size()
#define LB(arr, x)                  lower_bound(all(arr), x)-(arr).begin()
#define UB(arr, x)                  upper_bound(all(arr), x)-(arr).begin()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;
const int INF = 1e9;

void setIO(){
    string file = __FILE__;
    file = string(file.begin(), file.end()-3);
    string in_file = file+"in";
    string out_file = file+"out";
    freopen(in_file.c_str(), "r", stdin);
    freopen(out_file.c_str(), "w", stdout);
}

template <typename T>
void _debug(T& x){
    cout << x;
}

template <typename T1, typename T2>
void _debug(pair<T1, T2>& pair){
    cout << "{"; _debug(pair.F); cout << ","; _debug(pair.S); cout << "}";  
}

template <typename T>
void _debug(vector<T>& vec){
    int n = sz(vec);
    if(n == 0){cout << "[ ]"; return;}
    cout << "[";
    FO(i, n-1){
        _debug(vec[i]); cout << " ";
    }
    _debug(vec[n-1]); cout << "]";
}

void _debug(vector<string>& vec){
    int n = sz(vec);
    cout << endl;
    FO(i, n){
        cout << vec[i] << endl;
    }
}

template <typename T>
void _debug(vector<vector<T>>& A){
    int n = sz(A);
    cout << endl;
    FO(i, n){
        _debug(A[i]); cout << endl;
    }
}

template <typename T>
void print(T& x){
    cout << x << endl;
    return;
}

template <typename T>
void print(vector<T>& vec, int a=0, int b=-1){
    if(b == -1){b = sz(vec);}
    if(b == 0){return;}
    FOR(i, a, b-1){
        cout << vec[i] << " ";
    }
    cout << vec[b-1] << endl;
    return; 
}

template<typename T>
struct MinSegmentTree{
    vector<T> t;
    
    MinSegmentTree(int n){
        t.assign(4*n, INF);
        return;
    }
 
    T f(T a, T b){
        return min(a, b);
    }
 
    void build(vector<T>& a, int v, int tl, int tr){
        if(tl == tr){t[v] = a[tl];} 
        else{
            int tm = tl+(tr-tl)/2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
 
    T query(int v, int tl, int tr, int l, int r) {
        if(l > r){return INF;}
        if(l == tl && r == tr){return t[v];}
        int tm = tl+(tr-tl)/2;
        return f(query(v*2, tl, tm, l, min(r, tm)), query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }
 
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr){t[v] = new_val;} 
        else {
            int tm = tl+(tr-tl)/2;
            if (pos <= tm){
                update(v*2, tl, tm, pos, new_val);
            }
            else{
                update(v*2+1, tm+1, tr, pos, new_val);
            }
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
};


template<typename T>
struct MaxSegmentTree{
    vector<T> t;
    
    MaxSegmentTree(int n){
        t.assign(4*n, -INF);
        return;
    }
 
    T f(T a, T b){
        return max(a, b);
    }
 
    void build(vector<T>& a, int v, int tl, int tr){
        if(tl == tr){t[v] = a[tl];} 
        else{
            int tm = tl+(tr-tl)/2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
 
    T query(int v, int tl, int tr, int l, int r) {
        if(l > r){return -INF;}
        if(l == tl && r == tr){return t[v];}
        int tm = tl+(tr-tl)/2;
        return f(query(v*2, tl, tm, l, min(r, tm)), query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }
 
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr){t[v] = new_val;} 
        else {
            int tm = tl+(tr-tl)/2;
            if (pos <= tm){
                update(v*2, tl, tm, pos, new_val);
            }
            else{
                update(v*2+1, tm+1, tr, pos, new_val);
            }
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
};


void solve(){
    int n, q; 
    si(n); si(q);
    vi a(n);
    FO(i, n){
        si(a[i]);
    }

    MinSegmentTree<int> mnst = MinSegmentTree<int>(n);
    MaxSegmentTree<int> mxst = MaxSegmentTree<int>(n);
    mnst.build(a, 1, 0, n-1);
    mxst.build(a, 1, 0, n-1);

    FO(i, q){
        string op;
        cin >> op;
        if(op == "UPD"){
            int idx, val;
            si(idx); si(val);
            idx -= 1;
            mxst.update(1, 0, n-1, idx, val);
            mnst.update(1, 0, n-1, idx, val);
            continue;
        }
        int a, b;
        si(a); si(b);
        a -= 1; b -= 1;
        // debug(a); debug(b);
        if(op == "MAX"){
            int mx = mxst.query(1, 0, n-1, a, b);
            pi(mx);

        }
        if(op == "MIN"){
            int mn = mnst.query(1, 0, n-1, a, b);
            pi(mn);
        }
    }
    return;
}

int main()
{
    fastIO();
    if(getenv("LOCAL")){setIO();}
    int T=1;
    FO(tc, T){
        solve();
    }	
    return 0;
}
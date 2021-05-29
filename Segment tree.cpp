///              +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+              ///
#include<bits/stdc++.h>
///#include <ext/pb_ds/assoc_container.hpp>
///#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
///using namespace __gnu_pbds;
///template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

///--------------------------------------data type--------------------------------------------------//
typedef long long int lli;
typedef unsigned long long int ulli;

///----------------------------------------stack-----------------------------------------------------//
typedef stack <int> STI;
typedef stack <char> STC;
typedef stack <string> STS;

///----------------------------------------queue------------------------------------------------------//
typedef queue <int> QI;
typedef queue <char> QC;
typedef queue <string> QS;
typedef priority_queue <int> PQI;

///---------------------------------------dequeue-----------------------------------------------------//
typedef deque <int> DI;
typedef deque <char> DC;

///---------------------------------------set------------------------------------------------------//
typedef set <int> SI;
typedef set <string> SS;
typedef set <char> SC;
typedef multiset <int> MSI;

///----------------------------------------map------------------------------------------------------//
typedef map <int, int> MP;
typedef map <string, int> MPSI;
typedef map <char, int> MPCI;

///----------------------------------------pair------------------------------------------------------//
typedef pair <int, int> PII;

///----------------------------------------vector------------------------------------------------------//
typedef vector <int> VI;
typedef vector <char> VC;
typedef vector <string> VS;
typedef vector <lli> VLLI;

///----------------------------------------constant------------------------------------------//

#define MAX                 1E9 + 5
#define MIN                 -1E9 - 5
#define INF                 1E18 + 5
#define MOD                 10000007
#define py                  acos(-1.0)  /// 3.1415926535897932

///-------------------------------------------------------------------------------//
#define pp1(A)              printf("%d\n", A)
#define ppl(A)              printf("%lld\n", A)
#define pp2(A,B)            printf("%d %d\n", A, B)
#define pp3(A,B,C)          printf("%d %d %d\n", A, B, C)

#define ss1(A)              scanf("%d", &A)
#define ssl(A)              scanf("%lld", &A)
#define ss2(A,B)            scanf("%d %d", &A, &B)
#define ss3(A,B,C)          scanf("%d %d %d", &A, &B, &C)

///---------------------------------------------------------------------------//
#define fastIO              cin.tie(0)
#define debug(args...)      do { cerr << #args << "-> " ;  show(args); } while(0); cerr<< endl ;
#define TS                  template < typename T >
#define TP                  template < typename F, typename S >
#define TM                  template<typename T1, typename... T2>

#define pf                  push_front
#define pb                  push_back
#define popb                pop_back
#define popf                pop_front

#define ub                  upper_bound
#define lb                  lower_bound

#define itr                 iterator
#define ritr                reverse_iterator

#define mk                  make_pair
#define ff                  first
#define ss                  second

///---------------------------------------------------------------------------//
#define endl                "\n"
#define gap                 " "
#define END                 return 0
#define line                printf( "\n")
#define yes                 printf( "YES\n")
#define no                  printf( "NO\n")

#define Before              printf( "Before  \n")
#define After               printf( "After  \n")

#define enter1              printf( "Entered 1\n")
#define enter2              printf( "Entered 2\n")
#define enter3              printf( "Entered 3\n")

#define Case(k,n)           printf( "Case %d: %d\n", k, n)
#define Casell(k,n)         printf( "Case %lld: %lld\n", k, n)

///-----------------------------------------------------------------------------//
#define sq(a)               (a) * (a)
#define SZ(a)               (int) a.size()
#define all(a)              (a).begin(), (a).end()
#define rall(a)             (a).rbegin(), (a).rend()

#define mem(x, y)           memset(x, y, sizeof(x))
#define unq(v)              v.erase( unique( all(v)), v.end())
#define rev(v)              reverse( all(v))
#define sortV(v)            sort( all(v))
#define sortA(a,n)          sort(a, a+n)

#define to_upper(s)         transform( s.begin(), s.end(), s.begin(), ::toupper)
#define to_lower(s)         transform( s.begin(), s.end(), s.begin(), ::tolower)
#define to_int(s)           stoi(s)

///--------------------------------------------------------------------------------//
#define Erase(V,I)          (V).erase((V).begin()+I)
#define Insert(V,I,M)       (V).insert((V).begin()+I,M)

#define read()              freopen("input.txt", "r", stdin)
#define write()             freopen("output.txt", "w", stdout)

///-------------------------------------------------------------------------------------------------------------------------------//
#define loop(i, n)          for(int i = 0; i < n; i++)
#define loops(i, x, n)      for(int i = x; i < n; i++)
#define loopr(i, n)         for(int i = n-1; i >= 0; i--)
#define loopt(i, n)         for(int i = 1; i <= n; i++)

#define autoo(s)            for(auto it = s.begin(); it != s.end(); it++)

#define vin(V, N)           for(int i = 0; i < N; i++){ int X; ss1(X); V.pb(X); }
#define vinll(V, N)         for(int i = 0; i < N; i++){ lli X; ssl(X); V.pb(X); }

#define ain(A, N)           for(int i = 0; i < N; i++){ ss1(A[i]); }
#define ainll(A, N)         for(int i = 0; i < N; i++){ ssl(A[i]); }

#define aout(A, N)          for(int i = 0; i < N; i++){ printf("%d", A[i]); if (i < N-1) printf(" "); else printf("\n"); }
#define vout(v)             for(int i = 0; i < v.size(); i++) { printf("%d", v[i]); if(i < v.size() - 1) printf(" "); else printf("\n");}


//-------------------------------------------------------------------------------------------------------------------------------//

lli lcm(lli a, lli b)
{
    return a * (b / __gcd(a, b));
}

///----------------------graph moves----------------*/
int dr[] = {+1, -1, +0, +0};
int dc[] = {+0, +0, +1, -1};

///----------------------kings moves-----------------*/
int X[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int Y[] = {-1, +1, +0, +0, +1, +1, -1, -1};

///----------------------knights moves----------------*/
int KX[] = {-2, -2, -1, -1,  1,  1,  2,  2};
int KY[] = {-1,  1, -2,  2, -2,  2, -1,  1};

///-----------------------------------template------------------------------------------------//

int a[100005];
int tree[3 * 100005];

void init(int node, int st, int ed)
{

    if(st == ed)
    {
        tree[node] = a[st];
        return;
    }
    int md = (st + ed) / 2;
    int lft = 2 * node;
    int rgt = 2 * node + 1;
    init(lft, st, md);
    init(rgt, md + 1, ed);
    tree[node] = min(tree[lft], tree[rgt]);

}

int query(int node, int st, int ed, int l, int r)
{

    int md = (st + ed) / 2;
    int lft = node * 2;
    int rgt = node * 2 + 1;
    if(ed < l or st > r)
        return MAX;
    if(st >= l and ed <= r)
        return tree[node];
    return min(query(lft, st, md, l,r), query(rgt, md+1, ed, l, r));
}

int main()
{

    fastIO;
    int t;
    cin >> t;
    int ts = 0;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        loopt(i, n)
        {
            cin >> a[i];

        }
        init(1, 1, n);
        cout << "Case "<< ++ts <<":"<<endl;
        while(q--)
        {
            int l, r;
            cin >> l >> r;

            cout << query(1, 1, n, l, r) << endl;
        }

    }
}




#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline void scan(T &n)
{
    n = 0; int f = 1; char ch = getchar();
    while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
    while (isdigit(ch))  {n = n * 10 + ch - '0'; ch = getchar();}
    if (f == -1) n = -n;
}

template <typename T, typename... A>
inline void scan(T &n, A&... a)
{
    scan(n), scan(a...);
}

template <typename T>
void print(T n)
{
    if (n < 0) putchar('-'), n = -n;
    if (n > 9) print(n / 10);
    putchar(n % 10 + '0');
}

template <typename T>
void print(T n, char ch)
{
    print(n), putchar(ch);
}

template <typename T>
bool cmax(T &a, const T &b) {return a < b ? a = b, true : false;}

template <typename T>
bool cmin(T &a, const T &b) {return a > b ? a = b, true : false;}

typedef double db;
typedef long long ll;
typedef unsigned long long ull;

const int M = (int)1e5;
const int N = (int)1e5;
const int inf = 0x3f3f3f3f;
const ll linf = 0x3f3f3f3f3f3f3f3f;
const int mod = (int)1e9 + 7;

int tot;
map<string, int> id;
string name[M + 5];
int in[M + 5];
vector<int> g[M + 5];
int dis[M + 5];
int pre[M + 5];

void topo()
{
    queue<int> q;
    for (int i = 1; i <= tot; i++) {
        dis[i] = pre[i] = -1;
        if (in[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (const int &v: g[u]) {
            in[v]--;
            if (in[v] == 0) {
                dis[v] = dis[u] + 1;
                pre[v] = u;
                q.push(v);
            }
        }
    }
}

void work()
{
    string s, t;
    while (cin >> s >> t) {
        if (!id.count(s)) name[id[s] = ++tot] = s;
        if (!id.count(t)) name[id[t] = ++tot] = t;
        in[id[t]]++;
        g[id[s]].push_back(id[t]);
    }
    topo();
    int mx_id = max_element(dis + 1, dis + tot + 1) - dis;
    while (mx_id != -1) {
        cout << name[mx_id] << "-";
        mx_id = pre[mx_id];
    }
    cout << endl;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0), cout.tie(0);
    int T = 1; //scan(T);
    for (int ca = 1; ca <= T; ++ca) {
        // printf("Case #%d: ", ca);
        work();
    }
    // cerr << 1.0 * clock() / CLOCKS_PER_SEC << "\n";
    return 0;
}
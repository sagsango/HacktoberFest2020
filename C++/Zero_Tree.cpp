#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
//#define int long long
#define endl '\n'
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#define bug1( x ) cerr << (#x) <<"="<< x << endl;
#define bug2( x , y ) cerr << (#x) <<"="<< (x) << "    " << (#y) << "="<< (y) << endl;
#define bug3( x , y , z ) cerr << (#x) <<"="<<(x) << "    " << (#y) <<"="<< (y) << "    " << (#z) <<"="<< (z) << endl;
#define bug4( x , y , z , w) cerr << (#x) <<"="<<(x) << "    " << (#y) <<"="<< (y) << "    " << (#z) <<"="<< (z) << "    " << (#w) <<"="<< w << endl;
#define bug5( x , y , z , w ,p) cerr << (#x) <<"="<<(x) << "    " << (#y) <<"="<< (y) << "    " << (#z) <<"="<< (z) << "    " << (#w) <<"="<< w << "    " << (#p) <<"="<< p << endl;
#define bug6( x , y , z , w ,p , q) cerr << (#x) <<"="<<(x) << "    " << (#y) <<"="<< (y) << "    " << (#z) <<"="<< (z) << "    " << (#w) <<"="<< w << "    " << (#p) <<"="<< p << "    " << (#q) <<"="<< q << endl;
#define bugn( x , n ){ cerr<<(#x)<<":";for(int i=0;i<n;i++)cout<<(#x)<<"["<<i<<"]:"<< x[i] << "    "; cout<<endl;}
#define bugnm( x , n , m ){ cerr<<(#x)<<endl;for(int i=0;i<n;i++){ cout<<"Row #"<<i<<":"; for(int j=0;j<m;j++) cout<<x[i][j]<<"     "; cout << endl;}}
 
using namespace std;
typedef unsigned long long ul;
typedef long double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vvi;
typedef vector<vvi> vvvi;
 
 
const int nax = 1e5+10;
vector<int>g[nax];
int pos[nax],neg[nax],val[nax],sum,n;
void dfs(int u,int p){
	for(auto v:g[u])
		if( v != p )
			dfs(v,u),pos[u]=max(pos[u],pos[v]),neg[u]=min(neg[u],neg[v]);
	val[u] = val[u] + pos[u] + neg[u];
	sum += abs(val[u]);
	if( val[u] > 0 )
		val[u] = 0, neg[u] -= val[u];
	if( val[u] < 0 )
		val[u] = 0, pos[u] -= val[u];
}
int32_t main(){
	IOS
	cin >> n;
	for(int i=1,u,v;i<n;++i)
		cin >> u >> v, g[u].push_back(v), g[v].push_back(u);
	for(int i=1;i<=n;++i)
		cin >> val[i];
	dfs(1,0);
	cout << sum << endl;
}

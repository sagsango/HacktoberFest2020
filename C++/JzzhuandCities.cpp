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
 
struct box{
	int v,w,f;
};
 
int32_t main(){
	IOS
	int n,m,k;cin>>n>>m>>k;
	vector<box>g[n+1];
	for(int i=1,u,v,w;i<=m;++i)
		cin >> u >> v >> w, g[u].push_back({v,w,0}), g[v].push_back({u,w,0});
	for(int i=1,v,w;i<=k;++i)
		cin >> v >> w, g[1].push_back({v,w,1}), g[v].push_back({1,w,1});
	vector<int>dis(n+1,1e9),use(n+1),vis(n+1);
	int ans = 0;
	priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
	dis[1] = 0;
	pq.push({0,1});
	while( pq.size() ){
		int u = pq.top().second; pq.pop();
		if( vis[u] )
			continue;
		vis[u] = 1;
		for(auto [v,w,f]:g[u]){
			if( vis[v] )
				continue;
			if( dis[v] > dis[u] + w ){
				dis[v] = dis[u] + w;
				use[v] = f;
				pq.push({dis[v],v});
			}
			else if( dis[v] == dis[u] + w && !f && use[v] )
				use[v] = f;
		}
	}
	for(int i=1;i<=n;++i)
		ans += use[i];
	cout << k - ans << endl;
}

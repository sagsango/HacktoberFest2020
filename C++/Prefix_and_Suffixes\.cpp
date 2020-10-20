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
 
int32_t main(){
	IOS
	string s;cin >> s;
	int n = s.length();
	vector< int >pi(n);
	for(int i=1;i<n;i++){
		int j = pi[i-1];
		while( j > 0 && s[i] != s[j] )
			j = pi[j-1];
		if( s[i] == s[j] )
			++j;
		pi[i] = j;
	}
	vector<int>len(n+1);
	for(int i=0;i<n;++i)
		++len[pi[i]];
	for(int i=n;i>=1;i--)
		len[pi[i-1]] += len[i];
	for(int i=1;i<=n;++i){
		len[i]+=1;
		//bug2(i,len[i]);
	}
	vector<pair<int,int>>ans;
	int i = n;
	while( i ){
		//cout << i << endl, i = pi[i-1];
		ans.push_back({i,len[i]});
		i = pi[i-1];
	}
	reverse(ans.begin(),ans.end());
	cout << ans.size() << endl;
	for(auto [x,y]:ans)
		cout << x <<" "<< y << endl;
}

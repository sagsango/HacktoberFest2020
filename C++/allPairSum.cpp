#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	vector<int>pairsum;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			pairsum.push_back(arr[i]+arr[j]);
	int m = pairsum.size();
	for(int i=0;i<m;i++)
		cout << pairsum[i] <<" ";
	cout << endl;
}

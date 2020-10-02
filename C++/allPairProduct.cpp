#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	vector<int>pairproduct;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			pairproduct.push_back(arr[i]*arr[j]);
	int m = pairproduct.size();
	for(int i=0;i<m;i++)
		cout << pairproduct[i] <<" ";
	cout << endl;
}

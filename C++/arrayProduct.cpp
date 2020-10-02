#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int prod = 1;
	for(int i=0;i<n;i++)
		prod*=arr[i];
	cout << "Product of array = " << prod << endl;
}

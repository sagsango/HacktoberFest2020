#include<bits/stdc++.h>
using namespace std;

// Not strictly increasing
int nax = 1e5;
int BIT[nax+1];
void update(int i,int val){
  while( i <= nax ){
      BIT[i] = max(BIT[i],val);
      i += i & -i;
  }
}
int query(int i,int val=0){
  while( i > 0 ){
    val = max(val,BIT[i]);
    i -= i & -i;
  }
  return val;
}
int main(){
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
     cin>>a[i]; // all values from 1 to 1e5
  int mxl = 1;
  for(int i=0;i<n;i++){
      inr tmp = query(a[i]);
      update(a[i],tmp+1);
      mxl = max(mxl,tmp+1);
  }
  cout << "Maximum Inceasing Subsequence [ Non Strict ] : " << mxl << endl;
  

}

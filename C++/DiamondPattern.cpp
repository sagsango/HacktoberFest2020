#include <iostream>
using namespace std;
 
int main() {
   int num,j;
   cin>>num;
   for(int i=1;i<=num;i++)
   {
       for(j= 1;j<=num-i;j++)
         cout<<" ";
       for(j=1;j<=i;j++)
         cout<<j;
       for(j=i-1;j>=1;j--)
         cout<<j;
    cout<<endl;
   }
   for(int i=num-1;i>=1;i--)
   {
       for(j= 1;j<=num-i;j++)
         cout<<" ";
       for(j=1;j<=i;j++)
         cout<<j;
       for(j=i-1;j>=1;j--)
         cout<<j;
    cout<<endl;
   }
 
   cout<<endl;
}

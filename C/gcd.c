#include<stdio.h>
int gcd(int a,int b){
  if( a == 0 )return b;
  if( a >= b )
    return gcd(a%b,b);
  else
    return gcd(b%a,a);
 }
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("gcd of %d and %d is %d",a,b,gcd(a,b));
  return 0;
}

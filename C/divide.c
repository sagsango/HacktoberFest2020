#include<stdio.h>
int main(){
    // Note b != 0
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%f/%f=%f\n",a,b,a/(b+0.00000000001));
    return 0;
}

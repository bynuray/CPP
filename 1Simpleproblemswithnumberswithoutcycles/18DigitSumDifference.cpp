#include <iostream>

using namespace std;

int main(){

    int n,last,mid1,mid3,first,sum1(0),sum2(0);
    cin>>n;

first=n/10000;
mid1=n/(1000)%10;
mid3=(n/10)%10;
last=n%10;
sum1=first+mid1;
sum2=last+mid3;

int res=sum1-sum2;
cout<<res;


}
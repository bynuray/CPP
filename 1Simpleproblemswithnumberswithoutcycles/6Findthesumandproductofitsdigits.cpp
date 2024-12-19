#include <iostream>

using namespace std;

int main(){

    int n,sum(0),product(1) ,left,right;
    cin>>n;
right=n%10;
left=n/10;

sum=left+right;
   product=left*right;

   cout<<"Sum of the digits: "<<sum<<endl;

   cout<<"Product of the digits: "<<product<<endl;

}
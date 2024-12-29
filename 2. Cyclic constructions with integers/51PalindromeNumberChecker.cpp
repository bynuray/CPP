#include <iostream>

using namespace std;

int main(){

int n,last,rev(0);
cin>>n;
int org=n;

for (; n!=0; n/=10){
    last=n%10;
rev=(rev*10)+last;
}
if(rev==org){
    cout<<" YES"<<endl;
}
else cout<<"NO"<<endl;





}
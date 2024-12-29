#include <iostream>

using namespace std;

int main(){

    int n,last,mid1,mid3,first;
    cin>>n;

if(n>9999){
first=n/10000;
mid1=n/(1000)%10;
mid3=(n/10)%10;
last=n%10;
if(first==last &&mid1==mid3){
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not Palindrome"<<endl;
}
}
else{
    cout<<" n>9999 should be true "<<endl;
}




}
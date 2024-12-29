#include <iostream>

using namespace std;

int main(){

    int n,last,mid1,mid2,first;
    cin>>n;

if(n>999){
first=n/1000;
mid1=(n/100)%10;
mid2=(n/10)%10;
last=n%10;

if(first==last && mid1==mid2){
    cout<<"Palindrome"<<endl;
}
else cout<<"Not Palindrome";

}
else{
    cout<<"n should be greater than 999"<<endl;
}

}
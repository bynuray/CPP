#include <iostream>

using namespace std;

int main(){

    int n,last,mid,first;
    cin>>n;

if(n>99 && n<1000){
first=n/100;
int temp=n/10;
mid=temp%10;
last=n%10;
    
cout<<first<<last<<mid<<endl;
}
else{
    cout<<"please add 3-digit number"<<endl;
}




}
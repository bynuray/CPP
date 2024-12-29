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
if(last==0 && first!=0){
    cout<<first<<mid<<endl;
}
else if(last==0 && first==0){
    cout<<mid<<endl;
}
else{
    cout<<last<<first<<mid<<endl;
}

}




}
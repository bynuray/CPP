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
if(first==0 && mid!=0){
    cout<<mid<<last<<endl;
}
else if(first==0 && mid==0){
    cout<<last<<endl;
}
else{
    cout<<mid<<first<<last<<endl;
}

}




}
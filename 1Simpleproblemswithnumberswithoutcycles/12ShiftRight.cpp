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
if(mid==0 && last!=0){
    cout<<last<<first<<endl;
}
else if(mid==0 && last==0){
    cout<<first<<endl;
}
else{
    cout<<mid<<last<<first<<endl;
}

}




}
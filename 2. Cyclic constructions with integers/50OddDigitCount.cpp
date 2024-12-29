#include <iostream>

using namespace std;

int main(){
    int n,count(0);
    cin>>n;

    // while(n>0){
    //     int last=n%10;
    //     n/=10;
    //     if(last%2!=0){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

for (; n!=0; n/=10){
    int last=n%10;
    if(last%2!=0){
        count++;
    }
}
cout<<count<<endl;



}
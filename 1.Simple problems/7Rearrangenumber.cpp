#include <iostream>

using namespace std;

int main(){

    int n,a,b;
    cin>>n;

if(n>=10 &&n<=99){
    a=n/10;
    b=n%10;
    
    if(b==0){
        cout<<a;
    }
    else{
    a+=b;
    b=a-b;
    a=a-b;
    cout<<a<<b;

    }
}
   
}
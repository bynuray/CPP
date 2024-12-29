#include <iostream>

using namespace std;

int main(){

int n,h;
cin>>n;

if(n>999){
h=(n/100)%10;
cout<<h<<endl;
}
else{
    cout<<"integer should be greater than 999"<<endl;
}


}
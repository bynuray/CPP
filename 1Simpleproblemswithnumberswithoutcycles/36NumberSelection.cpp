#include <iostream>

using namespace std;

int main(){

float a,b,c;
cin>>a>>b>>c;
bool found=false;

if((a>1 &&a<3)){
    cout<<a<<endl;
    found=true;
}
if((b>1 &&b<3)){
    cout<<b<<endl;
    found=true;
}
if((c>1 &&c<3)){
    cout<<c<<endl;
    found=true;
}
if(found==false) cout<<"No Numbers Found"<<endl;
}
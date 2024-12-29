#include <iostream>

using namespace std;

int main(){

char a,b;
cin>>a>>b;

a=a+b;
b=a-b;
a=a-b;
if(a<256 &&b<256){
    cout<<"Possible"<<endl;
}
else cout<<"Not Possible"<<endl;


}
#include <iostream>

using namespace  std;


int main(){

    int a,b,temp;
   cin>>a>>b;



temp=a+b;
a=b;
b=temp-b;

cout<<a<<" "<<b<<endl;

}
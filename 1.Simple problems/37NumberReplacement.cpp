#include <iostream>

using namespace std;

int main(){

float a,b,c,d;
cin>>a>>b>>c>>d;
if(c>=d && c<=b && b<=a ){
    c=a;
    b=a;
    d=a;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
else if(b>a && b<c && c<d){
   
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
else{
 a*=a;
    b*=b;
    c*=c;
    d*=d;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}


}
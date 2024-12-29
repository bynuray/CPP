#include <iostream>
#include <cmath>

using namespace std;

int main(){

float x,y,z;
cin>>x>>y>>z;
if(y>=x && y<=z){
    x*=2;
    y*=2;
    z*=2;
    cout<<x<<" "<<y<<" "<<z<<endl;
}
else{
    x=(x>0)? x: (-x);
    y=(y>0)? y:(-y);
    z=(z>0)?z:(-z); 
cout<<x<<" "<<y<<" "<<z<<endl;
}



}
#include <iostream>

using namespace std;

int main(){

float x,y;
cin>>x>>y;
if(x>y && x!=y){
    y=((x+y)/2);
    x*=2;
    cout<<x<<" "<<y<<endl;
}
else{
x=(x+y)/2;
 y*=2;
cout<<x<<" "<<y<<endl;
} 

}
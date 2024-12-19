#include <iostream>

using namespace std;

int main(){
    system("clear");
int x,y;
cin>>x>>y;

if(x>y){
    cout<<x<<" "<<y;
}
else if(y>x){
    x=x+y;//13=5+8
    y=x-y;//x=13-8=5
    x=x-y;
    cout<<x<<" "<<y;

}

}
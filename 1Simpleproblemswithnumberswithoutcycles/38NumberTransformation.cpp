#include <iostream>

using namespace std;

int main(){

float x,y;
cin>>x>>y;

if(x<0 &&y<0){
    x*=(-1);
    y*=(-1);
    cout<<x<<" "<<y<<endl;
}
else if((x>0 &&y<0)||(x<0 &&y>0)){
    x+=0.5;
    y+=0.5;
    cout<<x<<" "<<y<<endl;
}
else if(x>0 &&y>0 && !((x>=0.5 && x<=2) &&(y>=0.5 &&y<=2))){
    x/=10;
    y/=10;
    cout<<x<<" "<<y<<endl;
}
else{
    cout<<x<<" "<<y<<endl;
}


}
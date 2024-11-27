#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float KmtoMile(float s){
float Mile=s*0.621371;
return Mile;
}


int main(){

float speed;
cin>>speed;
if(speed>=1 && speed<=100){

float res=KmtoMile(speed);
cout<<res<<" Miles/hr"<<endl;
}
else{
   cout<<"please write speed between 1 and 100"<<endl;
}
}

// 128.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float  VolumeSphera(float r){
const double pi= 3.141592653;
float V=(4.0/3.0)*pi*pow(r,3);
return V;
}

int main(){
system("clear");
 float radius;
 cin>>radius;

float volume=VolumeSphera(radius);
cout<<volume<<endl;
}
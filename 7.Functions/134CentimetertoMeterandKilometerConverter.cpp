#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void Convert(float a,float &convertKM, float &convertM ){
convertKM=a*pow(10,-5);
convertM=a*pow(10,-2);
}


int main(){

float cm,km,m;
cin>>cm;
Convert(cm,km,m);

cout<<"The distance in meter is: "<<m<<endl;
cout<<"The distance in kilometer is: "<<km<<endl;
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double calculateCubeVolume(double sideLength){
double V=pow(sideLength,3);
return V;
};


int main(){

 double sideLength;
 cin>>sideLength;
 if(sideLength>=1 && sideLength<=100){

 int cubeVolume=calculateCubeVolume(sideLength);
cout<<cubeVolume<<endl;
 }
 else{
    cout<<"please add side between 1 and 100"<<endl;
 }


}

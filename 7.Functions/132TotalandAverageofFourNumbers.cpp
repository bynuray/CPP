#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


float Calculation(int &a,int &b,int &c,int &d,float &Total,float &Average){
     Total=a+b+c+d;
     Average=Total/4;
    return Total;
    return Average;
}



int main(){

int num1,num2,num3,num4;
float Total,Average;
cin>>num1>>num2>>num3>>num4;

float res=Calculation(num1,num2,num3,num4,Total,Average);

cout<<"The total of four numbers is : "<<Total<<endl;
cout<<"The average of four numbers is : "<<Average<<endl;


}
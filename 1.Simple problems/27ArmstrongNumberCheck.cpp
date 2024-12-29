#include <iostream>
#include <cmath>
using namespace std;


int main(){

int num,d1,d2,d3,d4,sum;
    cin>>num;
    if(num>999 &num<10000){
          d1=pow(num/1000,4);
       d2=pow((num/100)%10,4);
       d3=pow((num/10)%10,4);
       d4=pow(num%10,4);

sum=d1+d2+d3+d4;
if(sum==num){
    cout<<"Armstrong Number"<<endl;
}
else cout<<"Not Armstrong Number"<<endl;


}
}
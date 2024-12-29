#include <iostream>

using namespace std;

int main(){

int num,d1,d2,d3,d4,d5;
    cin>>num;
    if(num>9999){
       d1=num/10000;
        d2=(num/1000)%10;
        d3=(num/100)%10;
        d4=(num%100)/10;
        d5=num%10;

        if(d1==d2||d1==d3||d1==d4||d1==d5||d2==d3||d2==d4||d2==d5 ||d3==d4||d3==d5 ||d4==d5){
            cout<<"Identical Digits Found "<<endl;
        }
        else{
            cout<<"No Identical Digits"<<endl;
        }

}
}
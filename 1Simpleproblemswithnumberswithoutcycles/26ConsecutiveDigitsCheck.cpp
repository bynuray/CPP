#include <iostream>


using namespace std;

int main(){

int num,d1,d2,d3,d4;
    cin>>num;
    if(num>999 &&num<10000){
       d1=num/1000;
       d2=(num/100)%10;
       d3=(num/10)%10;
       d4=num%10;

       if((d1==3 &&d2==7) ||(d2==3 && d3==7)||(d3==3 &&d4==7)){
        cout<<"Consecutive Digits Found"<<endl;
       }
       else{
        cout<<"Consecutive Digits Not Found"<<endl;
       }

}
}
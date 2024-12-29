#include <iostream>

using namespace std;

int main(){

int num,d1,d2,d3,d4,d5,sum;
    cin>>num;
    if(num>999 && num<10000){
        d1=num/1000;
        d2=(num/100)%10;
        d3=(num/10)%10;
        d4=num%10;
if(num%d1==0 &&num%d2==0 && num%d3==0 &&num%d4==0){
    cout<<"Divisible by All Digits"<<endl;
}
else{
    cout<<"Not Divisible by All Digits"<<endl;
}

}
}
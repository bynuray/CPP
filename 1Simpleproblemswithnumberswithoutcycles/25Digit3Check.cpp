#include <iostream>


using namespace std;

int main(){

int num,d1,d2,d3,d4,d5;
    cin>>num;
    if(num>999 && num<10000){
        d1=num/1000;
        d2=(num/100)%10;
        d3=(num/10)%10;
        d4=num%10;
        
if(d3==3){
    cout<<"Digit 3 Found"<<endl;
}      
else{
    cout<<"Digit 3 Not Found"<<endl;
}

}
}
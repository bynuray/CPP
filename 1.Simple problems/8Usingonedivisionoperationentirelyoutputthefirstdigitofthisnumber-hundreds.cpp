#include <iostream>

using namespace std;

int main(){

   int num,firstd;
    cin>>num;
    if(num>99 &&num<1000){
        firstd=num/100;
        cout<< firstd<<endl;
    }
    else{
        cout<<"please enter 3-digit number"<< endl;
    }

    
}
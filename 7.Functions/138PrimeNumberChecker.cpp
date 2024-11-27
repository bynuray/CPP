#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void PrimeFunc(unsigned int a){
    bool IsPrime=true;

    for (unsigned int i = 2; i < a; i++){
        if(a%i==0){
            IsPrime=false;
           break;
        }
        else{
            IsPrime=true;
            break;
        }
    }
    if(IsPrime==true){
        cout<<"The number "<<a<<" is a prime number"<<endl;
    }
    else{
          cout<<"The number "<<a<<" is not a prime number"<<endl;
    }
    
}


int main(){
    system("clear");
int n;
cin>>n;

PrimeFunc(n);

}
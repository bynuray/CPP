#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void Check(int a){
    if(a%2==0){
        cout<<"The entered number is even"<<endl;
    }
    else{
cout<<"The entered number is odd"<<endl;
    }
    
}


int main(){

int num;
cin>>num;

Check(num);

}
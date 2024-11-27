#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float Factorial(int num){
    int f(1),SeriesFact(0);
    for (int i = 1; i <= num; i++)    {
        f*=i;
        SeriesFact+=f/i;
       
    }
    return SeriesFact;
}



int main(){
system("clear");
int n;
cin>>n;

cout<<Factorial(n)<<endl;
}
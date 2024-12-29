#include <iostream>

using namespace std;

int main(){
    system("clear");
    int n,power(0);
    cin>>n;

    for (int i = 2; i*i < n; i++)    {
        power=0;
        while(n%i==0){
            n/=i;
            power++;
            
        }
   if(power>0){
     cout<<i<<"^ "<<power<<" ";
   }
    }
    if(n>1){
cout<<n<<"^"<<1;
    }
    
}
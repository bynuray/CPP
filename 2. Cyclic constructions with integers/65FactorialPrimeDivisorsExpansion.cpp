#include <iostream>
using namespace std;

int main(){
    system("clear");
int n,f(1),power;
cin>>n;

for (int i = 1; i <=n; i++){
    f*=i;
}

for (int i = 2; i*i < f; i++){
    power=0;
    while(f%i==0){
        f/=i;
        power++;
    }
    if(power>0){
        cout<<i<<"^"<<power<<" ";
    }
}
if(n>0){
    cout<<n<<"^"<<1;
}


}
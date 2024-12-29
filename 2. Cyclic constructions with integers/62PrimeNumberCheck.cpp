#include <iostream>
#include <cmath>

using namespace std;

int main(){
    system("clear");
int n,power;
cin>>n;
bool isYES=false;
for (int i = 0; i <n; i++){
    power=pow(2,i);

    if(power==n){
isYES=true;
break;
    }
}
if(isYES){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}
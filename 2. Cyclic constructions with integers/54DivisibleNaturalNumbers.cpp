#include <iostream>

using namespace std;

int main(){

    system("clear");
int n,last;
cin>>n;

for (int i = 1; i <n; i++){
int temp=i;
bool isValid=true;

while(temp>0){
    last=temp%10;
    temp/=10;
if(last==0 || i%last!=0){
    isValid=false;
    break;
}    
}

if(isValid==true){
    cout<<i<<" ";
}

    }

}



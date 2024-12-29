#include <iostream>

using namespace std;


int main(){
system("clear");
int n,sum(0);
cin>>n;

for (int i = 2; i < n; i++){
    sum=0;
    for (int j = 1; j < i; j++)    {
        if(i%j==0){
            // cout<<"i: "<<i<<" j: "<<j<<" div: "<<i/j<<endl;
            sum+=j;
        }
    }
   if(i==sum){
    cout<<sum<<" ";
   }
    
}



}
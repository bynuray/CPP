#include <iostream>
#include<cmath>

using namespace std;

int main(){
system("clear");
    int n;
    cin>>n;
    for (int i = 1; i*i < n; i++)    {
        for (int j = i+1; j*j < n; j++)        {
            int a=i*i;
            int b=j*j;
            int sum=a+b;

if(sum<=n){
    cout<<i<<"^2 + "<<j<<"^2 = "<<sum<<endl;
}

        }
        
    }
    
}
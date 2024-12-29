#include <iostream>
#include <cmath>

using namespace std;

int main(){
    system("clear");
    int n;
    cin>>n;

    bool isValid=false;
    for (int i = 1; i < n/2; i++)    {
        for (int j = 1; j < i; j++)        {
            int a=i*i;
            int b=j*j;
            if(n==a+b && a!=b){
                cout<<n<<" = "<<a<<"+"<<b<<endl;
                isValid=true;
            }
            
        }
        
    }
    if(isValid==true){
        cout<<"YES"<<endl;
    }
    else cout<<"No"<<endl;
}

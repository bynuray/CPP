#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;




void Prefect(int a,int b){
    cout<<"The perfect numbers between "<<a <<" to "<<b<<" are: ";
    int sum(0);
    for (int i = a; i <=b; i++)    {
        sum=0;
        for (int j = 1; j <=i/2; j++){
            if(i%j==0 &&i>=j){
                
               sum+=j;
               
            }
    
        }
        if(sum==i){
        cout<<i<<" ";
    }
    }

    
}

int main(){
system("clear");
int start,end;
cin>>start>>end;

Prefect(start,end);

}
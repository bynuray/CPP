#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

int n,sum1(0),sum2(0);
cin>>n;
int matrix[n][n];

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)    {
        cin>>matrix[i][j];
    }
    
}

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)    {
        if(i==j){
            sum1+=matrix[i][j];
        }
        if(i+j==n-1){
            sum2+=matrix[i][j];
            
        }
    }
    
}
cout<<sum1<<" "<<sum2<<endl;

}
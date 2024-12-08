#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

int n;
cin>>n;
int matrix[n][n];

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)    {
        cin>>matrix[i][j];
    }
}

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)    {
        cout<<matrix[j][i]<<" ";
    }
    cout<<endl;
    
}




}
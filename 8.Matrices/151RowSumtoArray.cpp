#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

int n,m,sum(0);
cin>>n>>m;
int matrix[n][m];

for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)    {
        cin>>matrix[i][j];
    }
}

int arr[n]={0};

for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++)    {
 arr[i]+=matrix[i][j];
    } 
}

for (int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}





}
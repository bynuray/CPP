#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

 int n,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    
    int arr[n]={0};
    
    for(int i=0;i<n;i++){
     int min=matrix[i][0];
        for(int j=0;j<m;j++){
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
            arr[i]=min;
        }
    }

for (int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}



}
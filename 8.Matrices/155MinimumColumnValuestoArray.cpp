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
    
    int arr[m]={0};
    for (int j = 0; j < m; j++)    {
    int min=matrix[0][j];
    
        for (int i = 0; i < n; i++)        {
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
                arr[j]=min;
        }
        
    }
    
for (int i = 0; i < m; i++){
    cout<<arr[i]<<" ";
}


}
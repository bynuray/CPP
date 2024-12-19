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
    
  

     int max=matrix[0][0];
     int min=matrix[0][0];
     int minrow;
     int maxrow;
for(int i=0;i<n;i++){
     
        for(int j=0;j<m;j++){
     if(matrix[i][j]>max){
        max=matrix[i][j];
     maxrow=i;
     }
     if(matrix[i][j]<min){
        min=matrix[i][j];
     minrow=i;
     }
        }
    }

for (int i = 0; i < n; i++){
    for (int i = 0; i < m; i++)    {
        /* code */
    }
    
}



}
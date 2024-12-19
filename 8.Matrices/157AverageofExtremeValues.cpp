#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

 int n,m;
    cin>>n>>m;
    float matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    float final;
    float max=matrix[0][0];
    float min=matrix[0][0];
    for (int i = 0; i < n; i++)    {
        for (int j = 0; j < m; j++){
            
            if(matrix[i][j]>max){
                max=matrix[i][j];
            }
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
        final=(max+min)/2;
        
    }
        cout<<fixed<<setprecision(2)<<final<<endl;
    


}
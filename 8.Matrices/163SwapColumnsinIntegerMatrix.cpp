#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;


int main(){

system("clear");

 int n,m;
 cout<<"enter matrix size n x m";
 cin>>n>>m;

int matrix[n][m];
cout<<"enter the values of matrice";
 for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)    {
        cin>>matrix[i][j];
    }
 }
 int i1,j1;
 cout<<"enter i1 and j1 ";
cin>>i1>>j1;
    
for ( int j = 0; j < m; j++){
    for ( int i = 0; i < n; i++)    {
     if(i==i1 &&j==j1){
cout<<matrix[i1][j1]<<" ";
     }   
    }
    cout<<endl;
    
}


    



}
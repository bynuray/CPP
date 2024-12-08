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

// for (int i = 0; i < n; i++){
//     for (int j = 0; j < n; j++)    {
//  if(i<=j){
//     matrix[i][j]=0;
//  }
//  cout<<matrix[i][j]<<" ";
//      }
//     cout<<endl;
// }

//More optimal way in the second loop j=i j<n j++ can be writeen and inside it without condition just matrix[i][j]=0;
for (int i = 0; i < n; i++){
    for (int j = i; j < n; j++)    {
    matrix[i][j]=0;

     }
    
}

for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    
}

}
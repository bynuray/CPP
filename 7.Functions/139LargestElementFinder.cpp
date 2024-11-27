#include  <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int LargestArrElement(int arr[],int size){
int max=arr[0];
for (int i = 0; i < size; i++){
    if(arr[i]>max){
        max=arr[i];
    }else{

    }
    
}
cout<<"largest element of the array: "<<max<<endl;

}


int main(){
    system("clear");
int n;
    do
    {
        cout<<"Please add n between 1 to 100: ";
     cin>>n;
     if(n<1 || n>100){
        cout<<"invalid input.";
     }   
    } while (n<=1 || n>=100);
        
        
    int arr[n];
    for (int i = 0; i < n; i++)        {
            cin>>arr[i];
    }

    LargestArrElement(arr,n);  
 
   
    
}
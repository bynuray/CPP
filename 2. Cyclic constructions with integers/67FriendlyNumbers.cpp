#include <iostream>

using namespace std;

int main(){
    system ("clear");
int n,m,sum(0),sum2(0);
cin>>n>>m;

   
    for (int i = n; i <=m; i++){
        sum=0;
        int org=i;
    for (int j = 1; j <i; j++)    {
        if(i%j==0){
            sum+=j;
        }
    }
    sum2=0;
for (int k = 1; k < sum; k++){
    if(sum%k==0){
        sum2+=k;
    }
}

if(sum2==i && sum!=i &&i<sum){
      cout << "(" << sum2 << ", " << sum << ")" << endl;
}




}

}
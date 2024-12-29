#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 3; i + 2 < n; i++) {
        bool isPrime = true, isPrime2 = true;
      
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
       
        if (isPrime) {
            for (int j = 2; j * j <= i + 2; j++) {
                if ((i + 2) % j == 0) {
                    isPrime2 = false;
                    break;
                }
            }
        }

        if (isPrime && isPrime2) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }

   
}

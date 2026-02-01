#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    long long arr[cases];

   
    for(int i = 0; i < cases; i++)
    {
        cin >> arr[i];
    }

   
    for(int i = 0; i < cases; i++) 
    {
        long long n = arr[i];
        long long a = 0, b = 0, c = 0;
        bool found = false;

  
        for(long long j = 2; j * j <= n; j++) 
        {
            if(n % j == 0) 
            {
                a = j;           
                long long temp = n / a;

             
                for(long long k = a + 1; k * k <= temp; k++) 
                {
                    if(temp % k == 0) 
                    {
                        b = k;
                        c = temp / k;

                       
                        if(a != b && a != c && b != c && b >= 2 && c >= 2) 
                        {
                            cout << "YES" << endl;
                            cout << a << " " << b << " " << c << endl;
                            found = true;
                            break;
                        }
                    }
                }

                break;
            }
        }

        if(!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
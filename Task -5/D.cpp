#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;

int main() {
    long long num;
    cin >> num;

    long long a0 = 1, b0 = num; 
    long long best_max = num; 

    for(long long i = 1; i <= sqrt(num); i++)
     {
          if(num % i == 0 ) 
        {  
            long long j = num / i;
            long long a=i;
            long long b=j;

            if(__gcd(a,b) == 1)
            {

            long long current_max = max(a,b); 
            if(current_max < best_max)
             {
                a0 = a;
                b0 = b;
                best_max = current_max;
             }
           }
        }
    }

    cout << a0 << " " << b0 << endl;

    return 0;
}
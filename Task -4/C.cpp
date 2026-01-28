//Apple Division

#include <iostream>
#include <cmath>
using namespace std;

int n;
long long a[21]; 
long long totalSum = 0;
long long ans = 1e18; 

void solve(int index, long long currentSum)
{
    if (index == n)
    {
        long long otherSum = totalSum - currentSum;
        long long diff = llabs(otherSum - currentSum);
        ans = min(ans, diff);
        return;
    }

    solve(index + 1, currentSum + a[index]);

    
    solve(index + 1, currentSum);
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        totalSum += a[i];
    }

    solve(0, 0);

    cout << ans << endl;

    return 0;
}
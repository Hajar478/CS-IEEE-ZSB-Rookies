#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases; 
    while (cases--)
    {
        int num;
        cin >> num;
        cout << num / 2 <<endl;
    }

    return 0;
}
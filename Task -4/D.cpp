//Dreamoon and Wifi

#include <iostream>
#include <cmath>
using namespace std;

string s1, s2;
int correctPos = 0;
int good = 0, total = 0;

void solve(int index, int currentPos)
{


    if (index == s2.length())
    {
        total++;
        if (currentPos == correctPos)
            good++;
        return;
    }

   
    if (s2[index] == '+')
    {
        solve(index + 1, currentPos + 1);
    }
   
    else if (s2[index] == '-')
    {
        solve(index + 1, currentPos - 1);
    }
   
    else
    {
        solve(index + 1, currentPos + 1);
        solve(index + 1, currentPos - 1); 
    }
}

int main()
{
    cin >> s1;
    cin >> s2;

    
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            correctPos++;
        else
            correctPos--;
    }

   
    solve(0, 0);

    
    double probability = (double)good / total;

    cout.precision(12);
    cout << fixed << probability << endl;

    return 0;
}
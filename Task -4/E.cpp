//creating string

#include <iostream>
using namespace std;

string s;
bool used[10];
string current;
string result[50000];
int cnt = 0;


void sortString()
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}


void solve()
{
   
    if (current.length() == s.length())
    {
        result[cnt] = current;
        cnt++;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
       
        if (used[i])
            continue;

        
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
            continue;

       
        used[i] = true;
        current += s[i];

        solve();

       
        used[i] = false;
        current.pop_back();
    }
}

int main()
{
    cin >> s;
    sortString();
    solve();
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
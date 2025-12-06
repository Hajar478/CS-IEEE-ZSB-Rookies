#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    string compare="codeforces";
    while(cases--)
    {
        char letter;
        cin>>letter;
        bool found=false;
        for(int i=0; i<10; i++)
        {
            if(letter == compare[i])
            {
                found=true;
            }
        }
        if(found)
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }

return 0;
}



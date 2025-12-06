#include<iostream>
using namespace std;
int main()
{
 int cases;
 cin>>cases;
 int a, b, c, d;
 string result;
 for (int i=0; i<cases; i++)
    {
        cin>>a>>b>>c>>d;
        if ( a==b && c==d && a==c)
            {
                result += "Yes\n";
            }
        else 
            {
                result += "No\n";
            }
    }

cout<<result<<endl;

    return 0;
}
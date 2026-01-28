#include<iostream>
using namespace std;

long long div(long long n)
    {
        
        if(n<=1)
            {
                cout<<n<<" ";
                return 1;
            }
        else if (n%2 != 0)
            { 
                cout<<n<<" ";
                n=((n*3)+1);
                cout<<n<<" ";
                return div(n/2);
                 
            }
        else 
            {
                cout<<n<<" ";
                return div(n/2);
                 
            }
         
    }

int main()
{
    long long num;
    cin>>num;
    div(num);

    return 0;
}

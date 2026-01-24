//A- Serval vs Monster

#include<iostream>
using namespace std;

void attacks(int health , int a)
    {
        int n=0;
        if ( health%a !=0)
        {
            n=((health)/a)+1;
            cout<<n<<endl;
        }
        else 
        {
            n=((health)/a);
            cout<<n<<endl;
        }
  
    }

int main()
{
    int H , A;
    cin>>H>>A;
    attacks(H,A);
  
    return 0;
}
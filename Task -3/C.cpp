//ATM

#include<iostream>
using namespace std;

void withdraw(int x,float y)
    {
        float remain=0;
        if(x%5 ==0 && y>=(x+0.5) )
        {
            remain=(y-(x+0.50));
            cout<<remain<<endl;
        }      
        else
        {
            cout<<y<<endl;
        }
    }

int main()
{
 int draw; 
 float balance;
 cin>>draw>>balance;
 withdraw(draw ,balance);

    return 0;
}
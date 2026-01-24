#include<iostream>
#include<cstring>
using namespace std;

void concatenate(int x,int y)
{
  string x1;
  string y1;
for(int i=0; i<y; i++)
    {
        x1 +=to_string(x);
    }
for(int j=0; j<x; j++)
    {
        y1 +=to_string(y);
    }

if(x1 > y1)
    {
        cout<<y1<<endl;
    }
else if(y1 > x1)
    {
        cout<<x1<<endl;
    }
else
    {
        cout<<x1<<endl;
    }

}

int main()
{  
  int num1 , num2;
  cin >> num1 >>num2;
  concatenate(num1 , num2);

    return 0;
}

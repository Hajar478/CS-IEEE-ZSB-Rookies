#include<iostream>
using namespace std;
int main()
{

  int price, remain;
  cin>>price>>remain;

for (int i=1; i<10; i++ )
    {
        if ((i*price % 10)== remain ||(i*price % 10) == 0 )
            {
                cout<<(i)<<endl;
                break;
            }
            
    }

    return 0;
}
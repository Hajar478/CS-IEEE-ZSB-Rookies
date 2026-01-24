//digits

#include<iostream>
#include<cmath>
using namespace std;

void digits_num(int n ,int k)
    {
        float digits=floor((log10(n)/log10(k))+1);
        cout<<digits<<endl;
    }

int main()
{
  int number;
  int base;
  cin>>number>>base;
  digits_num(number,base);

    return 0;
}    
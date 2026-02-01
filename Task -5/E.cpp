#include<iostream>
using namespace std;
int main()
{
  int cases;
  cin>>cases;
  int arr[cases];
  for(int i=0; i<cases; i++)
  {
    cin>>arr[i];
    int config;
    if(arr[i]%2 != 0)
    {
        config=0;
        cout<<config<<endl;
    }
    else
    {
        config=(arr[i]/4)+1;
        cout<<config<<endl;
    }
  }
  

    return 0;
}

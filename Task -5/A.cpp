#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    
    int arr[cases];
    for(int i=0; i<cases; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<cases; i++)
    {
        int ndivs=0;
        for(int n=1; n<=sqrt(arr[i]); n++)
        {
            if(arr[i]%n == 0)
            {
                if(arr[i]/n != n )
                {
                    ndivs +=2;
                }
                else //if(arr[i]/n == n)
                {
                  ndivs ++;
                }
            }
        }
        cout<<ndivs<<endl;
    }
    
    return 0;
}
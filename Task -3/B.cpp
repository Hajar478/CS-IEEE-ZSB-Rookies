#include<iostream>
using namespace std;

void return_to_origin(int size , int num)
{
    int vertices= ((size*2)+1);
    int arr[vertices];
        for(int i=0; i<vertices; i++)
            {
                cin>>arr[i];
            }

        for ( int i=1; i<vertices; i++)
            {
                if(arr[i] > (arr[i-1]+1) && arr[i] > (arr[i+1]+1))
                    {
                        arr[i]--;
                        num--;
                        if(num == 0)
                        { break; }
                    }
            }

        for (int i=0; i<vertices; i++)
            {
                cout<<arr[i]<<" ";
            }
    }

int main()
{
    int s ,n;
    cin>>s>>n;
    return_to_origin(s,n);


    return 0;
}
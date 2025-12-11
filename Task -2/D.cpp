#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int cases;
    cin>>cases;
while(cases--)
   {
        int length;
        cin>>length;
        int arr[100];
        int common;
        int diff_index=-1;
        for(int i=0; i<length; i++)
            {
                cin>>arr[i];
            }
        if(arr[0]==arr[1] || arr[0]==arr[2])
            {
                 common=arr[0];
            }
        else
            {
                common=arr[1];
            }

        for(int i=0;i<length;i++)
            {
                if(arr[i]!=common)
                    {
                        diff_index=i+1;
                    }
            }
        cout<<diff_index<<endl;

    }
    return 0;
}
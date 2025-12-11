#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int col=0;
    int row=0;

    for(int i= 0; i<5; i++)
        {
            for(int j=0; j<5; j++) 
                {
                    int num;
                    cin>>num;
                    if(num==1)
                        {
                            col=j;
                            row=i;
                        }
                }
        }
            int moves=0;
            if(row> 2) 
                {
                    moves += (row-2);
                }  
            else
                {
                    moves += (2-row);
                }
            if(col>2)
                {
                    moves += (col-2);
                }  
            else
                {
                    moves += (2-col);
                }
    cout<<moves<<endl;

return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    for(int i=0; i<cases; i++)
    {
        int ballon=0;  
        string letters="" ;
        int num_prob;
        cin>>num_prob;
        char c;
        for (int k=0; k<num_prob; k++)
            {
                cin>>c;
            
        bool compare=false;
        for (int j=0; j<letters.length(); j++)  
            {
               if (letters[j] == c)
                {
                    compare = true;
                    break;
                }
            }
       if (compare)
            ballon += 1;
        else
            {
                ballon += 2;
                letters += c;
            }
        }
        cout<<ballon<<endl;

    }
          
    return 0;
}
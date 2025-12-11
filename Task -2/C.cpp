#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int cases;
    cin>>cases;
while(cases--)
    {
        string word;
        cin>>word;
        int sum=0;
        if(word.size()<=10)
            {
                cout<<word<<endl;
            }
        else{
            for(int i=1;i<word.size()-1;i++)
                {
                    sum++;
                }
            cout<<word[0]<<sum<<word[word.size()-1]<<endl;
        }    
    }
return 0;
}
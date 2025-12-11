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
        string s,t;
        cin>>s>>t;

        int count[26]={0};
        for(int i=0; i<length; i++)
            {
                count[s[i]-'a']++;
                count[t[i]-'a']--;
            }
        bool result=true;
        for(int i=0; i<26; i++)   
            {
                if(count[i]!=0)
                    {
                        result=false;
                    }
            }
        if(result)
            {
                cout<<"YES"<<endl;
            }
        else
            {
                cout<<"NO"<<endl;
            }
    }

    return 0;
}
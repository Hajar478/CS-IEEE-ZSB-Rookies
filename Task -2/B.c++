#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool allupper=true;
    bool exceptfirst=true;

    for(int i=0;i<s.size();i++) 
        {
            if(!(s[i]>='A' && s[i]<='Z'))
            {
                allupper=false;
            }
            if(i>0 &&!(s[i]>='A' && s[i]<='Z'))  
            {
                exceptfirst=false;
            }
        }

    if(allupper || exceptfirst)
        {
        for(int i=0;i<s.size();i++)
            {
             if(s[i]>='A' && s[i]<='Z')
                {
                    s[i]=s[i]+32;
                }
            else if(s[i]>='a' && s[i]<='z')
                {
                    s[i]=s[i]-32;
                }
            }
        }
    cout<<s<<endl;

    return 0;
}
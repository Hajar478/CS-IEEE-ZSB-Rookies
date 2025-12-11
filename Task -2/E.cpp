#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int char_num;
    cin>>char_num;
    string s;
    cin>>s;
    bool letters[26]={false};

    for(int i=0; i<char_num; i++)
        {
            if((s[i]>='A' && s[i]<='Z'))
                {
                    letters[s[i]-'A']=true;
                }
            else if((s[i]>='a'  && s[i]<='z'))
                {
                    letters[s[i]-'a']=true;
                }
        }
    bool result=true;
    for(int i=0; i<26; i++)
        {
            if(!letters[i])
                {
                    result=false;
                }
        }
    if(result)
        {
            cout<<"YES\n";
        }
    else
        {
         cout<<"NO\n";
        }

        return 0;
}
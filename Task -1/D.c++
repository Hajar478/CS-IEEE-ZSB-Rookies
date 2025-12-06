  #include<iostream>
 using namespace std;
int main()
{

 int cases;
 cin>>cases;
 int a, b, c;
 string result="";

  for(int i=0; i<cases; i++)
    {
        cin>>a>>b>>c;
        if ( a+b == c || b+c == a || c+a == b)
            {
                result += "Yes\n";
            }
         else
             { 
                result += "No\n";
             }
    }
 cout<<result;
    return 0;
}
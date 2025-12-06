#include<iostream>
using namespace std;
int main()
 {
  int cases;
  cin>>cases;
  int rating[cases];
  
  for (int i=0; i<cases; i++)
  {
      cin>>rating[i];
  }  

  for (int i=0; i<cases; i++)
  {
       if(rating[i] >= 1900)
             {
                cout<<"Division 1"<<endl;
             }
            else if (rating[i] <= 1899 && rating[i] >= 1600)
             {
              cout<<"Division 2"<<endl;  
             }
            else if (rating[i] <= 1599 && rating[i]  >= 1400)
              {
               cout<<"Division 3"<<endl;  
              }
            else
                {
                   cout<<"Division 4" <<endl;
                } 
   }

   return 0;
 }





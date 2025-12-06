 #include<iostream>
 using namespace std;
int main()
{

  int prob_num;
  cin>>prob_num;

  int ans1 ,ans2 ,ans3;
  int prob_sol=0;

  for( int i=0; i<prob_num; i++)
  {
    cin>>ans1>>ans2>>ans3;
    if (ans1+ans2+ans3 >= 2)
    {
     prob_sol ++;
    }
  }

  cout<<prob_sol<<endl;

    return 0;
}
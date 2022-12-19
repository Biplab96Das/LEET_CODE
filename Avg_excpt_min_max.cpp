#include<iostream>
#include<vector>
using namespace std;
int salarySize;
double average(int *p,int pSize)
{
   int min,max;min=max=p[0];
   double sum =p[0];
   for(int i=1;i<pSize;i++)
     {
         if(min>p[i])
             min=p[i];
         if(max<p[i])
             max=p[i];
      sum=sum+p[i];
     }
     return ((sum-max-min)/(pSize-2));
}
int main()
{
int salarySize;
  cout<<"Enter the size of Salary array "<<endl;
  cin>>salarySize;
  vector<int> salary(salarySize);
  cout<<"Enter the salary array "<<endl;
  for(int i=0;i<salarySize;i++)
    cin>>salary[i];
  cout<<"Average p except minimum and maximum p is "<<average(&salary[0],salarySize)<<endl;
  return 0;
}
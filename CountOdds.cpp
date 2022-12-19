#include<iostream>
#include<math.h>
using namespace std;

long long countOdds(long long low, long long high){
   long long count=0;
   if(low%2==1){
      if(high%2==1)
       count=(high-low)/2+1;  
      else
        count=(high-low+1)/2;    
   } 
   else if(low%2==0)
   {
      if(high%2==1)
        count=(high-low+1)/2;
      else 
        count=(high-low)/2;  
   }
  return count;   
}
int main()
{
    long long low,high;
    cout<<"low = ";
    cin>>low;
    cout<<"high = ";
    cin>>high;
    cout<<"Number of odds between low and high(inclusive) is "<<countOdds(low,high)<<endl;
return 0;
}
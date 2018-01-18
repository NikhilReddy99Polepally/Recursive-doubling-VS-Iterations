#include<iostream>
#include<stdlib.h>
#include <ctime>   //to calc. execution time
#include<math.h>

using namespace std;

int recursivedoubling(int x,int n)
{   
     if(n==0) return 1;
     
      if (n==1) return x;
      
      if(n%2 == 0) 
      {
          return recursivedoubling(x,n/2)*recursivedoubling(x,n/2);
      }
      else
      {
           return recursivedoubling(x,n/2)*recursivedoubling(x,n/2)*x;
      }   
}

void power(int x,int n)
{
    int k,p=1;
    
    for(k=1;k<=n;k++)
    {
        p = x*p;
    } 
}

int main()
{
   int x,y,n;
    
   x = 3;
   
    for(n=0;n<20;n++)
    {
      for(int i=1;i<3;i++)
      {    
       float start_s = clock();
       
          switch(i)
          {
          case 1 : y = recursivedoubling(x,n);
                     cout<<y<<",";
                      break;
          case 2 : power(x,n);
                      break;
           }
       
          float stop_s = clock();
     
        if(i==1)  cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << ",";    // will be getting time in milli sec 
        
        if(i==2)  cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000;
      } 
      cout<<endl;   
     }
       
  return 0;
}

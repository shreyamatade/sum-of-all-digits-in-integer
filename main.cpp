#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num; int numa; int sum=0;
   cin>>num;

   int nd=floor(log10(num))+1; //no of digits in an integer
    /* NOTE: here instead of log use to_string to find no of digits in integer*/


   for(int i=0;i<nd;i++)
   {
       numa=num%10;
       num=num/10;
       //cout<<"n:"<<numa<<endl;//numa=4,3,2,1
       sum=sum+numa;
   }
   cout<<"Sum is:"<<sum<<endl;


}

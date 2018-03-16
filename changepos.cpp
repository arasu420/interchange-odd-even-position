#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,temp,count=0;
    string s;
    cin>>s;
     for(i=0;s[i]!=0;i++)
     {
         count++;
     }
 for(i=0;i<count;i++)
{
if(i%2!=0)
{
temp=s[i];
s[i]=s[i-1];
s[i-1]=temp;
}
}
cout<<s;
  return 0;  
}

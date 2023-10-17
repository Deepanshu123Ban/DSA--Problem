#include<iostream>
using namespace std;
int main()
{

//Variable Declaration
  string s;
int a,b;

// input string s 
cout<<"Enter string ";
cin>>s;

/* substring of string s
   a- first index of substring
   b- last index of sustring
*/
cout<<"Enter a,b ";
cin>>a>>b;

for(int i=a;i<=b;i++)
{
cout<<s[i];
}

return 0;
}

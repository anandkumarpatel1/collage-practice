#include <iostream>
using namespace std;
int main()
{
int t,k=1,m=0;
cin>>t;
int arr[t];

for (int i = 1; i <= t; i++)
{

    if (t%i==0)
    {
    arr[m]=i;
    m++;
    }
    
}
for (int i = 0; i < m; i++)
{
   cout<<arr[i]<<endl;
}




return 0 ;
}
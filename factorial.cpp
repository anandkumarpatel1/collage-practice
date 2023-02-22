#include <iostream>
using namespace std;
int main ()
{
    double a; 
    double b =1;
    double factorial = 1;
    cout<<"Enter the value "<<endl;
    cin>>a;
    for(b ; b <= a ; b++)
    {
        factorial *= b;
    }
    cout<<factorial<<endl;

    return 0 ;
}
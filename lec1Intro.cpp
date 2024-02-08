#include<iostream> 

using namespace std;

int main()
{

    //typecasting
    int a = 'a';
    cout<<a<<endl;

    char ch = 85;
    cout<<ch<<endl;

    char ch1 = 498032;
    cout<<ch1<<endl;

    //unsigned int
    unsigned int b = 290393147;
    cout<<b<<endl;
    
    //This will give wrong output because unsigned int always use for +ve numbers
    unsigned int c = -34;
    cout<<c<<endl;

    // int/int = int  , float/int = float
    // int a1 = 34;
    // float a1 = 34;
    double a1 = 34;
    int a2 = 45;
    cout<<a1/a2<<endl;

    
  return 0;
}
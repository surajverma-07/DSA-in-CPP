#include<iostream>
#include<math.h>
using namespace std;

int bin_to_dec(int num){
    int ans=0,i=0;
    while (num != 0)
    {
        ans += (num%10)*(pow(2,i));
        i++;
        num/= 10;
    }
    return ans;
    
}
int main()
{
    int num;
    cout<<"\nEnter binary number to convert in decimal ";
    cin>>num;
    cout<<"binary "<<num<<" =  "<<bin_to_dec(num);
    
}

// for loop
#include<iostream>
using namespace std;
int main()
{
//     int n;
// cout<<"Enter value of n";
// cin>>n;

// for (int i = 0; i < n; i++)
// {
//     cout<<i<<endl;
// }

// int i = 0;
// for( ; ; ){
//     if(i<=n){
//     cout<<i<<endl;
//     }
//     else{
//         break;
//     }
//     i++;
// }

// you can access more than one variable in for loop 
// for(int a=0 , b=1 ; a>=0 && b <= 1 ; a--,b-- )
// {
//     cout<<a<<" "<<b<<endl;
// }

// int sum = 0;
// for (int i = 0; i <= n ; i++)
// {
//     sum+= i;
// }
//  cout<<"sum  of "<<n<<"numbers is  =   "<<sum<<endl;

//fibonacci series
// int temp = 0,a = 0 , b = 1;
// cout<<a<<" "<<b<<" ";
// for (int i = 1; i <= n ; i++)
// {
//     temp = a+b;
//     a = b;
//     b = temp;
//     cout<<temp<<"  ";

// }
//   cout<<endl;

//  Prime Number 
// bool isprime = 0;
// for (int i = 2; i <(n/2); i++)
// {
//    if(n%i==0)
//    {
//     cout<<n<<" is not a prime number \n";
//     isprime = 1;
//     break;
//    }
// }
//   if (isprime==0)
//   cout<<n <<" is  a Prime number \n";


int a = 5;
printf("\n Value of a is %d",a);
cout<<endl<<"A =  a+5  =  "<<a+5<<endl;
// int a = 5; // Throw an error

{
    int a = 7;
    cout<<"\n "<<a<<endl;
    {
        a = 5;
        cout<<endl<<a<<endl;
        {
            int a =9 ;
            cout<<"\n"<<a<<endl;
        }
    }
}
return 0;
}
//leetcode problems
// 1281
// 191
// 7   1009   476   binary -> <- decimal
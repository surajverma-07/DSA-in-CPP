// decimal to binary 
// Algorithm 
// 1. divide by 2 num and store it's remainder then reverse the remainder 
 
 //2 approch 
    // pre a . repeat steps a to c while (num!=0)
   // a. num&1 store it into digit it gives last most digit of binary rep. of that num
   // b. ans = (digit*10^i)+ans 
   // c. right shift the binary representation n>>1
   // d. display ans 

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int dec_to_bin(int num){
    int i =0 , ans =0 ,digit;
     while(num){
        digit = num&1;
        //to print in order in which get the values
        ans = (digit*(pow(10,i)))+ans;
        num = num>>1;
        i++;
        cout<<ans;
    }
    return ans;
}

int main() {
    int digit,n;
    cout<<"Enter any Decimal number to convert into binary ";
    cin>>n;
    long int ans;

    ans = dec_to_bin(n);
    
    cout<<"\nDecimal digit "<<n<<"  =  Binary Digit "<<ans<<endl;
}
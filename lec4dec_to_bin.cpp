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


int addBinaryDigits(int bit1, int bit2, int &carry) {
    int sum = (bit1 ^ bit2) ^ carry;
    carry = (bit1 & bit2) | (carry & (bit1 ^ bit2));
    return sum;
}

int binaryAddition(int binaryNum1, int binaryNum2) {
    int result = 0;
    int carry = 0;
    int digitPosition = 1;

    while (binaryNum1 > 0 || binaryNum2 > 0 || carry > 0) {
        int bit1 = binaryNum1 % 10;
        int bit2 = binaryNum2 % 10;

        binaryNum1 /= 10;
        binaryNum2 /= 10;

        int sum = addBinaryDigits(bit1, bit2, carry);

        result = result + (sum * digitPosition);
        digitPosition *= 10;
    }

    return result;
}
int dec_to_bin(int num){
    int i =0 , ans =0 ,digit;
     while(num!=0){
        digit = num&1;
        //to print in order in which get the values
        ans = (digit*(pow(10,i)))+ans;
        num = num>>1;
        i++;
    }
    return ans;
}
// ignore negative 
// take 2's complement of num -> ~num+1 it returns decimal number of equivalent binary num number is negative 
//and logic fails.
// convert this num itno dec
int neg_of_bin(int num){
    int temp,ans=0,digit,i=0;
    while(num != 0){
        digit = num&1;
        temp = ~digit;
        ans = (temp*(pow(10,i)))+ans;  
        num = num>>1;
    }
     return binaryAddition(ans,1);
}

int main() {
    int digit,n;
    cout<<"Enter any Decimal number to convert into binary ";
    cin>>n;
    // num = n;
    long int ans;
    if(n>=0){

    ans = dec_to_bin(n);
    }
    else{
        ans = neg_of_bin(-(n));
    }
    cout<<"\nDecimal digit "<<n<<"  =  Binary Digit "<<ans<<endl;
}
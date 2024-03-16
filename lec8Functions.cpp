// Function makes code easier simple and readable  
// Using Function Reusability of code inhance we use multiple time 
#include<cmath>
#include<iostream>
using namespace std;

//power of a no.
int Power(int a , int b){
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = a*ans;
    }
    return ans;
}

// odd and even 
bool isEven(int num){
    if(num&1) return false;
    else return true;
}

//factorial
int fact(int num){
    if(num == 0 || num ==1){
        return 1;
    }
    int res = 1;
    for (int  i = 1; i <= num; i++)
    {
        res = res*i;
    }
    return res;
}

//nCr calculation
int nCr(int n , int r){
    return(fact(n)/(fact(n-r)*fact(r)));
}

//Prime no. or not
bool isPrime(int num){
    if(num == 1) return false;
    if(num == 2 || num ==3 || num == 5){
        return true;
    }
    if(isEven(num)){
        return false;
    }
    
    for (int i = 2; i <= sqrt(num); i++)
        {
            if(num%i==0){
                return false;
            }
        }
    return true;        
    
}

//Fibonacii series 5- 0 1 1 2 3
void fibo(int term){
    int a=0,b=1,temp;
    cout<<" "<<a<<" "<<b<<" ";
    for (int i = 2; i < term; i++)
    {
        temp = a+b;
        a = b;
        b = temp;
        cout<<temp<<" ";
    }
    cout<<endl;
}
 
//Number of 1's bit in binary digit
int no_one_bit(int bin){
  int count = 0;
  while(bin != 0){
    if(bin&1 == 1){
        count++;
    }
    bin = bin>>1;
  }
  return count;
}




int main(){
    int num;
    // int a,b;
    // cout<<"Enter a and b to calculate Pow(a,b)  ";
    // cin>>a>>b;

    // cout<<a<<" exponent "<<b<<"  is =  "<<Power(a,b)<<endl;
    // cout<<a<<" is "<<((isEven(a))?("an even number \n"):("an odd number \n"));
    // cout<<b<<" is "<<((isEven(b))?("an even number \n"):("an odd number \n"));


// To calculate nCr by taking input n & r 
// Factorial

// int n,r;
// cout<<"\n***  Program to Calculate nCr  ***\n";
// cout<<"Enter n =  ";
// cin>>n;
// cout<<"Enter r =  ";
// cin>>r;

// int result = nCr(n,r);
// cout<<n<<"C"<<r<<"  =  "<<result<<endl;


//Prime no.
// cout<<"Enter nubmer to check wheather it is prime or not  ";
// cin>>num;
// bool res = isPrime(num);
// if(res){
//     cout<<num<<" is a prime number "<<endl;
// }else{
//     cout<<num<<" is not a prime number "<<endl;
// }
 
//fibonacci series 
// cout<<"Enter number of terms to print fibonacci series  ";
// cin>>num;
// fibo(num);

// No. of 1's bit in two no. in i'ts binary form 
int num2;
cout<<"Enter no. 1 and 2  ";
cin>>num>>num2;
cout<<"No. of 1's bit in a and b is  =  "<<(no_one_bit(num)+no_one_bit(num2))<<endl;
}


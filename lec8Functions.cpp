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


int nCr(int n , int r){
    return(fact(n)/(fact(n-r)*fact(r)));
}


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

cout<<"Enter nubmer to check wheather it is prime or not  ";
cin>>num;
bool res = isPrime(num);
if(res){
    cout<<num<<" is a prime number "<<endl;
}else{
    cout<<num<<" is not a prime number "<<endl;
}
}


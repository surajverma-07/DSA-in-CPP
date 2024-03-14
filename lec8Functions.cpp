// Function makes code easier simple and readable  
// Using Function Reusability of code inhance we use multiple time 

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

int main(){
    int a,b;
    cout<<"Enter a and b to calculate Pow(a,b)  ";
    cin>>a>>b;

    // cout<<a<<" exponent "<<b<<"  is =  "<<Power(a,b)<<endl;
    cout<<a<<" is "<<((isEven(a))?("an even number \n"):("an odd number \n"));
    cout<<b<<" is "<<((isEven(b))?("an even number \n"):("an odd number \n"));
}
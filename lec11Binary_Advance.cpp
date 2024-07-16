#include<iostream>
using namespace std;

// 1. find pivot element 6 9 10 3 6 here 3 is our pivot
int pivotElement(int arr[],int size){
    // cout<<"function pivot  \t ";
    int left = 0,right=size-1,mid;
    while (left < right)
    {
        // cout<<"while loop loading ...";
        mid = (left+right)/2;
        if(arr[mid] >= arr[0]){
            //it's denote left side because right side elements are less than arr[0]
            left = mid+1;
        }
        else{
            right=mid;
        }
    }
    return arr[left];
    
}

long long int sqrtInt(int num){
       long long int left = 0,right=num,ans,mid;
        while(left<=right){
            mid = left + (right-left)/2 ;
            if(mid*mid == num){
                return mid;
            }
            else if(mid*mid > num){
                right = mid-1;
            }
            else if(mid*mid < num){
                ans = mid;
                left= mid+1;
            }
        }
        return ans;
    }
    double sqrtFloat(int n , int precision , int intSol){
        double factor = 1;
        double ans = intSol;

        for (int i = 0; i < precision; i++)
        {
            factor/=10;//0.1 , 0.01
            for (double j = ans ; j*j < n; j= j+factor)
            {
              ans = j;
            }
            
        }
        return ans;
    }
    

int main(){

    int arr[8] = { 7,9,12,32,4,5,6,9};
    int  n;
    cout<<"enter n to calculate its square root "; 
    cin>>n;
    cout<<"Pivot elment in the array is =  "<<pivotElement(arr,8)<<endl;
    int intSol =  sqrtInt(n);
    cout<<"Answer is =  "<< sqrtFloat(n,3,intSol);
    return 0;
}   
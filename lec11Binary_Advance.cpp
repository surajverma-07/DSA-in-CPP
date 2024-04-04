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
        if(arr[mid]>= arr[0]){
            //it's denote left side because right side elements are less than arr[0]
            left = mid+1;
        }
        else{
            right=mid;
        }
    }
    return arr[left];
    
}

long long int sqrt(int num){
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
    

int main(){

    int arr[7] = { 7,9,12,2,4,5,6};
    
    // cout<<"Pivot elment in the array is =  "<<pivotElement(arr,7)<<endl;
    cout<<"square root of 16 is  =  "<<sqrt(16);
    return 0;
}
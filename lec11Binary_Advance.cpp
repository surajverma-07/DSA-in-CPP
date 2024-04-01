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

int main(){

    int arr[7] = { 7,9,12,2,4,5,6};
    
    cout<<"Pivot elment in the array is =  "<<pivotElement(arr,7)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

void Binary_Search(int arr[] , int size , int key){
    int left = 0;
    int right = size -1 ;
    int mid;
    while (left<=right)
    {
        mid = (left/2)+(right/2);
        if(key == arr[mid] ){
            cout<<"Key found at position "<<mid;
            break;
        }
        else if(key < arr[mid] ){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
      
}

int main(){
    int even[6] = {12,34,56,68,98,454}; 
    int odd[7] = {12,34,56,68,98,454,999}; 
    Binary_Search(even , 6 , 68);
    cout<<endl;
    Binary_Search(odd , 7 , 34);
}
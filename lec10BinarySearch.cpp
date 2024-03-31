#include<iostream>
using namespace std;

void Binary_Search(int arr[] , int size , int key){
    int left = 0;
    int right = size -1 ;
    int count = 0 ;
    int mid;
    while (left<=right)
    {
        mid = (left/2)+(right/2);
        if(key == arr[mid] ){
            cout<<"Key found at position "<<mid;
            count++;
            break;
        }
        else if(key < arr[mid] ){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
      if(count == 0 ){
        cout<<"Key not found ";
      }
}
// binary serach ends 

// First occurance in sorted array starts
  int firstOccurance(int arr[],int size , int key){
        int left = 0;
    int right = size -1 ;
    int ans = -1 ;
    int mid;
    while (left<=right)
    {
        // cout<<"while \n";
        mid = (left+right)/2;
        // cout<<"mid =  "<<mid<<endl;
        if(key == arr[mid] ){
            // cout<<"key match";
            ans = mid;
            right = mid - 1;
        }
        else if(key < arr[mid] ){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
   
  }
// First occurance in sorted array ends


// last occurance in sorted array starts
  int lastOccurrence(int arr[],int size , int key){
        int left = 0;
    int right = size -1 ;
    int ans = -1 ;
    int mid;
    while (left<=right)
    {
        mid = (left+right)/2;
        if(key == arr[mid] ){
            ans = mid;
            left = mid+1;
        }
        else if(key < arr[mid] ){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
  }

  // Find peak element in Mountain Array
  int peakMount(int arr[] ,int size ){
    int left = 0 ;
    int right = size-1;
    int mid = (left+right)/2;
    while (left < right)
    {
        //when in left side go to right side 
        if(arr[mid]<arr[mid+1]){
            left = mid+1;
        }
        else{
            right = mid;

        }
        mid = (left+right)/2;
    }
    //when search is end left and right in same position which is peak ele.
    return arr[left];
    
  }
int main(){
    int even[6] = {1,3,3,6,6,6}; 
    int odd[7] = {12,34,56,68,98,454,999}; 
    // Binary_Search(even , 6 , 68);
    cout<<endl;
    // Binary_Search(odd , 7 , 34);

    // int index = firstOccurance(even,6,3);
    // cout<<"first occurance of 3 at index =  "<<index;

    // cout<<"last occurance of 3 at index =  "<<lastOccurrence(even,6,6);;

// Pair is collection of two numbers here 2 integers 
    // pair<int,int> p;
    // p.first = 10;
    // p.second = 30;
    // cout<<p.first<<"  and  "<<p.second;

    //total no of occurance of a number 
    int arr[9] = {1,2,2,3,3,6,6,6,6}; 

    // cout<<"6 is repeated  "<< (lastOccurrence(arr,9,6) - firstOccurance(arr,9,6) + 1) <<" no of times \n";

    //Mountain array 0,1,2,3,5,2,1
    /*        5
          3       
        1          1
                     0
    */
   //finding peak element in mountain array 
   /*
     left side -> arr[i] < arr[i+1]   left ko mid+1 
     right side -> arr[i]> arr[i+1] right ko mid-1
     peak ->  arr[i-1] < arr[i](peak) > arr[i+1] right == mid 
   */
  int mount[10] = {1,3,5,7,5,4,3,2,1,0};
  cout<<"Peak element in mountain array is  =  "<<peakMount(mount,10);

}
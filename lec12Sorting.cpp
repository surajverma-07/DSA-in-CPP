// selection sort 
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code 
        for(int i = 0 ; i<n-1;i++){
         int   min = i;
            for(int j=i+1 ; j<n ; j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
           }
           //swap
         swap(arr[i],arr[min]);
       
        }
    
    }


//bubble sort
void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    for(int i=0 ; i<n-1;i++){
        bool isSwap = false;
        for(int j=0 ; j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            break;
        }
    }
}

//Insertion Sort
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1; i<n;i++){
           int j;
            int hold = arr[i];
        for( j=i-1;j>=0;j--){
            if(hold<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
           
        }
        arr[j+1]=hold;
    }
}
#include<iostream>

using namespace std;

// Function with array 
void printArray(int arr[], int size){
    cout<<"Printing array element \n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}
//polymorphysm 
 void printArray(char arr[], int size){
    cout<<"Printing array element \n";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}

// Max and Min in Array 
void max_min (int arr[],int size){
    int max = arr[0],min = arr[0];
  for (int i = 0; i < size-1; i++)
  {
     if (arr[i+1]>max){
        max = arr[i+1];
     }
     if(arr[i+1]<min){
        min = arr[i+1];
     }
  }
  cout<<"max = "<<max<<endl;
  cout<<"min = "<<min<<endl;
  
}

int main(){
//    int arr [] = {12,23,46,86,34,-1,565,9};
//    int size = sizeof(arr)/sizeof(int);
//    printArray(arr,size);
    
//    char str[5] = {'s','u','r','a','j'} ;
//    size = sizeof(arr)/sizeof(int);
//    cout<<"size is "<<size<<endl;
//    printArray(str,size);

 int arr [100];
 int size;
 cout<<"Enter the size of array "<<endl;
 cin>>size;
 for (int i = 0; i < size; i++)
 {
    cout<<"enter a["<<i<<"] =  ";
    cin>>arr[i];
 }
 
   max_min(arr,size); 
}
#include<iostream>

using namespace std;

// Function with array 
void printArray(int arr[], int size){
    cout<<"Printing array element inside function \n";
    // arr[2]= 786;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    // cout<<"going to main ";
    
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

//swaping 
int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
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

//linear search in array 
bool linearSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
       if(key==arr[i]){
        return true;
       }
    }
    return false;
    
}

//Reverse array element
void ReverseArr(int arr[],int size){
    int start,end;
    for ( start = 0, end = size-1; start <= end; start++,end--)
    {
        swap(arr[start],arr[end]);
    }
    
}

//sum of array element
int Sum_ele(int arr[], int size ){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}

//swapping two consucutive element 
void SwapAlter(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        if(i+1 < size){
        swap(arr[i],arr[i+1]);
        i++;
        }
    }
    
}

//Find unique element in array 
void unique_Array(){
    int ans = 0;
    int arr [5] = {1,2,4,1,2};
    for (int i = 0; i < 5; i++)
    {
        ans = ans^arr[i];
        cout<<"\n"<<ans;
    }
    cout<<endl<<"unique element is =  "<<ans;
     
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
 
//    max_min(arr,size); 
   //Predefint max and min function returns maximum element 
//    cout<<max(34,99);

//calling function to print 
printArray(arr,size);
// unlike variable array is paased by reference so result in updation is reflected in main()

// for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
  
// int key;
// cout<<"\nEnter the key to be search in the array  ";
// cin>>key;

// bool res = linearSearch(arr,size,key);
// cout<<(res)?"key is found ":"key not found ";

//Reverse of array
//  ReverseArr(arr,size);
//  printArray(arr,size);

//Sum of array element 
// cout<<"\nSum of the array element =  "<<Sum_ele(arr,size)<<endl;

//Swapping alter element 
// cout<<"\nSwapping alternative element\n";
// SwapAlter(arr,size);
// printArray(arr,size);

//Unique element in array 
//  unique_Array();

}
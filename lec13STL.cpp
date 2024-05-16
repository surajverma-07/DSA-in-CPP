#include<iostream>
using namespace std;

//Array 
#include<array>
int main(){
    array<int,5> arr = {1,2,3,4,5};
    int size = arr.size();
    cout<<"Printing STL Array ...\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }

    cout<<"\nElement at index 2 is =  "<<arr.at(2);
    cout<<"\nEmpty or Not  =  "<<arr.empty();
    cout<<"\nFirst Element =  "<<arr.front();
    cout<<"\nLast Element =  "<<arr.back();

 return 0;   
}
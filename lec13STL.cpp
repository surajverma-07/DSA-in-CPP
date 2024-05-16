#include<iostream>
using namespace std;

//Array 
// #include<array>
//  int main(){
//     array<int,5> arr = {1,2,3,4,5};
//     int size = arr.size();
//     cout<<"\nSize of Array = "<<size; 
//     cout<<"\nElement at index 2 is =  "<<arr.at(2);
//     cout<<"\nEmpty or Not  =  "<<arr.empty();
//     cout<<"\nFirst Element =  "<<arr.front();
//     cout<<"\nLast Element =  "<<arr.back();
//     arr[5]=10;
//     arr[7]=222;


//     cout<<"Printing STL Array ...\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
//     }
//     cout<<"\nSize of Array after inserting element at 5 & 7 index = "<<arr.size(); 
//  return 0;   
// }


//Vector
// #include<vector>
// int main(){
//     vector<int> vec;
//     //Capicity -> memory space assigned to it 
//     //size -> element present into it
//     // vector<int> v1(size,initializeFromHere)
//     //All element are initialised by 1
//     vector<int> v1(5,2.6);
//     //copying one vector(v1 ) into another v2
//     vector<int> v2(v1);
//      cout<<"\nPrint v2 \n";
//     for(int i:v2){
//         cout<<i<<endl;
//     }

//     cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
//     cout<<"size of vector vec is = "<<vec.size()<<endl;
    
//     vec.push_back(10);
//     cout<<"\nAfter inserting 1 element ....\n";
//     cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
//     cout<<"size of vector vec is = "<<vec.size()<<endl;
//     vec.push_back(20);
//     cout<<"\nAfter inserting 2 element ....\n";
//     cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
//     cout<<"size of vector vec is = "<<vec.size()<<endl;
//     vec.push_back(30);
//     cout<<"\nAfter inserting 3 element ....\n";
//     cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
//     cout<<"size of vector vec is = "<<vec.size()<<endl;
//     vec.push_back(40);
//     cout<<"\nAfter inserting 4 element ....\n";
//     cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
//     cout<<"size of vector vec is = "<<vec.size()<<endl;
//     //vector capacity doubles when size is not sufficients to take another element 
//     //bts -> memory space shifted from old to new and copies previous element .
//      cout<<"\nElement at index 2 is =  "<<vec.at(2);
//     cout<<"\nEmpty or Not  =  "<<vec.empty();
//     cout<<"\nFirst Element =  "<<vec.front();
//     cout<<"\nLast Element =  "<<vec.back();

//     //before pop 
//     cout<<"\nBefore pop";
//     for(int i:vec){
//         cout<<i<<endl;
//     }
//     vec.pop_back();
//     cout<<"\nBefore pop";
//     for(int i:vec){
//         cout<<i<<endl;
//     }

//     cout<<"\nbefore clear size ";
//     cout<<"\nsize = " <<vec.size()<<endl;
//     cout<<"\ncapacity = "<<vec.capacity()<<endl;
//     vec.clear();
//     cout<<"\nafter clear size ";
//     cout<<"\nsize = " <<vec.size()<<endl;
//     cout<<"\ncapacity = "<<vec.capacity()<<endl;
//     return 0;
// }


//Dequeue -> Double Ended queue


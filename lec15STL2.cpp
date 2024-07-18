#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"jay shree ram\n";

    // Pair - data structure to store two data as a pair 
    pair<int,int> p = {1,2};
    cout<<"First  :  "<<p.first<<"\nSecond  :  "<<p.second<<endl;
    //nested pair 
    pair<int , pair<int,int>> nested_pair = {1,{2,3}};
    cout<<"Nested First  :  "<<nested_pair.first<<"\nNested Second.first  :  "<<nested_pair.second.first<<endl;
    //Array of pairs 
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<"arr[2].first(5)  =   "<<arr[2].first;

    


}
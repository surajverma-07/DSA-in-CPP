#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> v){
    for(int i : v){
        cout<<i<<"  ";
    }
    cout<<endl;
}
//Reverse Array
/*
vector<int> reverseVector(vector<int> v){
    int size = v.size();
    int n=size-1;
    for (int i = 0; i < (size/2); i++)
    {
        swap(v[i],v[n]);
        n--;
    }
    return v;
    
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(100);
    v.push_back(20);
    v.push_back(40);
    v.push_back(60);

    vector<int> ans = reverseVector(v);
    for(int i : ans){
        cout<<endl<<i<<"  ";
    }
    cout<<endl;
}
https://www.naukri.com/code360/problems/reverse-the-array_1262298?leftPanelTabValue=SUBMISSION
*/

//Merge Sorted Array 
vector<int> mergeArray(vector<int> arr1 , vector<int> arr2){
    int size1 = arr1.size();
    int size2 = arr2.size();
    vector<int> merge(size1+size2);
    int i=0,j=0,k=0;
    while (i<size1 && j<size2)
    {
      if(arr1[i]<arr2[j]){
        merge[k] = arr1[i];
        i++;
        k++;
      }
      else{
        merge[k] = arr2[j];
        j++;
        k++;
      }
    }
    while (i < size1)
    {
        merge[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        merge[k] = arr1[j];
        j++;
        k++;
    }
    return merge;
}

int main(){
    vector<int> v1 ;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);

    vector<int> v_ans = mergeArray(v1,v2);
    printArray(v_ans);

}
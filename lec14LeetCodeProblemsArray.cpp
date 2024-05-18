#include<iostream>
#include<vector>

using namespace std;

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
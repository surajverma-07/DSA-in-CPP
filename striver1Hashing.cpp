#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    string s;
    cout<<"Enter a String \n";
    cin >> s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cout<<"Enter a Number of character to be checked \n";
    cin >> q;
    while (q--) {

        char c;
    cout<<"Enter character to check  \n";

        cin >> c;
        // fetch:
        cout <<"Occurence of "<<c<<" is =  "<< hash[c - 'a'] << endl;
    }
    return 0;
}
*/

//Highest and Lowest Frequency of element 
int main(){
    int arr[]={1,22,323,1,3,5,2,67,8,9,8,8,7,13,541,33,21,22,2,11,0,1,13,0,4,0,5,4,0,67,73,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size =  "<<size<<endl;
    int maxFreq=0,minFreq=size,maxEle=INT_MIN,minEle=INT_MAX;

    map<int,int> mp;
    for(int i = 0;i<size;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        int count = it.second;
        int val = it.first;
        if(count<minFreq){
            minFreq=count;
            minEle=val;
        }
        if(count>maxFreq){
            maxFreq=count;
            maxEle=val;
        }
        cout<<it.first<<"  "<<it.second<<endl;
    }

    cout<<"\nMinimum Frequncry in Array is  "<<minFreq<<" of element "<<minEle;
    cout<<"\nMaximum Frequncry in Array is  "<<maxFreq<<" of element "<<maxEle;

}
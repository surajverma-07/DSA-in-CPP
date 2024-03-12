// 7. Reverse integer 
#include<limits.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int reverse( int x) {
      long int res = 0;
      int count = 0;      

        while( x != 0 ){
               res = (10*res) + (x%10);
               x = x/10;
           }
      
        if(res < INT_MIN || res> INT_MAX || res == 0){
            return 0;
        }
        else{
            return res;
        }
    }
};

int main(){
     Solution rev;
     int num ;
     cout<<"Enter a numbere to reverse ";
     cin>>num;
     cout<<"Reverse of "<<num<<"is  =  " <<rev.reverse(num)<<endl;
}
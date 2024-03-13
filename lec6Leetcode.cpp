#include<limits.h>
#include<iostream>
using namespace std;


// 7. Reverse integer 

// class Solution {
// public:
//     int reverse( int x) {
//       long int res = 0;
//       int count = 0;      

//         while( x != 0 ){
//                res = (10*res) + (x%10);
//                x = x/10;
//            }
      
//         if(res < INT_MIN || res> INT_MAX || res == 0){
//             return 0;
//         }
//         else{
//             return res;
//         }
//     }
// };

// int main(){
//      Solution rev;
//      int num ;
//      cout<<"Enter a numbere to reverse ";
//      cin>>num;
//      cout<<"Reverse of "<<num<<"is  =  " <<rev.reverse(num)<<endl;
// }



// 1009 Compliment of base 10 integer 
//Problem n = 5 = 101 result should be 2(010)
// Approach ~n & mask = 111111.....1010 & 000000....111
//mask? => take mask = 0000.......0 <<(leftshift) and (mask|1) -> 00000000......1 
// do untill 000000......111 (1 is counted)

class Solution {
public:
    int bitwiseComplement(int n) {
      //edge/exception case 
        if(n==0){
            return 1;
        }
        int mask = 0;
        int n1 = n;
        
        while(n1 != 0 ){
            n1 = n1 >> 1;
            mask = mask << 1;
            mask |= 1;
        }

        return ((~n)&(mask));

    }
};
int main(){
 
    int n ; 
    cout<<"Enter a number ";
    cin>>n;
    Solution obj;
  cout<<"Reverse in binary form is  =  "<<  obj.bitwiseComplement(n)<<endl;
    return 0;
}


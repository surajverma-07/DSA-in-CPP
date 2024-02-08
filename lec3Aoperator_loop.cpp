#include<iostream>
using namespace std;

int main() {
    int a = 4 , b=6;
    //logical operator
    cout<<"a&b = "<< (a&b)<<endl;
    cout<<"a|b = "<< (a|b)<<endl;
    cout<<"~a = "<< (~a)<<endl;
    cout<<"a^b = "<< (a^b)<<endl;
   
   //Bitwise operator
    cout<<"17>>1  =  "<<(17>>1)<<endl;
    cout<<"17>>2  =  "<<(17>>2)<<endl;
    cout<<"19<<1  =  "<<(19<<1)<<endl;
    cout<<"21<<2  =  "<<(21<<2)<<endl;

    int i =7;
    cout<<++i<<endl;//print 8
    cout<<i++<<endl;//i=9 but print 8
    cout<<--i<<endl;// i=8 print 8
    cout<<i--<<endl;//print 8 but i = 7
    cout<<i<<"\n";

    //que1
    // int p,q=1;
    // p = 10;
    // if(++p)//true
    //    cout<<q;
    // else 
    //    cout<<++q;
    
    //que2
    int p=1,q=2;
    // if(p-- > 0 && ++q > 2)
    // {
    //     cout<<"Stage 1 - Inside If";
    // }else{
    //     cout<<"Stage 2 - Inside else";
    // }
    // cout<<p<<" "<<q<<endl;

    cout<< (25 *(++q));
   
}
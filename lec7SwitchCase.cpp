#include<iostream>
using namespace std;

int main(){
    char ch='1';
    int num=1;

  cout<<endl;
  //Nested Switch case 
  switch (ch)
  {
  case '3':
     cout<<"character 3 \n";
    break;
  case '2':
     cout<<"character 2 \n";
    break;
  case '1':
      cout<<"character 1 \n";
       switch(num){
        case 1:
           cout<<"Num is 1"<<endl;
       }
    break;
  
  default:
       cout<<'kuch ni ';
    break;
  }
}
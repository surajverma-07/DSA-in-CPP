#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    char ch='1';
    int num=1;

  cout<<endl;

  //Nested Switch case 
//   switch (ch)
//   {
//   case '3':
//      cout<<"character 3 \n";
//     break;
//   case '2':
//      cout<<"character 2 \n";
//     break;
//   case '1':
//       cout<<"character 1 \n";
//        switch(num){
//         case 1:
//            cout<<"Num is 1"<<endl;
//        }
//     break;
  
//   default:
//        cout<<'kuch ni ';
//     break;
//   }
  

  //Homework infinte loop and within it we have switch case how to tackle ?
//   while(1){
//     switch (num)
//     {
//     case 1:
//         cout<<"Case 1 Matched ";
//         break;
    
//     default:
//         break;
//     }
//     exit(0);
//   }

  //Continue in Switch case not valid 
//   switch (num)
//   {
//   case 1:
//     cout<<"case1 running..\n";
//     continue;
//     // Through Error because Switch case is conditional statement and continue; is only 
//     // used in loops 
//   case 2:
//     cout<<"case 2 \n";
//   default:
//     cout<<"default case ";
//     break;
//   }

//Calculator 
  int a ,b,ope;
  cout<<"Enter a and b    ";
  cin>>a>>b;
 
  cout<<"Enter operation to perform " 
       <<" 1. sum "
       <<" 2. substraction"
       <<" 3. multiplication"
       <<" 4. division"
        <<"5. modulas "<<endl;
  cin>>ope;

   switch (ope)
   {
   case 1:
      cout<<a<<" + "<<b<<" is = "<<a+b<<endl;
    break;
   case 2:
      cout<<a<<" - "<<b<<" is = "<<a-b<<endl;
    break;
   case 3:
      cout<<a<<" * "<<b<<" is = "<<a*b<<endl;
    break;
   case 4:
   {
      cout<<a<<" / "<<b<<" is = "<<a/b<<endl;
   }
    break;
   case 5:
      cout<<a<<" % "<<b<<" is = "<<a%b<<endl;
    break;
   
   default:
     cout<<"\n Enter a valid Operation \n ";
    break;
   }      

}
#include<iostream> 

using namespace std;

int main()
{
   int i =0,j=0,n;
   cin>>n;
   //pattern
   /*
   1 2 3 4 
   1 2 3 4 
   1 2 3 4 
   1 2 3 4 
   */
//    i = 0;
//    while(i<n)   
//    {
//       j = 0;
//     while (j<n)
//     {
//         cout<<j+1<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
    
//    } 


   //pattern 2
   /*
    4 3 2 1 
    4 3 2 1 
    4 3 2 1 
    4 3 2 1 
   */
//    i = 0;
//    while(i<n)   
//    {
//       j = 0;
//     while (j<n)
//     {
//         cout<<n-j<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
    
//    } 

   //pattern 3 
   /*
     1 2 3
     4 5 6
     7 8 9
   */
//   int m=1;
//    while (i<n)
//    {
//       j = 0;
//      while (j<n)
//      {
//         cout<<m<<" ";    
//         j++;
//         m++;
//      }
//      cout<<endl;
//      i++;
//    }

 // pattern 4 
 /*
    *
    * *
    * * *
    * * * *
 */

//  for ( i = 0; i < n; i++)
//  {
//     for ( j = 0; j <= i; j++)
//     {
//        cout<<"* ";
//     }
//     cout<<"\n";
    
//  }
 

 // pattern 5
 /*
    1
    2 2
    3 3 3
    4 4 4 4 
 */

//  for ( i = 0; i < n; i++)
//  {
//     for ( j = 0; j <= i; j++)
//     {
//        cout<<i+1<<" ";
//     }
//     cout<<"\n";
    
//  }

 // pattern 
 /*
    1
    2 3
    4 5 6 
    7 8 9 10 
 */
//   int m = 1;
//  for ( i = 0; i < n; i++)
//  {
//     for ( j = 0; j <= i; j++)
//     {
//        cout<<m<<" ";
//        m++;
//     }
//     cout<<"\n";
    
//  }


 // pattern 
 /*
    1
    2 3
    4 5 6 
    7 8 9 10 
 */
//  for ( i = 0; i < n; i++)
//  {
//   int m = i+1;
//     for ( j = 0; j <= i; j++)
//     {
//        cout<<m<<" ";
//        m++;
//     }
//     cout<<"\n";
    
//  }
//  for ( i = 1; i <=  n ; i++ )
//  {
    
//     for ( j = i; j <  i*2; j++)
//     {
//        cout<<j<<" ";
//     }
//     cout<<"\n";
//  }
 
//  pattern 
/*
   1
   2 1
   3 2 1 
   4 3 2 1 

*/
// for(i=1;i<=n;i++)
// {
//     for (j=i;j>=1;j--)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
    
// }

//pattern 
/*
 A A A A 
 B B B B 
 C C C C
 D D D D
 */
// char ch = 'A';
// for(i=1;i<=n;i++)
// {
//     for (j=1;j<=n;j++)
//     {
//         cout<<ch<<" ";
//     }
//     ch++;
//     cout<<endl;
    
// }

// for(i=1;i<=n;i++)
// {
//     for (j=1;j<=n;j++)
//     {
//         // typecasting
//         cout<<char(65+i-1)<<" ";
//     }
  
//     cout<<endl;
    
// }
  
   
//pattern 
/*
 A B C 
 A B C 
 A B C 
 */
// char ch = 'A';
// for(i=1;i<=n;i++)
// {
//     for (j=1;j<=n;j++)
//     {
//         cout<<char(65+j-1)<<" ";
//     }
// //     ch++;
//     cout<<endl;
// }

//pattern 3 
   /*
      A B C
      D E F
      G H I
   */
    // char m='A';
    // while (i<n)
    // {
    //    j = 0;
    //   while (j<n)
    //   {
    //      cout<<m<<" ";    
    //      j++;
    //      m++;
    //   }
    //   cout<<endl;
    //   i++;
    // }

//   Pattern 
  /*
    A B C 
    B C D 
    C D E
  */
//  for (i=1 ; i<= n ; i++)
//  {
//     char ch = 65+i-1;
//     for(j=1 ; j<= n ; j++)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
//  }

//  pattern 
/*
  A
  B B 
  C C C 
*/
// for ( i = 0; i < n; i++)
//   {
    
//     for ( j = 0; j <= i; j++)
//      {
//         cout<<char('A'+i)<<" ";
//      }
//      cout<<"\n";
//   }

//   pattern 
/*
  A
  B C 
  D E F 
  G H I J
*/
//  char ch = 'A';
// for ( i = 0; i < n; i++)
//   {
    
//     for ( j = 0; j <= i; j++)
//      {
//         cout<<ch<<" ";
//         ch++;
//      }
//      cout<<"\n";
    
//   }

// pattern
/*
  A
  B C
  C D E 
  D E F G
*/
//  char ch ;
// for ( i = 0; i < n; i++)
//   {
//     ch = 65+i;
//     for ( j = 0; j <= i; j++)
//      {
//         cout<<ch<<" ";
//         ch++;
//      }
//      cout<<"\n";
    
//   }


// pattern
/*
  D
  C D 
  B C D
  A B C D
*/
//  char ch ;
// for ( i = 0; i < n; i++)
//   {
//     ch = 64+n-i;
//     for ( j = 0; j <= i; j++)
//      {
//         cout<<ch<<" ";
//         ch++;
//      }
//      cout<<"\n";
    
//   }

// pattern
/*
                 *
              *  *
           *  *  *
        *  *  *  *
*/
//   i=1;
//    while(i <= n)
//    {
//       j = 1;
//       while ( j <=  n )
//       {
//          if (j <= (n-i))
//          {
//             cout<<"  ";
//          }
//          else{
//             cout<<"* ";
//          }
//          j++;
//       }
//       i++;
//       cout<<"\n";
      
//    }

   // pattern
   /*
       *  *  *  * 
       *  *  *
       *  * 
       * 
   */


//   for(i=1 ; i<=n ;i++)
//   {
//      for(j=0 ; j<= n-i ; j++)
//      {
//        cout<<"* ";
//      }
//      cout<<endl;
//   }

//pattern 
/*
    *  *  *  * 
       *  *  * 
          *  *
             *  
*/

//   for(i=0 ; i < n ; i++)
//   {
//    for(j = 1 ; j <= n ; j++)
//    {
//       if(j<=i)
//       cout<<"  ";
//       else
//       cout<<"* ";
      
//    }
//    cout<<endl;
//   }

// pattern
/*
    1  1  1  1
       2  2  2
          3  3 
             4
*/


//   for(i = 0 ; i < n ; i++)
//   {
//    for(j = 1 ; j <= n ; j++)
//    {
//       if(j<=i)
//       cout<<"  ";
//       else
//       cout<<i+1<<" ";
      
//    }
//    cout<<endl;
//   }

//   pattern 
/*
               1
             2 2
           3 3 3
         4 4 4 4      
*/
//  for (i = 0 ; i < n ; i++)
//  {
//    for(j = 0 ; j < n ; j++)
//    {
//       if (j < n-i-1)
//       {
//          cout<<"  ";
//       }
//       else 
//       cout<<i+1<<" ";
//    }
//    cout<<"\n";
//  }

// pattern
/*
     1 2 3 4 
       2 3 4 
         3 4 
           4
*/

// for ( i = 0; i < n; i++)
// {
// for ( j = 0; j < n; j++)
// {
//    if(j < i )
//    {
//       cout<<"  ";
//    }
//    else
//    {
//       cout<<j+1<<" ";
//    }
// }
// cout<<"\n";
   
// }

// pattern
/*
           1
         2 3
       4 5 6
     7 8 9 10  
*/
//   int  m = 1;
//    for(i=0 ; i< n ; i++)
//    {
//       for(j=0 ; j< n ; j++)
//       {
//          if (j < n-i-1)
//          {
//             cout<<"  ";
//          }
//          else 
//          {
//          cout<<m<<" ";
//          m++;
//          }
//       }
//       cout<<"\n";
//    }


// pattern
/*
                    1
                 1  2  1
              1  2  3  2  1
           1  2  3  4  3  2  1        
*/
   // for(i=0 ; i< n ; i++)
   // {
   //       int m = 1;
   //    for(j=0 ; j< n ; j++)
   //    {
   //       if (j < n-i-1)
   //       {
   //          cout<<"  ";
   //       }
   //       else 
   //       {
   //         cout<<m<<" ";
   //          m++;
   //       }
   //    }
   //    int third = i;
   //    for(j = 0 ; j< i ; j++)
   //    {
   //       cout<<third<<" ";
   //       third--;
   //    }
   //    cout<<"\n";
   // }


   //Baap Pattern
   /*
      1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1
   */
  for(i=1; i<= n ; i++)
  {
    for(j = 1 ; j <= n ; j++ )
    {
      if(j <= n-i+1)
      {
         cout<<j<<" ";
      }
      else{
         cout<<"* ";
      }
    }
    for(j = n ; j >= 1 ; j-- )
    {
      if(j <= n-i+1)
      {
         cout<<j<<" ";
      }
      else{
         cout<<"* ";
      }
    }
       cout<<endl;
  }
  return 0;
}
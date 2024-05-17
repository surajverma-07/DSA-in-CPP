#include<iostream>
using namespace std;

//Array 
/*
#include<array>
 int main(){
    array<int,5> arr = {1,2,3,4,5};
    int size = arr.size();
    cout<<"\nSize of Array = "<<size; 
    cout<<"\nElement at index 2 is =  "<<arr.at(2);
    cout<<"\nEmpty or Not  =  "<<arr.empty();
    cout<<"\nFirst Element =  "<<arr.front();
    cout<<"\nLast Element =  "<<arr.back();
    arr[5]=10;
    arr[7]=222;


    cout<<"Printing STL Array ...\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    cout<<"\nSize of Array after inserting element at 5 & 7 index = "<<arr.size(); 
 return 0;   
}
*/

//Vector
/*
#include<vector>
int main(){
    vector<int> vec;
    //Capicity -> memory space assigned to it 
    //size -> element present into it
    // vector<int> v1(size,initializeFromHere)
    //All element are initialised by 1
    vector<int> v1(5,2.6);
    //copying one vector(v1 ) into another v2
    vector<int> v2(v1);
     cout<<"\nPrint v2 \n";
    for(int i:v2){
        cout<<i<<endl;
    }

    cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
    cout<<"size of vector vec is = "<<vec.size()<<endl;
    
    vec.push_back(10);
    cout<<"\nAfter inserting 1 element ....\n";
    cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
    cout<<"size of vector vec is = "<<vec.size()<<endl;
    vec.push_back(20);
    cout<<"\nAfter inserting 2 element ....\n";
    cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
    cout<<"size of vector vec is = "<<vec.size()<<endl;
    vec.push_back(30);
    cout<<"\nAfter inserting 3 element ....\n";
    cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
    cout<<"size of vector vec is = "<<vec.size()<<endl;
    vec.push_back(40);
    cout<<"\nAfter inserting 4 element ....\n";
    cout<<"capacity of vector vec is = "<<vec.capacity()<<endl;
    cout<<"size of vector vec is = "<<vec.size()<<endl;
    //vector capacity doubles when size is not sufficients to take another element 
    //bts -> memory space shifted from old to new and copies previous element .
     cout<<"\nElement at index 2 is =  "<<vec.at(2);
    cout<<"\nEmpty or Not  =  "<<vec.empty();
    cout<<"\nFirst Element =  "<<vec.front();
    cout<<"\nLast Element =  "<<vec.back();

    //before pop 
    cout<<"\nBefore pop";
    for(int i:vec){
        cout<<i<<endl;
    }
    vec.pop_back();
    cout<<"\nBefore pop";
    for(int i:vec){
        cout<<i<<endl;
    }

    cout<<"\nbefore clear size ";
    cout<<"\nsize = " <<vec.size()<<endl;
    cout<<"\ncapacity = "<<vec.capacity()<<endl;
    vec.clear();
    cout<<"\nafter clear size ";
    cout<<"\nsize = " <<vec.size()<<endl;
    cout<<"\ncapacity = "<<vec.capacity()<<endl;
    return 0;
}
*/

//Deque -> Double Ended queue

/*
 #include<deque>
int main(){

deque<int> d;
d.push_back(77);
d.push_front(99);

cout<<"Printing Deque d\n";
for(int i:d){
    cout<<i<<endl;
}
cout<<"\n1st index at deque "<<d.at(1);
cout<<"\nfirst element "<<d.front();
cout<<"\nlast element "<<d.back();

d.push_back(20);
d.push_back(50);
d.push_back(40);

cout<<"Printing Deque d\n";
for(int i:d){
    cout<<i<<endl;
}
// d.erase(range)
d.erase(d.begin(),d.begin()+2);
cout<<"Printing Deque d after erase \n";
for(int i:d){
    cout<<i<<endl;
}

d.pop_back();
cout<<"after pop_back()\n";
for(int i:d){
    cout<<i<<endl;
}

d.pop_front();
cout<<"after pop_front()\n";
for(int i:d){
    cout<<i<<endl;
}
}
*/

// List 
/*
#include<list>
int main(){
    list<int> l;
    //to initialise all element by same no.
    list<int> l2(5,20);
    //to copy one list into another 
    list<int> l3(l2);
    l.push_front(20);
    l.push_front(10);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    // printing list l
    cout<<"\nList l"<<endl;
    for(int i : l ){
        cout<<i<<"  ";
    }
    cout<<endl;
    // printing list l2
    cout<<"\nList l2"<<endl;
    for(int i : l2 ){
        cout<<i<<"  ";
    }
    cout<<endl;
    // printing list l3
    cout<<"\nList l2"<<endl;
    for(int i : l3 ){
        cout<<i<<"  ";
    }
    cout<<endl;

    l.erase(l.begin());
    l.pop_back();
    cout<<"\nPrinting after erase and popback operation \n";
    for(int i: l){
        cout<<i<<"  ";
    }
    cout<<endl;
    cout<<endl<<"size of list is = "<<l.size();

}
*/

//stack
/*
#include<stack>

int main(){

   stack<string> s;
   s.push("Suraj");
   s.push("kumar");
   s.push("Verma");
   cout<<"\nTop Element -> "<<s.top()<<endl;
   s.pop();
   cout<<"Top Element after pop 1 element -> "<<s.top()<<endl;
   cout<<"Size of Stack -> "<<s.size()<<endl;
   cout<<"Is stack is empty -> "<<s.empty()<<endl;
   //printing all the element 

   cout<<endl;

    return 0;
}
*/

// queue
/*
#include<queue>

int main(){
 
    queue<string>  q;
     q.push("Suraj");
   q.push("kumar");
   q.push("Verma");
   cout<<"\nFirst Element -> "<<q.front()<<endl;
   q.pop();
   cout<<"First Element after pop 1 element -> "<<q.front()<<endl;
   cout<<"Size of Stack -> "<<q.size()<<endl;
   cout<<"Is stack is empty -> "<<q.empty()<<endl;

    return 0;
}
*/

// Priourity Queue
#include<queue>

int main(){
    //max heap in priority queue
    priority_queue<int> maxi;
    maxi.push(3);
    maxi.push(21);
    maxi.push(-8);
    maxi.push(323);
    cout<<"Size of maxi queue is -> "<<maxi.size()<<endl;
    int size = maxi.size();
    for(int i=0; i<size;i++){
        cout<<maxi.top()<<"  ";
        maxi.pop();

    }
    cout<<endl;
    //min heap in priority queue
    priority_queue<int, vector<int>,greater<int>> mini;
    mini.push(3);
    mini.push(21);
    mini.push(-8);
    mini.push(323);
    cout<<"Size of mini queue is -> "<<mini.size()<<endl;
    int n = mini.size();
    for(int i=0; i<n;i++){
        cout<<mini.top()<<"  ";
        mini.pop();
    }
    cout<<endl;
}

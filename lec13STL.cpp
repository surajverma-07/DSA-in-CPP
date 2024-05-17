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
/*
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
*/

//set 
/*
#include<set>

int main(){

    set<int> s;
    //element can't be repeted in the set 
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(398);
    s.insert(686);
    s.insert(-4);
    s.insert(3);
    s.insert(8);
    for(int i:s){
        cout<<i<<"  ";
    }
    cout<<endl;


    s.erase(s.begin());
    for(auto i : s ){
        cout<<i<<"  ";
    }
    cout<<endl; 
    cout<<"is 10 present -> "<<s.count(10)<<endl;
    cout<<"is 0 present -> "<<s.count(0)<<endl;
    cout<<"is set s is empty -> "<<s.empty()<<endl;
    set<int>::iterator it = s.begin();
    set<int>::iterator itr = s.find(3);
    cout<<"Value present at itr is -> "<<*itr<<endl;
    for(auto it = itr ; it!=s.end();it++){
        cout<<*it<<"  ";
    }
    cout<<endl;
    return 0; 
}
*/

//map
/*
#include<map>
int main(){
   map<int,string> m;
//    m[key] = "value"
m[1] = "Suraj ";
m.insert({7,"Thala for a Reason"});
m[2] = "Kumar ";
m[3] = "Verma ";

for(auto i:m){
    cout<<i.first<<"  ";
    cout<<i.second<<endl;
}
// cout<<"Erasing 2  \n";
// m.erase(2);
cout<<"Finding 12 -> "<<m.count(12)<<endl;
cout<<"After Erase \n";
for(auto i:m){
    cout<<i.first<<"  ";
    cout<<i.second<<endl;
}
auto it = m.find(2);
for(auto i= it;i!= m.end();i++){
    cout<<(*i).first<<"  ";
}
cout<<endl;

    return 0;
}
*/

//Algorithms 
#include<algorithm>
#include<vector>
int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(88);
    v1.push_back(99);
    cout<<"binary search 99 -> "<<binary_search(v1.begin(),v1.end(),99)<<endl;
    min(a,b);
    max(a,b);
    reverse(from,to);
    rotate(from,to);
    sort(start,end);
    
}
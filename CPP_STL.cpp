// STL= " Standarf Template Library"
/* It consistes of:-
Containers--> vector, list, set, map, stack, queue, deque, priority queue + more
// (vector,list,deque)-- sequence containers--Data stored in sequence
// (stack,queue,priorityqueue,map,set)-- unsequential containers--Data stored in any sequence
Algorithms--> reverse, sort, min/max + more
Iterators-->.begin(), .end()
Functions-->size() , insert(), pussh_back() +more
*/

// Understanding Containers
#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>

int main(){

    // 1).VECTORS

    /*
    vector<int>vec;
    vec.push_back(10);vec.push_back(26);vec.push_back(52);vec.push_back(100);
    // OR vec.emplace_back(10);vec.emplace_back(26);vec.emplace_back(52);vec.emplace_back(100);
    // OR vector<int>vec = {10,26,52,100}

    cout<<"Vector Elements:"<<endl;
    for(int val : vec)
    {
        cout<<val<<" "; // 10 26 52 100
    }
    cout<<endl;

    cout<<"Total elements:"<<vec.size()<<endl;
    cout<<"Capacity of Vector:"<<vec.capacity()<<endl;
    cout<<"Extracting element:"<<vec.at(3)<<" or "<<vec[2]<<endl;

    vec.erase(vec.begin()+1,vec.end()-1); // Delete 26 and 52
    for(int val : vec)
    {
        cout<<val<<" "; //  10 100
    }
    cout<<endl;

    vec.insert(vec.begin()+1,12); // vec.insert(index,value) 10 12 100
     for(int val : vec)
    {
        cout<<val<<" "; //  10 12 100
    }
    cout<<endl;

    cout<<"-----After Deletion:-----"<<endl; // 10 12 100
    vec.pop_back();
    vec.pop_back();
    cout<<"Total elements after deletion:"<<vec.size()<<endl;
    cout<<"Capacity of Vector:"<<vec.capacity()<<endl; // capacity remain same size changes
    for(int val : vec)
    {
        cout<<val<<" "; // 10 
    }
    cout<<endl;
    */

    // 2).LISTS -> Implemented using doubly linked list front and back functions

    /*
    list<int>l;
    l.push_back(10);l.push_back(20);l.push_back(12); // insert elements at last
    l.push_front(1),l.push_front(55); // push data from front

    cout<<"List elements: ";
    for(int val : l){
        cout<<val<<" "; // 55 1 10 20 12
    }
    cout<<endl;
    cout<<"Size of List: "<<l.size()<<endl;

    cout<<"-----Deleting elements:-----"<<endl;
    l.pop_back(); // removes 12
    l.pop_front(); // removes 55

    for(int val : l){
        cout<<val<<" "; // 1 10 20 
    }
    cout<<endl;
    */

    // 3).DEQUE -> Implemented using Dynamic array's, same operations as list but main difference b/w list and deque:
    // deque--random access possible dq[] valid whereas list-- not randomly accessed l[] not valid

    /*
    int i;

    deque<char>dq;
    dq.push_back('a');dq.push_back('b');dq.push_back('g'); // insert elements at last
    dq.push_front('z'),dq.push_front('f'); // push data from front

    cout<<"Deque elements: ";
    for(char val : dq){
        cout<<val<<" "; // f z a b g
    }
    cout<<endl;
    cout<<"Size of Deque: "<<dq.size()<<endl;

    cout<<"-----Deleting elements:-----"<<endl;
    dq.pop_back(); // removes g
    dq.pop_front(); // removes f
    
    for(char val : dq){
        cout<<val<<" "; // z a b
    }
    cout<<endl;
    cout<<"Enter the index position to extract:";
    cin>>i;

    if(i<=dq.size()){ // i is a valid position
    cout<<"Extracting element at index i: "<<dq[i]<<endl; // not possible in list 
    }
    else{
        cout<<"Index Out of Bound!"<<endl;
    }
    */

    //4). STACK-"LIFO"--Last In First Out Principal
    //Elements can inserted and removed from one end only i.e from top. Here we have s.top()

    /*
    stack<int>s;
    s.push(25); s.push(35); s.push(7); s.push(3); s.push(87);
    cout<<s.empty()<<endl; // 0 means false
    cout<<"Top element:"<<s.top()<<endl; 
    cout<<"Stack Elements:";

    // for(int val : s){  Creates an error as stack in cpp are not iterable 
    //     cout<<val<<" ";
    // }  
    // cout<<endl;

    while(!s.empty()){

        cout<<s.top()<<" ";
        s.pop(); // read and pop(always top element removed in stack)
    }
    cout<<endl;
    */

    //5). Queue-"FIFO"--First In First Out Principal
    //Elements can be inserted and removed from different ends: insertion(rear end) amd deletion(front end). Here we have q.front()


    /*
    queue<int>q;
    q.push(25); q.push(35); q.push(7); q.push(3); q.push(87); // 25 35 7 3 87
    cout<<q.empty()<<endl; // 0 means false
    cout<<"Front element:"<<q.front()<<endl; 
    cout<<"Queue Elements:";

    // for(int val : s){ Creates an error as queue in cpp are not iterable 
    //     cout<<val<<" ";
    // }  
    // cout<<endl;

    while(!q.empty()){

        cout<<q.front()<<" ";
        q.pop(); // pop(always starting delete in queue)
    }
    cout<<endl;
    */

    //6). MAP -- data stored in key-value pairs and unique keys are there, by default sorted order data

    /*
    map<string,int>m;
    // inserting and updating method
    m["Saatvik"]=98; // or m.insert({"Saatvik",98}); or m.emplace("Saatvik",98)
    m["Ram"]=89;
    m["Shyam"]=90;
    m.insert({"Kavya",78});
    m.emplace("Ramu",56);

    cout<<m.count("Saatvik")<<endl;
    cout<<"Map elements in pairs:"<<endl;

    for(auto p : m){ // auto is short abbreviation for pair<sting,int>p
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"Size of map: "<<m.size()<<endl;

    cout<<"Map elements after deletion: "<<endl;
      m.erase("Ramu");
    for(auto p : m){ // auto is short abbreviation for pair<sting,int>p
        cout<<p.first<<" "<<p.second<<endl; 
    }
    */

    //7). SET -- unique values in sorted order

    /*
    set<int>s;
    // inserting and updating method
    s.insert(12);s.insert(99);s.insert(87);s.insert(12);
    // or s.emplace(12)-----
    cout<<"Set elements:"<<endl;

    for(int val  : s){ 
        cout<<val<<" "; // 12 87 99 second 12 ignored as unique values
    }
    cout<<endl;
    cout<<"Size of Set: "<<s.size()<<endl;

    cout<<"Set elements after deletion: "<<endl;
    s.erase(87);
    for(int val : s){ 
        cout<<val<<" ";
    }
    cout<<endl;
    */
    return 0;

}
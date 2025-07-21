#include<bits/stdc++.h>
using namespace std;

int main(){


    // Arrays
    cout << " ----------------Arrays------------------" << endl;
    int basicArray[3] = {1,2,3};
    
    array<int,4> a = {1,2,3,4}; // Static array
    int size = a.size();

    for( int i = 0; i <size; i++){
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index: " << a.at(2) << endl;
    cout << "Empty or not : "<< a.empty() << endl;
    cout << "Front element : "<< a.front() << endl;
    cout << "Back element : " << a.back() << endl;







    cout << "----------------Vector-----------------" << endl;
    
    vector<int> defined = {1,2,3,4,5};
    for( int i = 0; i < defined.size(); i++){
        cout << defined[i] << " ";
    }
    cout << endl;

    cout << "- Difference in size and capacity : " << endl;
    vector<int> v;
    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    v.push_back(2);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    v.push_back(4);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    v.push_back(5);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;
    

    cout << "- Inserting the elements : " << endl;

    vector<char> ve = { 'a', 'f', 'g'};
    ve.push_back('z');// Complexity : 1
    ve.insert(ve.begin() + 1, 'c');// Complexity : n
    for( int i = 0; i < ve.size(); i++){
        cout << ve[i] << " ";
    }
    cout << endl;


    cout << "Accessing and updating the elements : " << endl;
    cout << ve[2] << endl;
    cout << ve.at(3) << endl;
    for( int i = 0; i < ve.size(); i++){
        cout << ve[i] << " ";
    }
    cout << endl;
    ve[2] = 'O';
    ve.at(3) = 'M';
    cout << ve[2] << endl;
    cout << ve.at(3) << endl;
    for( int i = 0; i < ve.size(); i++){
        cout << ve[i] << " ";
    }
    cout << endl;


    cout << " ----------Deleting the elements----" << endl;

    ve.pop_back();// deleted the last element
    for( int i = 0; i < ve.size(); i++){
        cout << ve[i] << " ";
    }
    cout << endl;

    cout << " ---------Important----------"<< endl;

    vector<int> vec;
    vec.push_back(1);
    for( int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.push_back(2);
    for( int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.push_back(3);
    for( int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    vec.pop_back();
    for( int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Size is : " << vec.size() << endl;
    cout << "Empty ? : " << vec.empty() << endl;
    cout << "Element at 0 Index : " << vec[0] << endl;
    cout << "Element at 1 Index : " << vec.at(1) << endl;
    cout << "Front element of the vector : " << vec.front() << endl;
    cout << "Back element of the vector : " << vec.back() << endl;

    cout << "Iterator : " << *(v.begin())  << endl;



    cout << " ----------Deque----------" << endl;


    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(5);
    d.push_back(6);
    d.push_front(7);

    for( int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    d.erase(d.begin(), d.begin() + 1);

    for( int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "Front is : " << d.front() << endl;
    cout << "Back is : " << d.back() << endl;
    cout << "Empty or not : " << d.empty() << endl;



    cout << " ---------Stack-----------" << endl;
    stack<string> s;
    s.push("Om");
    s.push("Singh");
    s.push("Rizzistor");

    cout << "Top Element --> " << s.top() << endl;
    s.pop();
    cout << "Top Element after pop ---> " << s.top() << endl;
    cout << "Size of the stack " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;

    cout << " ---------Queue---------" << endl;

    queue<string> q;
    q.push("Om");
    q.push("Singh");
    q.push("Rizzistor");

    cout << "Size is : " << q.size() << endl;
    cout << "First element : " << q.front() << endl;
    q.pop();
    cout << "First element : " << q.front() << endl;
    cout << "Last element : " << q.back() << endl;
    cout << "List is empty ? : " << q.empty() << endl;

    cout << " -----------Priority Queue ----------" << endl;

    // max heap
    priority_queue<int> maxi;
    
    // min heap
    priority_queue<int,vector<int>,greater<int> > mini;

    maxi.push(1);
    maxi.push(5);
    maxi.push(7);
    maxi.push(4);
    cout << "Size is : " << maxi.size() << endl;
    int n = maxi.size();
    for( int i = 0; i < n; i++){
        cout << maxi.top() <<" ";
        maxi.pop(); // Pops out maximum of all.
    }   
    cout << endl;

    mini.push(5);
    mini.push(4);
    mini.push(13);
    mini.push(11);
    mini.push(12);
    cout << "Size is : " << mini.size() << endl;
    int len = mini.size();
    for( int i = 0; i < len; i++){
        cout << mini.top() <<" ";
        mini.pop(); // Pops out minimum of all
    }
    cout << endl;


    cout << "-----------Set---------- " << endl;
    // contains only unique elements and come out in sorted order, unordered set element comes in random order
    

    set<int> set;
    set.insert(5);
    set.insert(5);
    set.insert(3);
    set.insert(4);
    set.insert(4);

    int set_size = set.size();

    for (auto it = set.begin(); it != set.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    cout << "---------Map--------------" << endl;
    map<int,string> m;
    m[1] = "Om";
    m[2] = "Singh";
    m[3] = "Rizzistor";
    m.insert({4,"Hello"});

    cout << endl;

    cout << " ----------Algorithms -----------" << endl;

    // max(a,b);
    // min(a.b);
    // swap(a,b);
    // reverse(s.begin(),s.end())
    // binary_search(v.begin(),v.end(),element)
    // sort(v.begin(),v.end())  Uses Intersort





    
    return 0;
}




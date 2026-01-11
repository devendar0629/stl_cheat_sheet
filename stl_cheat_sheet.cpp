#include <iostream>
#include <vector> // for vector
#include <set> // for set
#include <unordered_set> // for unordered_set
#include <unordered_map> // for unordered_map
#include <map> // for map
#include <queue> // for queue and priority_queue
#include <stack> // for stack

int main() {
    using std::string;
    using std::vector;
    using std::stack;
    using std::queue;
    using std::set;
    using std::map;
    using std::unordered_set;
    using std::unordered_map;
    using std::priority_queue;
    using std::deque;

    /*
        * STL Containers:

        * 1) Stack
        * 2) Queue
        * 3) Unordered Set
        * 4) Set
        * 5) Unordered Map
        * 6) Map
        * 7) Priority Queue
        * 8) Deque
        * 9) Vector
        * 10) String
    */


    // ---------------- 1) STACK -----------------


    stack<int> st; // LIFO container

    st.push(1); // pushes value to stack top
    st.top(); // returns the top element without removing it
    st.pop(); // pops the top element
    st.empty(); // returns true if stack is empty, false otherwise

    st.size(); // returns stack size


    // ---------------- 2) QUEUE -----------------


    queue<int> q; // FIFO container

    q.push(1); // pushes element to the last
    q.front(); // returns the front element
    q.pop(); // pops the front element
    q.empty(); // returns true if queue is empty, false otherwise

    q.size(); // returns queue size


    // ---------------- 3) UNORDERED SET -----------------


    unordered_set<int> u_set; // Elements are in random order | stores unique elements

    u_set.insert(1); // inserts element to unordered set
    u_set.erase(1); // erases element from unordered set
    u_set.find(1); // returns iterator to element if found, end() iterator of unordered set otherwise

    u_set.size(); // returns unordered set size


    // ---------------- 4) SET -----------------


    set<int> s; // stores unique elements | Elements are in sorted order

    s.insert(1); // inserts element to set
    s.erase(1); // erases element from set
    s.find(1); // returns iterator to element if found, end() iterator of set otherwise

    s.size(); // returns set size


    // ---------------- 5) UNORDERED MAP -----------------


    unordered_map<int, string> u_map; // syntax: unordered_map<key_type, value_type>
    // Elements are in random order | Stores unique keys

    u_map[1] = "one"; // inserts element to unordered map
    u_map.find(1); // returns iterator to element if found, end() iterator of unordered map otherwise

    u_map.erase(1); // erases given key from unordered map
    u_map.size(); // returns unordered map size

    u_map[1]; // returns value of the given key


    // ---------------- 6) MAP -----------------


    map<int, string> m; // syntax: map<key_type, value_type>
    // Elements are in sorted order | Stores unique keys

    m[1] = "one"; // inserts element to map
    m.find(1); // returns iterator to element if found, end() iterator of map otherwise

    m.erase(1); // erases given key from map
    m.size(); // returns map size

    m[1]; // returns value of the given key


    // ----------------  7) PRIORITY QUEUE -----------------


    priority_queue<int> pq; // default is a max heap(stores largest element at the top)
    priority_queue<int, vector<int>, std::greater<int>> pq_min; // min heap(stores smallest element at the top)

    pq.push(1); // inserts element to priority queue
    pq.top(); // returns the top element without removing it
    pq.pop(); // pops the top element
    pq.empty(); // returns true if priority queue is empty, false otherwise

    pq.size(); // returns priority queue size


    // ---------------- 8) DEQUE -----------------


    deque<int> dq; // double-ended queue
    // Can insert and erase elements from both ends

    dq.push_back(1); // inserts element to the back
    dq.push_front(1); // inserts element to the front

    dq.pop_back(); // pops the back element
    dq.pop_front(); // pops the front element

    dq.size(); // returns deque size

    dq.front(); // returns the front element
    dq.back(); // returns the back element

    dq.empty(); // returns true if deque is empty, false otherwise


    // ---------------- 9) VECTOR -----------------


    vector<int> v; // dynamic array
    vector<int> v_example(5,0); // vector of size 5 with all elements initialized to 0

    vector<vector<int>> v2_example1; // 2D vector
    vector<vector<int>> v2_example2(5, vector<int>(5,0)); // 2D vector of size 5 rows(vectors) and each row has 5 elements initialized to 0

    v.push_back(1); // inserts element to the back
    v.pop_back(); // pops the back element

    v.size(); // returns vector size

    v.empty(); // returns true if vector is empty, false otherwise

    v[0]; // returns element at the given index


    // ---------------- 10) STRING -----------------


    string str = "Hello, World!";

    str.size(); // returns string size
    str.empty(); // returns true if string is empty, false otherwise

    str[0]; // returns character at the given index

    str.find("Hello"); // returns the index of the first occurrence of the substring, if not found returns string::npos
    string::npos; // maximum value for size_t | Also used to indicate no matches

    str.substr(0, 4); // returns -> Hello // returns substring from start and len characters after start | [start, start+len)
    str.substr(2); // returns the substring starting from the given index till the end

    std::cout << str.substr(str.find("Hello")); // returns the substring starting from the first occurrence of the substring till the end
}
#include <iostream>

#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>

#include <queue>  // pq, dq, q
#include <stack>
#include <vector>

using namespace std;

void printUnorderedMap(unordered_map<int, int> mp) {
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }

    for (pair<int, int> en : mp) {
        cout << en.first << ' ' << en.second << '\n';
    }
}

void printMap(map<int, int> mp) {
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << ' ' << it->second << '\n';
    }

    for (pair<int, int> en : mp) {
        cout << en.first << ' ' << en.second << '\n';
    }
}

void printUnorderedSet(unordered_set<int> st) {
    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << '\n';
    }

    for (int el : st) {
        cout << el << '\n';
    }
}

void printUnorderedSet(set<int> st) {
    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << '\n';
    }

    for (int el : st) {
        cout << el << '\n';
    }
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << '\n';
        st.pop();
    }
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
}

void printPriorityQueue(priority_queue<int> q) {
    while (!q.empty()) {
        cout << q.top() << ' ';
        q.pop();
    }
}

void printVector(vector<int> v) {
    for (int el : v) {
        cout << el << ' ';
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' '; // Or v.at(i)
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
}

void printDeque(deque<int> dq) {
    cout << "Front element: " << dq.front() << '\n';
    cout << "Back element: " << dq.back() << '\n';

    // 2. Forward Iteration (Standard)
    cout << "Forward: ";
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << '\n';

    // 3. Backward Iteration (Using Reverse Iterators)
    cout << "Backward: ";
    for (auto rit = dq.rbegin(); rit != dq.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << '\n';

    // 4. Random Access
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << ' '; // dq[i] works here just like vector
    }

    cout << '\n';
}

void printString(string str) {
    cout << str;

    printf("%s", str.c_str());

    for (char ch : str) {
        cout << ch << ' ';
    }

    for (auto it = str.begin(); it != str.end(); it++) {
        cout << *it << ' ';
    }
}

int main() {

    return 0;
}
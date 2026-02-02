#include<iostream>
#include<queue>

using namespace std;

class Smaller {
public:
    bool operator()(int n1, int n2) {
        return n1 > n2;
    }
};

void printPQ(priority_queue<int, vector<int>, Smaller> pq) {
    while (!pq.empty()) {
        cout << pq.top() << ' '; pq.pop();
        cout << '\n';
    }
    cout << '\n';
}

int main() {
    priority_queue<int, vector<int>, Smaller> pq;

    pq.push(4);
    pq.push(7);
    pq.push(6);
    pq.push(10);
    pq.push(2);

    printPQ(pq);

    string str = "Hello, World!";
    cout << str.substr(7, 2) << '\n';

    return 0;
}
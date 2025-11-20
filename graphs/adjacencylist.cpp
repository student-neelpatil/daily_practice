#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int v;
    vector<list<int>> adj;

public:
    Graph(int v) {
        this->v = v;
        adj.resize(v);
    }

    void add_edge(int src, int dest, bool isbidirected = true) {
        adj[src].push_back(dest);

        if (isbidirected) {  // ✅ fixed condition
            adj[dest].push_back(src);
        }
    }

    void print() {
        for (int i = 0; i < v; i++) {
            cout << i << " --> ";
            for (int neigh : adj[i]) {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);
    int e;
    cout << "Enter number of edges you want to add: ";  
    cin >> e;

    while (e--) {  
        int s, d;
        cout<<"enter src and dest values:";
        cin >> s >> d;
        g.add_edge(s, d, true); // true = bidirectional
    }


    g.print();

    return 0;
}

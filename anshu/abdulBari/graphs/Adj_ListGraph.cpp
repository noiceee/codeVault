#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

class graph {
  unordered_map<int, list<int>> adj;

public:
  void addEdge(int u, int v, bool direction) {
    //  direction 0 -> undirected
    //  direction 1 -> directed
    adj[u].push_back(v);

    if (direction == 0) {
      adj[v].push_back(u);
    }
  }

  void printAdj() {
    for (auto i : adj) {
      cout << i.first << "->";
      for (auto j : i.second) {
        cout << j << ",";
      }
      cout << endl;
    }
  }
};
int main() {
  int n;
  cout << "Enter no. of Nodes: ";
  cin >> n;
  int m;
  cout << "Enter no. of Edges: ";
  cin >> m;

  graph g;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    // undirected graph
    g.addEdge(u, v, 0);
  }

  // print graph
  g.printAdj();
}
#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    // Array of list
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdjList(){
        // Iterate over all the vertices
        for(int i=0;i<V;i++){
            cout<< "Vertex "<<i<<"->";
            for(int nbr:l[i]){
                cout<< nbr<< ",";
            }
            cout<< endl;
        }
    }
};

int main() {
    int n,m;
    cin>>n>>m;
    int dist[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dist[i] = x;
    }
    Graph g(n);
    for(int i=0;i<m/2;i++){
        int x,y;
        cin>>x>>y;
        g.addEdge(x,y);
    }

    return 0;
}

/*
5 6
1 0 1 1 2
5 4
1 2
3 2
3 4
4 2
1 5


5 6
5 4
1 2
3 2
3 4
4 2
1 5


*/
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class Graph{
    public:
    //first int->u
    //second int->v;
    // third int->weight of the edge 
    unordered_map<int,list<pair<int,int>>> adjList;
    
    void addEdge(int u,int v,int weight,bool direction){
        //direction->0 undirected 
        //direction->1 directed 
        if(direction==0){
            adjList[u].push_back({v,weight});
            adjList[v].push_back({u,weight});
        }
        else{
            adjList[u].push_back({v,weight});
        }
    }
    void printAdjList(int n){
        for(int i=0;i<n;i++){
            cout<<i<<"->";
            cout<<"{";
            list<pair<int,int>> temp=adjList[i];
            for(auto j:temp){
                // here j is pair
                cout<<"("<<j.first<<","<<j.second<<"), ";
            }
            cout<<"}"<<endl;
        }
    }
    //**********************8 */ method2************************************************
    // for(auto i:adjList){
    //     cout<<i.first<<"->";
    //     cout<<"{";
    //     for(auto j:i.second){
    //         cout<<j<<",";
    //     }
    //     cout<<"}"<<endl;
    // }
    int bfstraversal(int src){
        queue<int> q;
        unordered_map<int,bool> visited;
        //initial state
        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            int frontnode=q.front();
            cout<<frontnode<<", ";
            q.pop();

            for(auto neighbour:adjList[frontnode]){
                int node=neighbour.first;
                int weight=neighbour.second;
                if(!visited[node]){
                    q.push(node);
                    visited[node]=true;
                }
            }
        }
        cout<<endl;
    }
    void dfsHelper(int src,unordered_map<int,bool>& visited){
        visited[src]=true;
        cout<<src<<", ";
        
        for(auto nbr:adjList[src]){
            //nbr=pair
            //first=node
            //second=weight
            int node=nbr.first;
            if(!visited[node]){
                dfsHelper(node,visited);
            }
        }
    }
    void dfsTraversal(int n){
        int src=0;
      
        for(int src=0;src<n;src++){
            if(!visited[src]){ // work for both disconnected component and connected component
                dfsHelper(src,visited);
            }
        }
       
    }

};
int main(){
    Graph g;
    // g.addEdge(0,1,3,1);
    // g.addEdge(0,2,4,1);
    // g.addEdge(1,2,1,1);
    // g.addEdge(2,3,16,1);
    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);
    int n=7; // no of edges
    g.printAdjList(n);
    // cout<<endl<<"BFS:";
   // g.bfstraversal(0);
   cout<<endl<<"DFS:";
   g.dfsTraversal(7);
    return 0;
}
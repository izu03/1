#include<bits/stdc++.h>
using namespace std;
#define max 100
int adj[max][max];
void bfs(int n,int start){
    int visited[n]={0};
    int q[n];
    int front=0;int rear=-1;
    visited[start]=1;
    q[++rear]=start;
    while(front<=rear){
        int current=q[front++];
        cout<<current<<" ";
        for(int i=0;i<n;i++){
            if(adj[current][i] && !visited[i]){
                visited[i]=1;
                q[++rear]=i;
            }
        }
    }
}
int main() {
    // Write C++ code here
    cout<<"enter number of nodes;";int n;cin>>n;
    cout<<"enter an adjactent matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    cout<<"enter starting node";int start;
    cin>>start;
    bfs(n,start);
    return 0;
}

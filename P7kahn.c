#include<bits/stdc++.h>
using namespace std;
#define max 100
int adj[max][max];
void tps(int n){
    int degree[n]={0};int front = 0,rear=-1;
    int queue[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[j][i]){
                degree[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(degree[i]==0)
            queue[++rear]=i;
    }
    while(front<=rear){
        int current=queue[front++];
        cout<<current<<" ";
        for(int i=0;i<n;i++){
                if(adj[current][i]){
                    degree[i]--;
                    if(degree[i]==0){
                    queue[++rear]=i;
                }
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
    tps(n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define max 100
int arr[100][100];int n;
int visited[max]={0};
int st[max];int top=-1;
void dfs(int start){
    visited[start]=1;
    st[++top]=start;
    while(top!=-1){
        int current = st[top--];
        cout<<current<<" ";
        for(int i=0;i<n;i++){
            if(arr[current][i] && !visited[i]){
                visited[i]=1;
                st[++top]=i;
            }
        }
    }
}
int main(){
    cout<<"enter number of elements;";cin>>n;
    cout<<"enter adj matrix ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int start;
    cout<<"enter staring element;";cin>>start;
    dfs(start);
    return 0;
}

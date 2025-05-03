#include<bits/stdc++.h>
using namespace std;
int f(vector<int> &arr,int low,int high){
    int i=low,j=high;
    int p=arr[low];
    while(i<j){
        while(arr[i]<=p && i<high){
            i++;
        }
        while(arr[j]>p && j>low){
            j--;
        }
        if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;}
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int p=f(arr,low,high);
        qs(arr,low,p-1);
        qs(arr,p+1,high);
    }
}
int main(){
    vector<int> arr;
    int n;
    cout<<"enter number of elements;";cin>>n;
    cout<<"enter array";
    for(int i=0;i<n;i++){
        
            int x;
            cin>>x;
            arr.push_back(x);
        
    }

    qs(arr,0,n-1);
    for(int i:arr){
        cout<<i<<"\t";
    }
    return 0;
}

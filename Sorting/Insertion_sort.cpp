// Stable and Inplace sorting algorithms
// Grate pplications while sorting smaller arrays
#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arr[]={50,20,40,60,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,n);
    for(int x:arr){
        cout<<x<<"\t";
    }
}
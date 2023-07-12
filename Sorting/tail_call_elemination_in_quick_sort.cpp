#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l,j=h;
    while(i<j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        swap(arr[i],arr[j]);
    }
    return j;
}


void sorting(int arr[],int l,int h){
    while(l<h){
        int k=fun(arr,l,h);
        sorting(arr,l,k);
        l=k+1;
    }
}

int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorting(arr,0,n-1);
    for(auto x: arr){
        cout<<x<<"\t";
    }
}
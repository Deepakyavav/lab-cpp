#include<bits/stdc++.h>
using namespace std;

// lomuto partition will concider the last element as pivot element and return the index of the pivot element

int lomuto_partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l;
    for(int j=l;j<h;j++){
        if (arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[h]);
    return i;
}

int main(){
    int arr[]={10,80,30,90,40,50,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=lomuto_partition(arr,0,n-1);
    for(int x:arr){
        cout<<x<<"\t";
    }
}
#include<bits/stdc++.h>
using namespace std;

int lomuto_partition(int arr[],int l,int h){
    int pivot = arr[h];
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

void quick_sort(int arr[],int l,int h){
    if (l<h){
        int k=lomuto_partition(arr,l,h);
        quick_sort(arr,l,k-1);
        quick_sort(arr,k+1,h);
    }
}

int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for(auto x: arr){
        cout<<x<<"\t";
    }
}
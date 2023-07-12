#include<bits/stdc++.h>
using namespace std;

int hoare_partition(int arr[],int l,int h){
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


void hoare_sorting_function(int arr[],int l,int h){
    if(l<h){
        int k=hoare_partition(arr,l,h);
        hoare_sorting_function(arr,l,k);
        hoare_sorting_function(arr,k+1,h);
    }
}


int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    hoare_sorting_function(arr,0,n-1);
    for(auto x: arr){
        cout<<x<<"\t";
    }
}
#include<bits/stdc++.h>
using namespace std;
// function to merge two arrays

void fun(int arr[],int l,int m,int h){
    int n1=m-l+1;
    int n2=h-m;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if (arr1[i]<=arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }
}



// sorting(merge-sort) function

void fun1(int arr[],int l,int h){
    if (h>l){
        int m=l+(h-l)/2;
        fun1(arr,l,m);
        fun1(arr,m+1,h);
        fun(arr,l,m,h);
    }
}



int main(){
    int arr[]={10,5,3,15,7};
    int l=0,h=4;
    fun1(arr,l,h);
    for(int x:arr){
        cout<<x<<"\t";
    }
}


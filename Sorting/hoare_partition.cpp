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



int main(){
    int arr[]={5,3,8,4,2,7,1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,0,n-1);
    for(auto x: arr){
        cout<<x<<"\t";
    }
}
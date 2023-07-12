#include<bits/stdc++.h>
using namespace std;


int max_guest(int arr1[],int arr2[],int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n && j<n){
        if(arr1[i]<arr2[j]){
            curr++;
            res=max(res,curr);
            i++;
        }
        else{
            curr--;
            j++;
        }
    }
    return res;
}

int main(){
    int arr[] = { 900, 600, 700};
    int dep[] = { 1000, 800, 730};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max_guest(arr,dep,n);
    return 0;
}
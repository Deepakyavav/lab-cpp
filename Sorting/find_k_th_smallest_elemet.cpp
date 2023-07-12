#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[h];
    int i=l;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    };
    swap(arr[i],arr[h]);
    return i;
}

int k_th_smallest(int arr[],int n,int k){
    k--;
    int l=0,h=n-1;
    while(l<=h){
        int p=partition(arr,l,h);
        if (p==k){
            return arr[p];
        }
        else if (p>k){
            h=p-1;
        }
        else{
            l=p+1;
        }
    }
    return -1;
}



int main(){
    int arr[]={10,4,5,8,11,6,26};
	int n=sizeof(arr)/sizeof(arr[0]);int k=5;
    cout<<k_th_smallest(arr,n,k);
}
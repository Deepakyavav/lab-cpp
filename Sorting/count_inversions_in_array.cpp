#include<bits/stdc++.h>
using namespace std;

int count_and_merge(int arr[],int l,int m,int h){
    int n1=m-l+1,n2=h-m;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[m+i+1];
    }
    int i=0,k=l,j=0,sum=0;
    while(i<n1 && j<n2){
        if (a[i]<=b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
            sum+=(n1-i);
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }
    return sum;
}

int count_inversion(int arr[],int l,int h){
    int res=0;
    if(h>l){
        int m=(l+h)/2;
        res+=count_inversion(arr,l,m);
        res+=count_inversion(arr,m+1,h);
        res+=count_and_merge(arr,l,m,h);
    }
    return res;
}

int main(){
    int arr[]={2,4,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=count_inversion(arr,0,n-1);
    cout<<res<<endl;
}
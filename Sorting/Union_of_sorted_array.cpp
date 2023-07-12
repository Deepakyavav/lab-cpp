#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int arr1[],int n1,int arr2[],int n2){
    int i=0,j=0;
    vector<int> vact;
    while(i<n1 && j<n2){
        if (arr1[i]<arr2[j]){
            vact.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            vact.push_back(arr2[j]);
            j++;
        }
        else{
            vact.push_back(arr1[i]);
            i++;
            j++;
        }
        while(i<n1){
            vact.push_back(arr1[i]);
            i++;
        }
        while(j<n2){
            vact.push_back(arr2[j]);
            j++;
        }
    }
    return vact;
}



int main(){
    int a[]={3,8,8};
    int b[]={2,8,8,10,15};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    vector<int> vact=fun(a,n1,b,n2);
    for(int x:vact){
        cout<<x<<"\t";
    }
}
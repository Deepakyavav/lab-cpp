#include<bits/stdc++.h>
using namespace std;


vector<int> fun(int arr1[],int n1,int arr2[],int n2){
    vector<int> vact;
    int i=0,j=0;
    while(i<n1  && j<n2){
        if (arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            if (i>0 && (arr1[i]!=arr1[i-1])){
            vact.push_back(arr1[i]);}
            i++;
            j++;
        }
    }
    return vact;
};



int main(){
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(a[0]);
    vector<int> vact =fun(a,n1,b,n2);
    for(auto x: vact){
        cout<<x<<"\t";
    }


}
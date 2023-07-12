#include<bits/stdc++.h>
using namespace std;


// # stable sorting
// devide and conquer
// O(nlog(n)) time complexity


// Merge function for merging of two sorted arrays

vector<int> fun(int arr1[],int n1,int arr2[],int n2){
    // vector<int> vact(n,10)  vector of size n with all the values will be inetialized with 10
    vector<int> vact;
    int i=0;
    int j=0;
    while(i<n1 and j<n2){
        if (arr1[i]<arr2[j]){
            vact.push_back(arr1[i]);
            i++;
        }
        else{
            vact.push_back(arr2[j]);
            j++;
        }
    };
    while(i<n1){
        vact.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        vact.push_back(arr2[j]);
        j++;
    };
    return vact;
}

int main(){
    int a[]={10,15,20,40};
    int b[]={5,6,6,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);

    vector<int> vact;
    vact=fun(a,m,b,n);
    for(int x:vact){
        cout<<x<<"\t";
    }
}
#include<bits/stdc++.h>
using namespace std;
// This algorithm finds the minimum element and palce at the counter index
void fun(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    int arr[]={2,1,3,4};
    fun(arr,4);
    for(int x:arr)
    cout<<x<<"\t";
}
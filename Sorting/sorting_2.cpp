#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }

// Alternate Method to define the function

void fun2(int arr[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}


// Opetimized method

void fun1(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if (flag==false){
            break;
        }
    }
}

int main(){
    
    int arr[]={2,1,3,4};
    fun2(arr,4);
    for(int x:arr){
        cout<<x<<"\t";
    }
}
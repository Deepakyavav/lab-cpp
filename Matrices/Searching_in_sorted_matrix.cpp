#include<bits/stdc++.h>
using namespace std;

const int n=4;
void function_sort(int mat[n][n],int k){
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(mat[i][j]==k){
            cout<< "Found at (" << i << ", " << j << ")";
            return;
        }
        if (mat[i][j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Element not found";
}

int main()
{	
    int arr[][n] = {{10, 20, 30, 40},{15, 25, 35, 45},{27, 29, 35, 45},{32, 33, 39, 50}};
	int x = 29;	   
	function_sort(arr, x);
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

const int n=4;

void print_sprial(int mat[n][n]){
    int top=0,left=0,right=n-1,bottom=n-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<"\t";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<"\t";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
            cout<<mat[bottom][i]<<"\t";
        }
        bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<mat[i][left]<<"\t";
            }
            left++;
        }

    }
}


int main()
{	
	int arr[n][n] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    print_sprial(arr);
	return 0;
}
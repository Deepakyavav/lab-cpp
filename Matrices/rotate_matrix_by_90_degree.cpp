#include<bits/stdc++.h>
using namespace std;

const int n=4;

void transpose_90(int mat[n][n]){
    int temp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        temp[n-j-1][i]=mat[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=temp[i][j];
        }
    }
}



void transpose_90_mat(int mat[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int l=0,h=n-1;
        while(l<h){
            swap(mat[l][i],mat[h][i]);
            l++;
            h--;
        }
    }
}

int main()
{	
	int arr[n][n] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

   transpose_90_mat(arr);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}	

	return 0;
}
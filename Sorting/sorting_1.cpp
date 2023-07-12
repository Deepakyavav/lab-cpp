#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct point{
    int x,y;
};
bool my_comp(point p1,point p2){
    return p1.x<p2.x;
}


int main(){
    int arr[]={10,20,5,7};
    sort(arr,arr+4);
    cout<<arr<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<"\n";
    };
    sort(arr,arr+4,greater<int>());

    for(int x:arr){
        cout<<x<<endl;
    };
    vector<int> v;
    v={10,20,5,7};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<"\t";
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int x:v){
        cout<<x<<"\t";
    }
    point ar1[]={{1,2},{10,30},{3,10},{5,4},{2,8}};
    int n = sizeof(ar1)/sizeof(ar1[0]);
    sort(ar1,ar1+n,my_comp);
    cout<<endl;
    for(auto k:ar1){
        cout<<k.x<<"\t"<<k.y<<endl;
    }
};



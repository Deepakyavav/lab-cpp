#include<bits/stdc++.h>
using namespace std;


struct Interval{
    int start,end;
};

bool my_cam(Interval i1,Interval i2){
    return i1.start < i2.start;
};


void merge_intervals(Interval arr[],int n){
    sort(arr,arr+n,my_cam);
    int res=0;
    for(int i=1;i<n;i++){
        if (arr[i].start<=arr[res].end){
            arr[res].end=max(arr[i].end,arr[res].end);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++){
        cout<<"["<<arr[i].start<<","<<arr[i].end<<"]"<<"\t";
    }
}

int main(){
    Interval arr[]={{5,10},{3,15},{18,30},{2,7}};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_intervals(arr,n);
    return 0;
}

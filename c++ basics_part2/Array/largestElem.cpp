#include<bits/stdc++.h>
using namespace std;

int findLargestElem(vector<int> &arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=findLargestElem(arr,n);
    cout<<max<<endl;
}
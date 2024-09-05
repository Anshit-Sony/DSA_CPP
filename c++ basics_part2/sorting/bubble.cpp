//Time complexity:
//worst,Avg- O(n2)
//best- O(n)

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int didswap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            } 
        }
        if(didswap==0) break;
    }
}


int main(){
    int arr[]={4,2,3,1,6,7};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
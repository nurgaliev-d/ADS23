#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0; i<n; i++){
        arr[i] = abs(arr[i] - k);
    }
    int min = INT_MAX;
    int result;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            result = i;
        }
    }
    cout<<result;
}
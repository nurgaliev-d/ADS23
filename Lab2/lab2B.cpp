#include <iostream>

using namespace std;
int main(){
int n;
cin>>n;
string a[n];
int k;
cin >> k;
if (0<=k && k<n)
for (int i = 0; i < n; i++) {
    cin >> a[i];
 }
cout<<a[k];
cout<<" ";
for(int i=k+1;i<n;i++){
  cout<<a[i]<<" ";
}
for(int i=0;i<k;i++){
  cout<<a[i];
  cout<<" ";
}
return 0;
}
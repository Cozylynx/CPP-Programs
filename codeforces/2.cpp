#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 int total =0;
 int max_arr[t];
 for(int i =0;i<t;i++){
    int a; int b;
    cin>>a>>b;
    b = b-a;
    total = total+b;
    max_arr[i]=total;
 }
 cout<<*max_element(max_arr,max_arr+t);

 
    return 0;
}
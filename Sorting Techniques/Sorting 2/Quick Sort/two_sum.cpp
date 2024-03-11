#include<bits/stdc++.h>
vector<int> sortedArray(vector<int> a, vector<int> b) {
  int n1 = a.size();
  int n2 = b.size();
  int i=0;
  int j=0;
  vector<int> unionArray;
  while( i<n1 && j<n2){
      if(a[i]<b[i]){
          if(unionArray.size()==0 || unionArray.back()!=a[i]){
              unionArray.push_back(a[i]);
          }
          i++;
      }
      if(b[i]<a[i]){
          if(unionArray.size()==0 || unionArray.back()!= b[i]){
              unionArray.push_back(b[i]);
          }
          j++;
      }
  }
  
  while(j<n2){
       if(b[i]<a[i]){
          if(unionArray.size()==0 || unionArray.back()!= b[i]){
              unionArray.push_back(b[i]);
          }
          j++;
      }
  }
  while(i<n1){
      if(a[i]<b[i]){
          if(unionArray.size()==0 || unionArray.back()!=a[i]){
              unionArray.push_back(a[i]);
          }
          i++;
      }
  }
  return unionArray;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int val1 = 0;
    int val2 =0;
    for(int i =0;i<s1.size();i++){
            if(s1[i]<'a'){
                s1[i]=  tolower(s1[i]);
            }
             val1 = val1 + s1[i];
    }
      for(int i =0;i<s1.size();i++){
            if(s2[i]<'a'){
                s2[i]=  tolower(s2[i]);
            }
            val2 = val2 + s2[i];
    }
        if(val1>val2) cout<<+1;
        else if (val2>val1) cout<<-1;
        else cout<<0;
    return 0;
}   
#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int group = 0;
        for(int i =0;i<n;i++){
            if(i==n-1){
                group ++;
                cout<<group<<endl;
            }
            else if((a[i] ==10 && a[i+1]==10) || (a[i] ==01 && a[i+1]== 01)){
                continue;
            }
            else if ((a[i]== 10 && a[i+1] == 01) || a[i] == 01 && a[i+1]==10)
             {group++;}
    }
    return 0;
}
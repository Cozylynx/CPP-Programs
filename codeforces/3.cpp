#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int res1=a+b+c;
	int res2=a*(b+c);
	int res3=a*b*c;
	int res4=(a+b)*c;
	cout<<max({res1,res2,res3,res4})<<endl;
	return 0;
}

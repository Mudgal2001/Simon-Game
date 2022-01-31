#include<bits/stdc++.h>
using namespace std;

const int N=0;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cntw=0; 
		int cntb=0;
		char curr=s[0];
		for (int i = 0; i < s.size(); ++i)
		{
			if(curr!=s[i]){
				if(curr=='W'){
					cntw++;
				}else{
					cntb++;
				}
				curr=s[i];
			}
		}
		if (curr=='B'){
			cntb++;
		}else{
			cntw++;
		}
		cout<<min(cntw,cntb);
	}
}

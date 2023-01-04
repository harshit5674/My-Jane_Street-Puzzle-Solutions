#include<bits/stdc++.h>
using namespace std;
 
const int mxm=1e9+7;
const long long mx=1e7;
long long aa=0,bb=0,cc=0,dd=0;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int m=11;
//	aa=0,bb=20,cc=57,dd=125;
	aa=0,bb=2,cc=6,dd=13;
	for(;;){
		long long e=dd-cc-bb;
		long long r=1;
		if(e%2==0){
			e/=2;
		}
		else{
			r=2;;
		}
		long long aat=r*aa+e;
		long long bbt=r*bb+e;
		long long cct=r*cc+e;
		long long ddt=r*dd+e;
		long long rr=aat+bbt+cct+ddt;
		rr/=2;
		long long aatt,bbtt,cctt,ddtt;
		aatt=0;
		ddtt=rr;
		bbtt=aat;
		cctt=aat+bbt;
		if((bbtt>mx)||(cctt>mx)||(ddtt>mx)){
			break;
		}
		aa=aatt;
		bb=bbtt;
		cc=cctt;
		dd=ddtt;
		m++;
	}
	cout<<m<<"\n";
	cout<<aa<<" "<<bb<<" "<<cc<<" "<<dd;
}

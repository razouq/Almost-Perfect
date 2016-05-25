#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	string m;
	while(getline(cin,m)){
		long sum=1;
		n=stoi(m);
		for(long i=2;i<=sqrt(n);i++){
			if(n%i==0){
				sum+=i;
				if(i!=n/i) sum+=n/i;
			}
		}
		if(sum==n) cout<<n<<" perfect"<<endl;
		else if(abs(sum-n)<=2) cout<<n<<" almost perfect"<<endl;
		else cout<<n<<" not perfect"<<endl;
	}
	return 0;
}

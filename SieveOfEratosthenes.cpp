/**
 *  author:   unnum_sykar
 *  Todo  :   "Make it work, make it right, make it Fast." 
**/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e5 + 5;
vector<int>primes;
bool a[90000001];

void sieve(){
	int maxN = 90000000;
	a[0] = a[1] = true;

	for(int i=2;i*i<=maxN;i++){
		if(!a[i]){
			for(int j=i*i;j<=maxN;j+=i){
				a[j] = true;
			}
		}
	}
	for(int i=2;i<=maxN;i++){
		if(!a[i])
			primes.push_back(i);
	}
}

void c_p_c(){
#ifndef ONLINE_JUDGE
    // for writing input to input.txt
    freopen("input.txt","r", stdin);
    // for getting output from output.txt
    freopen("output.txt","w",stdout);
#endif 
}    
int32_t main()
{
   

	c_p_c();
	IOS;

    int q,n;
    cin>>q;
    sieve();

    while(q--){
    	cin>>n;
    	cout<<primes[n-1]<<endl;
    }   



	return 0;

} 
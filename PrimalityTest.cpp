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

// Naive Approach  (T.c->O(n))
bool isPrime(int n){
	if(n==1)
		return false; //base case
	for(int i=2;i<n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

// better approach  (T.c->O(sqrt(n)))

bool isPrime2(int n){
	if(n==2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
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

    // Primality Test is to determine whether the input integer is a prime or not.
    // Ex: input-> 5 = true
    //     input-> 12 = false

 
    int n;
    cin>>n;
    int ans = isPrime2(n);
    cout<<ans<<endl;
  





	return 0;

} 
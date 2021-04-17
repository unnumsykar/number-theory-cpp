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
int Power(int a, int n){
	int res = 1;
	while(n){
		if(n%2)
			res*=a , n--;
		else
			a*=a , n/=2;
	}
	return res;
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

    // binary exponentiation is a technique to calculate a^n in O(log n) Time complexity.

    int n,a;
    cin>>a>>n;

    cout<<Power(a,n)<<endl;  




	return 0;

} 
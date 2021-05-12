#include<iostream>
using namespace std;
// Marbles Problem CodeChef
// https://codingclub.tech/event/777-codechef-10
int main(){
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    long long int N,K;
	    cin>>N>>K;
	    N--,K--;
	    long long int res = 1;
	    if(K>N/2){
	        K = N-K;
	    }
	    //nPk is the total possible permutations
	    for(long long int i=1; i<=K; i++){
	        res = res*N;
	        res = res/i;
	        N--;
	    }
	    cout<<res<<endl;
	}
return 0;
}
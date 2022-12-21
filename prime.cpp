#include<iostream>
#include<vector>
using namespace std;
#define N 1000000
#define ll long long


void primeSieve(vector<int> &sieve){

	//Mark 1 and 0 as not prime
	sieve[1] = sieve[0] = 0;
        sieve[2]=1;

	// Initially you can say I will just mark all odd numbers as prime
	for(int i=3; i<=N; i+=2){
		sieve[i] = 1;
	}

	//start from 3 and mark all multiples of given i (prime) as not prime
	for(ll i=3; i<=N; i++){	
		if(sieve[i]){
			for(ll j = i*i; j<=N; j = j + i){
				//marking j as not prime
				sieve[j] = 0;
			}
		}
	}
}


int main(){

	vector<int> sieve(N+1,0); //fill constructor
	primeSieve(sieve);

	for(int i=0; i<=1000; i++){
		if(sieve[i]){
			cout<<i <<" ";
		}
	}
	

	return 0;
}

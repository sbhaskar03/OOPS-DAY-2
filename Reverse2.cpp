#include<bits/stdc++.h>
using namespace std;
int rev=0;

void reverse(int n){
	if(n==0)
	return;
	rev=rev*10;
	rev=rev+(n/10);
	}
	
	int main(){
		int num;
		cout<<"Enter a number:";
		cin>>num;
		cout<<"The original number is"<<num;
		reverse(num);
		cout<<"\nThe reversed number is"<<rev;
		
		return 0;
		
	}

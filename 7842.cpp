#include<iostream>

using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		if(i%2==0){
			cout<<a[i]<<" ";
		}
	}
	
	
	
	
	return 0;
}

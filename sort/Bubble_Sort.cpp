#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n; //number of elements
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) //input n elements
	cin >> a[i];
	for(int i=0;i<n;i++){ //find the max element and place it at the end
		for(int j=0;j<n-i-1;j++){ 
			if(a[j]>a[j+1]){ 
				int t; //swap
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	cout << a[i];

	return 0;
}

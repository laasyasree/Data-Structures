#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n-1;i++){
		int min_index=i; //Finding the min element
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_index]){ 
				int t; //Swap
				t=a[j];
				a[j]=a[min_index];
				a[min_index]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	cout << a[i];


	return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n,t;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	bool b=false;
	while(!b){ //loop ends only when the array is sorted
		b=true;
	for(int i=1;i<n;i+=2){
		for(int j=1;j<n-i-1;j+=2){ //Bubble sort on odd index elements
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				b=false;
			}
		}
	}
	for(int i=0;i<n;i+=2){
		for(int j=0;j<n-i-1;j+=2){ //Bubble sort on even index elements
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				b=false;
			}
		}
	}
	}
	for(int i=0;i<n;i++)
	cout << a[i];

	return 0;
}

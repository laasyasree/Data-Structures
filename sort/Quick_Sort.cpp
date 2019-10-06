#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n,pos=0,temp;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	int pivot=a[n-1];
	for(int i=0;i<n-1;i++){ //Place the pivot at its correct position.
	if(a[i]<pivot){
	pos++;
	temp=a[pos];
	a[pos]=a[n-1];
	a[n-1]=temp;}}
	pivot=a[pos];
	for(int i=0;i<pos;i++){ //Place all smaller elements than pivot to left of it and greater elements to right of it
		if(a[i]>pivot){
			temp=a[i];
			for(int j=pos+1;j<n;j++){
				if(pivot>a[j]){
					a[i]=a[j];
					a[j]=temp;
					break;
				}
			}
		}
	}
	for(int i=0;i<pos;i++){ //Sort the elements on left of pivot
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		for(int i=pos+1;i<n;i++){ //Sort the elements on right of pivot
		for(int j=pos;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++) //Display
	cout << a[i];	
	
	



	return 0;
}

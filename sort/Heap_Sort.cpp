#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void heapify(int a[],int n,int i){ //Converting it into max heap
		int p=i,l=2*i,r=2*i+1;
		if(l<n && a[l]>a[p]){ //If left child is greater than the parent
			p=l;
		}
		if(r<n && a[r]>a[p]){ //If right child is greater than the parent
			p=r;
		}
		if(p!=i){ //If parent is not greater 
			int temp=a[i]; //Swap
			a[i]=a[p];
			a[p]=temp;
		heapify(a,n,p);}
}

void maxheap(int a[], int n){
  for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(a, n, i); 
    for (int i=n-1; i>=0; i--){ //Extracting elements one by one
      int temp=a[0];
       a[0]=a[i];
       a[i]=temp;
        heapify(a, i, 0); }
	}
	


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	maxheap(a,n);
	for(int i=0;i<n;i++) //Display
	cout << a[i];


	return 0;
}

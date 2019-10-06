#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void merge(int a[],int l, int m, int h){ //To merge two sub-arrays
	int b=m-l+1;
	int c=h-m;
	int a1[b],a2[c]; //Create two new arrays
	for(int i=0;i<b;i++) 
	a1[i]=a[l+i];
	for(int i=0;i<c;i++)
	a2[i]=a[m+1+i];
	int i=0,j=0,k=l;
	while(i<b&&j<c){  //Merge two arrays
    if (a1[i]<= a2[j]){ 
		a[k]=a1[i]; 
        i++; } 
    else{ 
		a[k]=a2[j]; 
        j++;} 
        k++; 
    } 
    while(i<b){ //Add the remaining elememts of a1 to a
		a[k]=a1[i]; 
		i++; 
        k++;} 
    while(j<c){ //Add the remaining elements of a2 to a
        a[k]=a2[j]; 
        j++; 
        k++; 
    } 
} 

void mergesort(int a[], int l, int h){ //Divide the array into sub-arrays
	if(l<h){
	int m=(l+h)/2;
	mergesort(a,l,m);
	mergesort(a,m+1,h);
	merge(a,l,m,h);
	}
}


	

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)//Input
	cin >> a[i];
	
	mergesort(a,0,n-1);  //Call merge sort
	
	for(int i=0;i<n;i++) //Display
	cout << a[i];



	return 0;
}

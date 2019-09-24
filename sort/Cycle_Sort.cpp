#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void cycle_sort(int a[],int n){
	for(int i=0;i<n-1;i++){ //Traverse the array
		int item = a[i];
		int pos=i;
		for(int j=i+1;j<n;j++)  //Position is the count of smaller elements on right side of item 
			if(a[j]<item)		
				pos++;
		if (pos == i) //If item is at the correct position
			continue; 
		while(a[pos]==item) //For duplicate elements
		pos++;
		if(pos!=i){ //Placing item at the correct position
		int s;
		s=a[pos];
		a[pos]=item;
		item=s;}
		while(pos!=i){ //For the rest of cycle
			pos=i;
		for(int j=i+1;j<n;j++) //Finding the position
			if(a[j]<item)
				pos++;
		while(a[pos]==item) //For duplicate elements
		pos++;
		if(item!=a[pos]){ //Placing item at the correct position
		int t;
		t=a[pos];
		a[pos]=item;
		item=t;}
		}
	}
}

int main(){
	// Number of elements
	int n;
	cin >> n;
	int a[n];
	
	//Inputing n elements
	for(int i=0;i<n;i++) 
	cin >> a[i];
	
	//Function call
	cycle_sort(a,n); 
	
	//Display
	for(int i=0;i<n;i++)
	cout << a[i] << " ";
		
	return 0;
}

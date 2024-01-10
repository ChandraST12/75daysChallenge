// move all negative numbers left side
//problem statement -gfg- 450 dsa sheet love babbar question(array)
/*
An array contains both positive and negative numbers in random order. 
Rearrange the array elements so that all negative numbers appear before all positive numbers.*/

// code 
/*
// approach1 naive approach
#include <iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
void move(vector<int>& arr){ 
sort(arr.begin(),arr.end()); 
} 
int main() { 

	vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 }; 
	move(arr); 
	for (int e : arr) 
	cout<<e << " "; 
	return 0; 
} 


// approach2 DUTCH NATIONAL FLAG ALGO



void reArrange(int arr[],int n){ 
	int low =0,high = n-1; 
	while(low<high){ 
	if(arr[low]<0){ 
		low++; 
	}else if(arr[high]>0){ 
		high--; 
	}else{ 
		swap(arr[low],arr[high]); 
	} 
	} 
} 



*/
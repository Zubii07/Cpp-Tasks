#include<iostream>
using namespace std;
main(){
	int n;
	cout<<" enter the size of array:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<" enter the value of "<<i+1<<"th member: "<<endl;
		cin>>arr[i];
	}
	int n2;
	cout<<" Enter the you want to find in an array: "<<endl;
	cin>>n2;
	int found=0;
	
	 for(int i=0;i<n;i++){
	 	if(i==n2){
	 		cout<<" the num is located in the array at the position "<<i<<endl;
	 		 found=1;
		 }
	 }	
	 if(found==0){
	 	cout<<" the num is not in array"<<endl;
	 }
		
	}



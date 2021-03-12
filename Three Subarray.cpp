#include <iostream>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int arr[n];
	
	/**
	cin>>arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
  	int p=-1,q=-1;
	for(int i=0;i<n;i++){
		if(3*arr[i]==arr[n-1]){
			p=i;
			for(int j=p+1;j<n;j++){
				if(2*(arr[n-1]-arr[j])==arr[j]){
					q=j;
				}
			}
		}
		if(p>=0 && q>=0){
			cout<<p<<" "<<q;
			return 0;
		}else{
			p=-1;
			q=-1;
		}
		
	}**/
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
  	int p=-1,q=-1;
	int leftsum=0;
	for(int i=0;i<n;i++){
		leftsum+=arr[i];
		if(3*leftsum==sum){
			p=i;
			int newleft=leftsum;
			for(int j=p+1;j<n;j++){
				newleft+=arr[j];
				if(2*(sum-newleft)==newleft){
					q=j;
				}
			}
		}
		if(p>=0 && q>=0){
			cout<<p<<" "<<q;
			return 0;
		}else{
			p=-1;
			q=-1;
		}
		
	}
	cout<<"No result found";

  return 0;
}

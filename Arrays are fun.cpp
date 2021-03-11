#include <iostream>
using namespace std;
int findMin(int arr[],int n){
  int min=arr[0];
  for(int i=0;i<n;i++)
  {
	if(min>arr[i]){ 
	     min=arr[i];	
		 }
}
  return min;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){ 
		cin>>arr[i];
	}

  	int sublen=1;
  	int min=0;
  	while(sublen<=n){ 
    	for(int i=0;i<n-sublen+1;i++)
		{
      		int start=i;
      		int temp[sublen];
      		for(int k=0;k<sublen;k++)
			  	{
					temp[k]=arr[start];
        			start++;
      			}
    		min=min+findMin(temp,sublen);
    	}
    sublen++;
  }
  cout<<"Hello"<<min<<"Hello"<<endl;
  return 0;
}

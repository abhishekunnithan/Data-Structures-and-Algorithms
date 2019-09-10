#include<iostream>
using namespace std;

int binarySearch(int arr[],int k,int f,int l)
{
	


	if(f-l==0)
	return -1;
	
	
	
	int mid=(l+f)/2;
	if(arr[mid]==k)
	return mid;
	else if(arr[mid]<k)
	{
		
		
		return binarySearch(arr,k,mid+1,l);
	}
	else 
	{

		return binarySearch(arr,k,f,mid);
	}
}
int main(void)
{
	int n,k;
	printf("enter the no of elements in the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in thearray\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&k);
	int f=0,l=n-1;
	
	int p=binarySearch(arr,k,f,l);
    (p == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << p; 
	
	return 0;
}





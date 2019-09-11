#include<iostream>
using namespace std;

void swap(int *f,int *l)
{
	
	int fp=*f;
	*f=*l;
	*l=fp;
	
}

void prinT(int A[],int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
		printf("\t%d",A[i]);
	}
	printf("\n");
}



void  selectionSort(int A[],int n)
{
	int min_index;
	for(int i=0;i<n-1;i++)
	{
		min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(A[min_index]>A[j])

			{
				min_index=j;
				swap(&A[i],&A[min_index]);
			}
		}
		
	}
	prinT(A,n);
}


int main(void)
{
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	selectionSort(A,n);
	
}



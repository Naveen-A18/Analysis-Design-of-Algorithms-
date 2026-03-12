Design and implement C/C++ Program to sort a given set of n integer elements using Merge Sort method and compute its time complexity. Run 
the program for varied values of n> 5000, and record the time taken to sort. Plot a graph of the time taken versus n. The elements can be 
read from a file or can be generated using the random number generator. 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<time.h>
#define MAX 300000
void simple_merge(int a[],int low,int mid,int high);
void merge_sort(int a[],int low,int high);
int n;
int main(void)
{
	int a[MAX],i=0;
	double startTime,endTime;
	printf("Enter the number of elements to sort\n");
	scanf("%d",&n);
	//To generate randomly
	for(i=0;i<n;i++)
		a[i]=rand();
	printf("\nBefore Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	
	startTime=clock();
	merge_sort(a,0,n-1);
	endTime = clock();
	printf("After Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("Time taken is %10.9f\n",(double)(endTime-startTime));
	return 0;
}

/*Function to sort sub arrays elements*/
void simple_merge(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=low,c[MAX];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;

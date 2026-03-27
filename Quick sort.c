#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 500000
int partition(int a[],int low,int high);
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return temp;
}

void quicksort(int a[],int low,int high)
{
	int s;
	if(low<high)
	{
		s=partition(a,low,high);
		quicksort(a,low,s-1);
		quicksort(a,s+1,high);
	}
}


int partition(int a[],int low,int high)
{
	int  i,j,pivot;
	pivot=a[low];
	i=low+1;
	j=high;
	while(1)
	{
		while((i<high)&&(pivot>=a[i]))
		i++;
		while(pivot<a[j])
		j--;
		if(i<j)
		{
			swap(&a[i],&a[j]);
		}
		else
		{
			swap(&a[low],&a[j]);


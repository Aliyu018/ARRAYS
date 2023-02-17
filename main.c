#include <iostream>
using namespace std;

int lin_search(int [],int,int);

int bin_search(int [], int, int);

void bubble_sort(int [], int);

int main(void)
{
	
	int a[16] = {3,6,23,35,42,88,155,434,570,678,732,755,812,834,900,945};
	
	int b[10];
	
	for(int i =0;i<10;i++){
		cout<<endl<<"input a number: ";
		int x;
		cin >>x;
		b[i] = x;
	}
	
	bubble_sort(b, 10);
	
	cout<<"\n b after sorting: ";
	for(int i=0;i<10;i++){
		cout<<b[i]<<"\t";
	}
	
	int key;
	cout<<endl<<"Enter search key: ";
	cin >> key;
	
	int isfound = bin_search(b, 10, key);
	if (isfound == -1){
		cout<<endl<<"Not found.";
	}
	else {
		cout<<endl<<"Key was found at: "<<isfound<<" iterations.";
	}
	return 0;
}


int lin_search(int a[],int size,int key)
{
	int i;

	for(i=0;i<size;i++)
	{
		if (a[i]==key)
			return i+1;
	}
	return -1;
}

int bin_search(int a[], int size, int key)
{
	int low,high,middle,cnt = 0;
	low = 0;
	high = size-1;
	while(low<=high)
	{
		middle = low + (high-low)/2;
		cnt++;
		if(a[middle]==key)
			return cnt;
		else if (a[middle]>key)
			low = middle+1;
		else
			high = middle-1;
	}
	return -1;
}

void bubble_sort(int a[], int size){
	int i, j,temp;
	 
	  
	for(i = 0; i<size; i++) {
	   for(j = i+1; j<size; j++)
	   {
	      if(a[j] > a[i]) {
	         temp = a[i];
	         a[i] = a[j];
	         a[j] = temp;
	      }
	   }
	}
}

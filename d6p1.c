#include<stdio.h>
#include<math.h>
int max(int[],int);
int min(int[],int);
float standdarDeviation(int[],int);
int main()
{
	int arr[50],i,pre,num,r,x;
	float sd;
	do{
	printf("Enter the Total number=");
	scanf("%d",&num);
	printf("Enter the number=");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Select our preference:-\n");
	printf("1) Maximum\n");
	printf("2) Minimum\n");
	printf("3) standard deviation\n");
	printf("Chose our preference:-");
	scanf("%d",&pre);
	switch(pre)
	{
		case 1:
			r=max(arr,num);
			printf("Maximum number:-%d\n",r);
		break;
		case 2 : 
			r=min(arr,num);
			printf("mininum number:-%d\n",r);
		break;
		case 3:
			sd=standdarDeviation(arr,num);
			printf("Standdar Deviation :-%.2f\n",sd);
		break;
		default:
			printf("Invalid Error!!\n");
	}
	printf("1 for continue & 0 for back ->");
	scanf("%d",&x);
	}
	while(x==1);
	return 0;
}
int max(int arr[],int n)
{
	int max = arr[0];
    	for (int i = 1; i < n; i++)
	{
        	if (arr[i] > max)
            	max = arr[i];
    	}
    	return max;
}
int min(int arr[],int n)
{
	int min = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		min = arr[i];
	}
	return  min;
}
float standdarDeviation(int arr[],int n)
{
	float mean = 0, sum = 0;
    	for (int i = 0; i < n; i++)
        	mean += arr[i];
    		mean /= n;
    	for (int i = 0; i < n; i++)
        	sum += pow(arr[i] - mean, 2);
    	return sqrt(sum / n);
}















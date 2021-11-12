#include <stdio.h>

float average(int s[],int n){
	float sum =0.0,avg;
	for(int i=0;i<n;i++){
		sum+=s[i];
		
	}
	avg=sum/n;
	return avg;
}
int main(){
	int n;
	printf("Input size of array: \n");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		printf("Input number at position %d: \n",i);
		scanf("%d",&s[i]);
	}
	printf("Average: %.2f",average(s,n));
	
}


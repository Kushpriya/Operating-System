//FCFS
// A program to simulate the FCFS CPU scheduling algorithm

#include<stdio.h>
#include<conio.h>
void main(){
	char pn[10][10];
	int arr[10],bur[10],start[10],finish[10],tat[10],wt[10],i,n;
	int totwt = 0, tottat =0;
	printf("Enter the number of processes: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter the Process Name, Arrival Time & Burst Time: ");
		scanf("%s%d%d", &pn[i],&arr[i],&bur[i]);
	}
	for(i=0;i<n;i++){
		if(i==0){
			start[i]=arr[i];
			wt[i] =start[i]-arr[i];
			finish[i] = start[i] + bur[i];
			tat[i] = finish[i]-arr[i];
		}
		else{
			start[i] =finish[i-1];
			wt[i] =start[i]-arr[i];
			finish[i] = start[i] + bur[i];
			tat[i] = finish[i] - arr[i];
		}
	}
	printf("\nPName	  Arrtime   Burtime   Start   TAT   Finish");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%6d\t%6d\t%6d\t%6d\t%6d", pn[i],arr[i],bur[i],start[i],tat[i],finish[i]);
		totwt += wt[i];
		tottat += tat[i];
	}
	printf("\nAverage Waiting Time: %f", (float)totwt/n);
	printf("\nAverage Turn Around Time: %f",(float)tottat/n);
	getch();
}

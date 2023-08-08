//Simulate Paging technique of Memory Management
//AIM: A program to simulate Paging technique of memory management

#include<stdio.h>
#include<conio.h>
void main(){
	int np,ps,i;
	int *sa;
	printf("Enter how many pages: \n");
	scanf("%d",&np);
	printf("Enter the page size: \n");
	scanf("%d",&ps);
	for(i=0;i<np;i++){
		sa[i]=(int) malloc (ps);
		printf("Page %d \tAddress%u\n",i+1,sa[i]);
	}
	getch();
}

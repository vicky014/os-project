#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
int bt[20],p[20],pr[20],wt[20],tat[20],n,total_wt=0,total_tat=0,min,temp;
float avg_wt,avg_tat;
void sortbt()
{
for(int i=0;i<n;i++)
  {
	min=i;
	for(int j=i+1;j<n;j++)
	{
		if(bt[j]<bt[min])
		 {min=j;
		 }
	}
	temp=bt[i];
	bt[i]=bt[min];
	bt[min]=temp;
	
	temp=p[i];
	p[i]=p[min];
	p[min]=temp;
  }
}
//waiting time
void wat()
{
for(int i=1;i<n;i++)
  {  
	wt[i]=0;
	for(int j=0;j<i;j++)
	 {wt[i]+=bt[j];
	 
	 }
	 total_wt+=wt[i];
  } 

}
//turn around time
void turnat()
{
for(int i=0;i<n;i++)
  {
   tat[i]=bt[i]+wt[i];  //calculating turn around time
   total_tat+=tat[i];
 
  }
}
//creating an array of priority
void pr_array()
{
	for(int i=1;i<n;i++)
	  {
	  	pr[i]=1+wt[i]/bt[i];
	  }
}
//sorting accordind to priority
void pr_sort()
{

	
}

int main()
{

printf("enter no . of processes : ");
scanf("%d",&n);
printf("\n enter burst time  :\n");
for(int i=0;i<n;i++)
{
 printf("p%d:",i+1);
 scanf("%d",&bt[i]);
 p[i]=i+1;//contains process number
}	
//sorting burst time
sortbt();


wt[0]=0; //waiting time of first process will be zero
//calculating waiting time
wat();
avg_wt=(float)total_wt/n;

//turn aroung time
turnat();
avg_tat=(float) total_tat/n;  //average turnaround time

//display
printf("\n Process\t  Burst time     \t Waiting time \t Turn around time  \t priority");

for(int i=0;i<n;i++)
{
  if(i=0)
     {
	 printf("\np%d\t\t  %d\t\t    %d\t\t\t%d\t---",p[i],bt[i],wt[i],tat[i]);
     }
  else
     {pr_array();
      pr_sort();
      printf("\np%d\t\t  %d\t\t    %d\t\t\t%d\t%d",p[i],bt[i],wt[i],tat[i],pr[i]);
	 }   

}

printf("\n\nAverage waiting time=%f\n",avg_wt);
printf("\n Average turn around time=%f\n",avg_tat);

}

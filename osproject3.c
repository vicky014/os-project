#include<unistd.h>
#include<stdio.h>
#include<sys/stat.h>
#include<pthread.h>
#include<sys/types.h>
struct prosch{
	int pid;
	int bt;
	int priority;
};
//waiting time
void waitingtime(prosch pr[],int s,int wt[])
{
	wt[0]=0;
	for(int i=0;i<n;i++)
	{
		wt[i]=pr[i].bt+wt[i];
	}
}
//turn around time
void turn_around_time(prosch pr[],int s,int wt[],int tat[])
{
	for(int i=0;i<n;i++)
	{
		tat[i]=pr[i].bt+wt[i];
	}
	
}
//average time
void avg_time(prosch pr[],int n)
{int wt[n],tat[n],t_wt=0,t_tat=0;

waitingtime(pr,n,wt);

turn_around_time(pr,n,wt,tat);
	
printf("processes  burst time  waiting time   turn around time\n");
//total waiting and turn around time
for(int i=0;i<n;i++)
{
t_wt=t_wt+wt[i];
t_tat=t_tat+tat[i];
}
//printing details
for(int i=0;i<n;i++)
{
printf("   %d",pr[i].pid,"\t\t%d",pr[i].bt,"\t\t%d",tat[i],"\n");
}
printf("average waiting time : %d",(t_wt/n);
printf("average turn around time : %d",(t_tat/n));
}

//pr1
int pr1()
{int p1;
p1=1+wt[0]/bt[0];
return p1;
}
//pr2
int pr2()
{int p2;
p2=1+wt[1]/bt[1];
return p2;
}

//pr3
int pr3()
{
int p3;
p3=1+wt[2]/bt[2];
return p3;
}
//process scheduling
void pr_sec(prosch pr[],int s)
{
	sort()
}

int main()
{prosch pr[]={{1,10,pr1()}, {2,5,pr2()}, {3,8,pr3()}};
int s=sizeof pr;
//pr_sec(pr,s);
return 0;
	
}

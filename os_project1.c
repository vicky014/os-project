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
		tat[i]=proc[i].bt+wt[i];
	}
	
}
//average time
void avg_time()
{
	
}
//pr1
void pr1()
{
	
}
//pr2
void pr2()
{
	
}

//pr3
void pr3()
{
	
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

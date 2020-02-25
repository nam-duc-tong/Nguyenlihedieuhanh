#include<stdio.h>

int main()
{
	int n, exetime[100], waittime=0,            processtime=0;
	int i;              //Thoi gian doi       //thoi gian thuc hien 	
	float avgwaittime,avgprocesstime,Sumwaittime=0,Sumprocesstime=0;
	
	printf("Enter number of processes: ");//nhap so tien trinh can thuc hien
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter time for process %d: ",i);//thoi gian su dung CPU
	 	scanf("%d",&exetime[i]);
	} 

	 printf("\n\n Tien Trinh \t\tThoi Gian thuc hien \t\t Thoi Gian Doi \t\t Thoi gian su dung CPU");
	 for(i=0;i<n;i++)
	 {
	 	processtime = exetime[i] + waittime;
		waittime += exetime[i];	
		Sumwaittime += waittime;
		Sumprocesstime += processtime;
	

	printf("\n\n %d \t\t\t %d \t\t\t\t %d \t\t\t\t %d",i,exetime[i],waittime,processtime);
	 	
		
	
	 }
	 avgwaittime = Sumwaittime/n;
	 printf("\nThoi gian doi trung binh la: %f",avgwaittime);
	 avgprocesstime = Sumprocesstime/n;
	 printf("\nThoi gian trung binh su dung CPU la: %f",avgprocesstime);
	
return 0;
}


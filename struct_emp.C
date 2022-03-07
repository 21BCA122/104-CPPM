/* Write a program to create manu driven program to perform operation on structure.*/
#include<stdio.h>
#include<conio.h>
struct emp
{
    int id,basic;
    char name[5][50],dep[5][20];
    float pf,da,gs,net,hra;
}e[5],t;
void main()
{
    int a,a1,b,i,j;
    char c[5];
    clrscr();
    for(i=1;i<=5;i++)
    {
	if(i==1)
	{
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %dst Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
	else if(i==2)
	{
	    clrscr();
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %dnd Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
	else if(i==3)
	{
	    clrscr();
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %drd Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
	else
	{
	    clrscr();
	    printf("\n--------------------------------------------------------------------------------");
	    printf("\n\t\tEnter the detail's of %dth Employee.",i);
	    printf("\n--------------------------------------------------------------------------------\n");
	    printf("Enter E_Id : ",i);
	    scanf("%d",&e[i].id);
	    printf("Enter E_Name : ",i);
	    scanf("%s",&e[i].name);
	    printf("Enter E_Dept : ",i);
	    scanf("%s",&e[i].dep);
	    printf("Enter E_Basic Salary : ",i);
	    scanf("%d",&e[i]. basic);
	}
    }
    clrscr ();
    printf("\n------------------------------------------------------------------");
    printf("\nE_ID\t E_Name \t E_Dept\t\t E_Basic Salary");
    printf("\n------------------------------------------------------------------");
    for(i=1;i<=5;i++)
    {
	printf("\n%d\t %s\t\t %s\t\t %d",e[i].id,e[i].name,e[i].dep,e[i]. basic);
    }
    printf("\nEnter 1 for print salary slip. ");
    printf("\nEnter 2 for search Emp_Base on Id.");
    printf("\nEnter 3 for search Emp_Base on Dept.");
    printf("\nEnter 4 for sort Emp Record by Emp_Name.");
    printf("\nEnter 5 for sort Emp Record by Emp_Basic Salary.");
    printf("\nEnter 6 for Exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&a);
    clrscr();
    switch (a)
    {
	case 1:
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			e[i].pf = e[i].basic/2;
			e[i].hra = (e[i].basic/100)*40;
			e[i].da = e[i].basic;
			e[i].gs = e[i].hra + e[i].da + e[i].basic;
			e[i].net = e[i].gs - e[i].pf;
			printf("\n%d\t%s\t%s\t%d       \t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
		}
		break;
	case 2:
		printf("Enter E_Id to see the record : ");
		scanf("%d",&b);
		for(i=1;i<=5;i++)
		{
			if(e[i].id==b)
			{
				a1=1;
				clrscr();
				printf("\n--------------------------------------------------------------------------------");
				printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
				printf("\n--------------------------------------------------------------------------------");
				e[i].pf = e[i].basic/2;
				e[i].hra = (e[i].basic/100)*40;
				e[i].da = e[i].basic;
				e[i].gs = e[i].hra + e[i].da + e[i].basic;
				e[i].net = e[i].gs - e[i].pf;
				printf("\n%d\t%s\t%s\t%d       \t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
			}
		}
		if(a1!=1)
		{
			clrscr();
			printf("\n\n\t\tOops! Record not found.");
		}
		break;
	case 3:
		printf("Enter E_Dept to see the record : ");
		scanf("%s",&c);
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			if(strcmp(e[i].dep,c)==0)
			{
				a1=1;
				e[i].pf = e[i].basic/2;
				e[i].hra = (e[i].basic/100)*40;
				e[i].da = e[i].basic;
				e[i].gs = e[i].hra + e[i].da + e[i].basic;
				e[i].net = e[i].gs - e[i].pf;
				printf("\n%d\t%s\t%s\t%d       \t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
			}
		}
		if(a1!=1)
		{
			clrscr();
			printf("\n\n\t\tOops! Record not found.");
		}
		break;
	case 4:
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			e[i].pf = e[i].basic/2;
			e[i].hra = (e[i].basic/100)*40;
			e[i].da = e[i].basic;
			e[i].gs = e[i].hra + e[i].da + e[i].basic;
			e[i].net = e[i].gs - e[i].pf;
			for(j=i+1;j<=5;j++)
			{
				if(strcmp(e[i].name,e[j].name)>0)
				{
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
		for(i=1;i<=5;i++)
			printf("\n%d\t%s\t%s\t%d",e[i].id,e[i].name,e[i].dep,e[i].basic);
		break;
	case 5:
		printf("\n--------------------------------------------------------------------------------");
		printf("\nE_ID\tE_Name\tE_Dept\t E_B Sal\tPF  \t HRA \t DA  \t G sal \t Net Sal");
		printf("\n--------------------------------------------------------------------------------");
		for(i=1;i<=5;i++)
		{
			e[i].pf = e[i].basic/2;
			e[i].hra = (e[i].basic/100)*40;
			e[i].da = e[i].basic;
			e[i].gs = e[i].hra + e[i].da + e[i].basic;
			e[i].net = e[i].gs - e[i].pf;
			for(j=i+1;j<=5;j++)
			{
				if(e[i].basic>e[j].basic)
				{
					t=e[i];
					e[i]=e[j];
					e[j]=t;
				}
			}
		}
		for(i=1;i<=5;i++)
			printf("\n%d\t%s\t%s\t%d       \t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",e[i].id,e[i].name,e[i].dep,e[i].basic,e[i].pf,e[i].hra,e[i].da,e[i].gs,e[i].net);
		break;
	case 6:
		exit(0);
		break;
	default :
		printf("\n\n\t\tEnter a valid choice.");
    }
    getch();
}
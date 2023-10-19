#include<stdio.h>
#include<conio.h>
int result(int totalvoters, int ar[]);
struct Vote{
	float JDU;
	float BJP;
	float AAP;
	float CNG;
};
int main()
{
	printf("\n\tVoting System\n");
	int totalvoters;
	printf("Enter total number of voters:");
	scanf("%d",&totalvoters);
	int ar[totalvoters];
	for(int i=0;i<totalvoters;i++)
	{
		printf("\n");
		printf("Select any one option\n");
		printf("1.JDU\n");
		printf("2.BJP\n");
		printf("3.AAP\n");
		printf("4.CNG\n");
		scanf("%d",&ar[i]);
	}
	result(totalvoters, ar);
}
int result(int totalvoters,int ar[])
{
	struct Vote v;
	float p=100/totalvoters;
	v.JDU=v.BJP=v.AAP=v.CNG=0;
	for(int i=0;i<totalvoters;i++)
	{
	   switch(ar[i])
	   {
	   	case 1:
	   		(v.JDU)++;
	   		break;
	   	case 2:
	   		(v.BJP)++;
	   		break;
	   	case 3:
	   		(v.AAP)++;
	   		break;
		case 4:
	   		(v.CNG)++;
	   		break;	   	
		   }	
	}
	printf("\n\n");
	printf("\tResult\n");
	printf("JDU\t%0.1f%%\n",(v.JDU)*p);
	printf("BJP\t%0.1f%%\n",(v.BJP)*p);
	printf("AAP\t%0.1f%%\n",(v.AAP)*p);
	printf("CNG\t%0.1f%%\n",(v.CNG)*p);
	printf("\n\n");
}

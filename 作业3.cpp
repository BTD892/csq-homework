#include<stdio.h>
#include<string.h>
int main()
{
	void arab(int n);
	arab(79);
	printf("\n");
	arab(5);
	printf("\n");
	arab(15);
	printf("\n");
	return 0;
} 
void arab(int n) 
{
	for(int i=0,ins;i<=2;i++){
		ins=10;
		if(i==0&&n>10)ins=n/10;
		if(i==0&&n==10){printf("ʮ");break;}
		if(i==0&&n<10)ins=n;
		if(i==1&&n>=10){printf("ʮ");continue;}
		if(i==2)ins=n%10;
		switch(ins)
		{
			case 1:printf("һ");break; 
			case 2:printf("��");break;
			case 3:printf("��");break;
			case 4:printf("��");break;
			case 5:printf("��");break;
			case 6:printf("��");break;
			case 7:printf("��");break;
			case 8:printf("��");break;
			case 9:printf("��");break;
			case 10:printf("ʮ");break;
		}
		if(n<10)break;
	}
}

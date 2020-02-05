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
		if(i==0&&n==10){printf("十");break;}
		if(i==0&&n<10)ins=n;
		if(i==1&&n>=10){printf("十");continue;}
		if(i==2)ins=n%10;
		switch(ins)
		{
			case 1:printf("一");break; 
			case 2:printf("二");break;
			case 3:printf("三");break;
			case 4:printf("四");break;
			case 5:printf("五");break;
			case 6:printf("六");break;
			case 7:printf("七");break;
			case 8:printf("八");break;
			case 9:printf("九");break;
			case 10:printf("十");break;
		}
		if(n<10)break;
	}
}

#include<stdio.h>
#include<string.h>
void test(char *s,int n);
int chinese(char *c);
int main(void)
{
	char a[5];
	test("��",5);
	test("��",6);
	test("��",7);
	test("����",4);
	return 0;
} 
void test(char *s,int n)
{
	if (chinese(s)==n)
        printf("correct\n");
    else
        printf("error\n");
}
int chinese(char *c)
{
	char a[5];
	strcpy(a,c);
	if(!strcmp(a,"һ"))return 1;
	else if(!strcmp(a,"��"))return 2;
	else if(!strcmp(a,"��"))return 3;
	else if(!strcmp(a,"��"))return 4;
	else if(!strcmp(a,"��"))return 5;
	else if(!strcmp(a,"��"))return 6;
	else if(!strcmp(a,"��"))return 7;
	else if(!strcmp(a,"��"))return 8;
	else if(!strcmp(a,"��"))return 9;
	else if(!strcmp(a,"ʮ"))return 10;
	else return 0;	
}

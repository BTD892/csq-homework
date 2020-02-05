#include<stdio.h>
#include<string.h>
void test(char *s,int n);
int chinese(char *c);
int main(void)
{
	char a[5];
	test("五",5);
	test("六",6);
	test("七",7);
	test("乌兹",4);
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
	if(!strcmp(a,"一"))return 1;
	else if(!strcmp(a,"二"))return 2;
	else if(!strcmp(a,"三"))return 3;
	else if(!strcmp(a,"四"))return 4;
	else if(!strcmp(a,"五"))return 5;
	else if(!strcmp(a,"六"))return 6;
	else if(!strcmp(a,"七"))return 7;
	else if(!strcmp(a,"八"))return 8;
	else if(!strcmp(a,"九"))return 9;
	else if(!strcmp(a,"十"))return 10;
	else return 0;	
}

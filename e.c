/*#include<stdio.h>
void (*pf)(char,int );
void fun(char,int);
int main()
{
	pf=fun;
	(*pf)('c',90);
	return 0;
}

void fun(char a,int b)
{
	printf("the agrument is %c and %d\n",a,b);
}*/

/*#include<stdio.h>
int main()
{
	unsigned int a[5]={12345,87654,987654,87654,5643};
	unsigned char *p=a;
	printf("p=%d \n",p);
	p++;
	printf("%d %d %d %d \n",*p,*(++p),*(p++),*(p+2));
	printf("%d",p);
	
	
 } */
 
 
/* #include<stdio.h>
 #include<string.h>

 char *my_strcpy (char *to,char *from);
 int main()
 {
 	char a[20];
 	char b[20];
 	char *p=a;
    char *q=b;
     my_strcpy(q,"ÀîËÄ");
	 puts(b); 
 }
 
 char *my_strcpy(char *to,char *from)
 {
 	
 	int i=0; 
 	while(*(from+i)!='\0')
 	{
 		*(to+i)=*(from+i);
 		i++;
	 }
	 *(to+i)='\0';	
	 return to;
 }*/
 
 
 #include<stdio.h>
 int my_strcmp (char *str,char *str1);
 int main()
 {
 	char a[20]="123456";
 	char b[20]="123456";
 	char *p=a;
 	char *q=b;
 	int i=0;
 	my_strcmp(p,q);
 	printf("%d",i);
 }
 
 int my_strcmp (char *str,char *str1)
 {
 	int i=0;
 	while(*(str1+i)!='\0')
 	{
 		if(*(str1+i)>*(str+i))
 		{
 			return 1;
		 }
		if(*(str1+i)<*(str+i)) 
		{
			return -1;
		}
		if(*(str1+i)==*(str+i))
		{
			i++;
		}
	 }
	 if(*(str+i)=='\0')
	 {
	 	return 0;
	 }
 }

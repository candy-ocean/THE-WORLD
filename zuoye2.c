#include<stdio.h>
#include<string.h>
{ 
char buf[128]={0}; 
FILE *fp=fopen{"foo.txt","r"};
if(fp==NULL) //文件不存在                                                         
{
printf("file doesn't exist!");
return 1;
}
while(fread(buf,1,128,fp)) //每次读出一个文件内容
{
printf("%s",buf); //将读到的字符串显示出来
memset(buf,0,128); //每次使用完buf清空，防止对下次干扰
}
fclose(fp);
return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
 int main(int argc,char *argv[])
{
  char buf[2048]={0};
 FILE *fp=NULL;
FILE *fpw=NULL;
long  length=0;
if(argc!=3)
{
  printf("argc error!");
exit (1);
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
  printf("file open error!");
exit(1);
}
fpw=fopen(argc[2],"w");
if(fpw==NULL)
{
  printf("create file error!");
exit (1);
}
fseek(fp,0,SEEK_END);
length=ftell(fp);
fseek(fp,0,SEEK_SET);
fread(buf,length,1,fp);
fwrite(buf,length,1,fpw);
fclose(fp);
fclose(fpw);
return 0;
}


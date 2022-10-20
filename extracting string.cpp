#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	int i=0,j=0 ,m,n;
	printf("enter main string:");
	gets(s1);
	printf("enter a place to start substring:");
	scanf("%d",&m);
	printf("enter length of string:");
	scanf("%d",&n);
	i=m;
	while(s1[i]!='\0' && n>0){
		s2[j]=s1[i];
		i++;
		j++;
		n--;
	}
	s2[j]='\0';
	printf("substring:");
	puts(s2);
}

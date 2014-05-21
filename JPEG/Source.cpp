#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

#define pi 3
#define circle(r) pi*r*r

int main(){
   
	

	FILE *jpg_img;
	jpg_img = fopen("test.txt","r");
	if(jpg_img==NULL)
	{
		printf("OMG!!!!\n");
	}
	fseek(jpg_img,0,SEEK_END);
	printf("data bytes = %d\n",ftell(jpg_img));
	int length = ftell(jpg_img);
	printf("%d\n",getc(jpg_img));

	fseek(jpg_img,10,SEEK_SET);
	printf("%d\n",ftell(jpg_img));
	printf("%c\n",getc(jpg_img));
	
	unsigned char buffer[10+4];
	printf("size  = %d",sizeof(buffer));


	system("pause");
	return 0;






}
/*
�@�~14:�м��g�@�ӵ{���A
�N�r��str[]="I $am 5a$ go68od#@$ st-ude[nt]."
�����O�^��r���]���O�ťժ����R���A
��ܥX���ê��@�y�ܡGI am a good student�C
*�f�a�� 3a713229
*/ 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int length;//�r������ܼ� 
	int i;//loop
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *check;
	
	length=strlen(input);
	check=input;
	//�ˬd�r�� 
	for(i=0;i<length;i++){
		if(*(check+i)<122&&*(check+i)>=96){
			printf("%c", *(check+i));
		}
		else if(*(check+i)<91&&*(check+i)>64){
			printf("%c", *(check+i));
		}
		else if(*(check+i)==32){
			printf("%c", *(check+i));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 

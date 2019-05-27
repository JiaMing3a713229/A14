/*
作業14:請撰寫一個程式，
將字串str[]="I $am 5a$ go68od#@$ st-ude[nt]."
中不是英文字母也不是空白的都刪掉，
顯示出隱藏的一句話：I am a good student。
*呂家明 3a713229
*/ 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int length;//字串長度變數 
	int i;//loop
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *check;
	
	length=strlen(input);
	check=input;
	//檢查字串 
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

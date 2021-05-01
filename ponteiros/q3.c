#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * misturar(char *str1, char *str2){
	char *strfinal;
	int tamStrFinal=strlen(str1)+strlen(str2);
	strfinal=malloc(tamStrFinal+1);
	//se a primeira string é maior que a segunda
	if(strlen(str1)>strlen(str2)){
		int j=0;
		for(int i=0;i<strlen(str2)*2;i=i+2){
			strfinal[i]=str1[j];
			strfinal[i+1]=str2[j];
			j++;
		}
		for(int i=strlen(str2)*2;i<tamStrFinal;i++){
			strfinal[i]=str1[j];
			j++;
		}	
	}
	//se a segunda string é maior do que a primeira
	else if(strlen(str1)<strlen(str2)){
		int j=0;
		for(int i=0;i<strlen(str1)*2;i=i+2){
			strfinal[i]=str1[j];
			strfinal[i+1]=str2[j];
			j++;
		}
		for(int i=strlen(str1)*2;i<tamStrFinal;i++){
			strfinal[i]=str2[j];
			j++;
		}	
	}
	//se as duas strings são iguais
	else{
		int j=0;
		for(int i=0;i<tamStrFinal;i=i+2){
			strfinal[i]=str1[j];
			strfinal[i+1]=str2[j];
			j++;
		}
	
	}
	strfinal[tamStrFinal+1]='\0';
	
	return strfinal;
}


int main(){
	char s1[100],s2[100];
	scanf("%s",s1);
	scanf("%s",s2);
	
	printf("%s",misturar(s1,s2));

return 0;
}

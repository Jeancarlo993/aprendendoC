#include<stdio.h>
#include<string.h>
#include<ctype.h>

//se eh brasileira ou mercosul
int placatipo(char s[]){
	//brasileira
	if(strlen(s)==9){
		return 1;
		}
	//mercosul

	 if(strlen(s)==8){
			return 2;
		}
	return 0; //se n for 9 nem 8 vai retornar 0
	}
//verifica se a placa é válida
int valida(char s[]){
	//se placa brasileira
	if(placatipo(s)==1){
		if(isalpha(s[0])&&isalpha(s[1])&&isalpha(s[2])){
			if(isupper(s[0])&&isupper(s[1])&&isupper(s[2])){
				if(s[3]=='-'){
					if(isdigit(s[4])&&isdigit(s[5])&&isdigit(s[6])&&isdigit(s[7])){
						return 1;
						}
					}
				}
			}
		return 0;
		}

	// se placa mercosul
	if(placatipo(s)==2){
		if(isalpha(s[0])&&isalpha(s[1])&&isalpha(s[2])&&isalpha(s[4])){
			if(isupper(s[0])&&isupper(s[1])&&isupper(s[2])&&isupper(s[4])){
				if(isdigit(s[3])&&isdigit(s[5])&&isdigit(s[6])){
					return 2;//placa mercosul
				}
			}
		}
	return 0;	
	}	
}

int main(){
	char placa[11];
	fgets(placa,11,stdin);
	if(valida(placa)==1){
		printf("brasileiro");
		}
	if(valida(placa)==2){
		printf("mercosul");
		}
	if(valida(placa)==0){
		printf("invalido");
	}
return 0;
}

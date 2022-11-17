#include <stdio.h>

int main(){
	int X, Y;
	Y=2002;
	while (X!=Y) {
		scanf("%d", &X);
		if (X!=Y){
			printf("Senha Invalida\n");
		} else if (Y=2002){
			printf("Acesso Permitido\n");
		}	
	}
	return 0;
}
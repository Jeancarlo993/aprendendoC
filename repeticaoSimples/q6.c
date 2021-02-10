#include <stdio.h>

int main(){
    int horaI,horaF,minI,minF,hora,minuto;

    printf("Digita o horário inicial: ");
    scanf("%d",&horaI);

    printf("Digita minutos inicial: ");
    scanf("%d",&minI);

    printf("Digita o horário final: ");
    scanf("%d",&horaF);
    
    printf("Digita o minuto final: ");
    scanf("%d",&minF);
    
    hora=(horaF - horaI);
    minuto=(minF - minI);

    if(horaF<horaI){ hora =24-horaI;    
    }
    if(minF<minI){minuto= 60 - minI+minF;
    }
    printf("Resultado: %dh%dmin",hora,minuto);

return 0;
}
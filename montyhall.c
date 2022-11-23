#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int porta, escolha, i, esc2, j;
	srand(time(NULL));
	porta = (rand() % 3) + 1;
	fprintf(stderr,"Qual das portas escolher? [1-3]\n");
	scanf("%d",&escolha);
	for (i = 1; i <= 3; i++) {
		if (i == escolha) continue;
		else if (i == porta) continue;
		fprintf(stderr,"Apresentador revelou que não é a porta %d. Trocar? [0-1]\n",i);
		scanf("%d",&esc2);
		if (esc2) {
			for (j = 1; j <= 3; j++) {
				if (j == escolha) continue;
				else if (j == i) continue;
				escolha = j; break;
			}
		}
		break;
	}
	if (porta == escolha) {
		puts("Você venceu!");
	} else {
		puts("Você perdeu!");
	}
	return 0;
}

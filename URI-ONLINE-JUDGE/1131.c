#include <stdio.h>

int main() {
	int gremio, internacional, escolha;
	int partidas = 0, empates = 0, gremio_venceu = 0, inter_venceu = 0;
	while(scanf("%d %d", &internacional, &gremio)) {
		partidas += 1;
		
		if(gremio == internacional) {
			empates += 1;
		} else if(gremio > internacional) {
			gremio_venceu += 1;
		} else {
			inter_venceu += 1;
		}
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &escolha);

		if(escolha == 2){
			printf("%d grenais\n", partidas);
			printf("Inter:%d\n", inter_venceu);
			printf("Gremio:%d\n", gremio_venceu);
			printf("Empates:%d\n", empates);
			
			if(inter_venceu > gremio_venceu) {
				printf("Inter venceu mais\n");
			} else {
				printf("Gremio venceu mais\n");
			}

			return 0;
		}
	}
}
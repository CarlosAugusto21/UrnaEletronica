#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int v1 = 0, v2 = 0, v3 = 0, vNulo = 0, vInvalido = 0;
int p1 = 0, p2 = 0, pNulo = 0, pInvalido = 0;

int main() {
	
	int menu, verea, pref;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("--------MENU----------\n");
	printf("1 - Voto\n");
	printf("2 - Apuração de votos\n");
	printf("3 - Sair\n");
	scanf("%d", &menu);
	fflush(stdin);
	system("cls");
	
	switch (menu){
		case 1:
			printf("--------VOTAÇÃO----------\n");
			printf("--------Veadores----------\n");
			printf("111 - Vereador Joao do Frete\n");
			printf("222 - Vereador Maria da Pamonha\n");
			printf("333 - Vereador Ze da Farmacia\n");
			printf("444 - Voto nulo\n");
			scanf("%d", &verea);
			fflush(stdin);
			system("cls");
			switch (verea){
				case 111:
					printf("Voto confirmado!\n");
					v1 = v1 + 1;
					break;
				case 222:
					printf("Voto confirmado!\n");
					v2 = v2 + 1 ;
					break;
				case 333:
					printf("Voto confirmado!\n");
					v3 = v3 + 1;
					break;
				case 444:
					printf("Voto nulo!\n");
					vNulo = vNulo + 1;
					break;
					
				default:
					printf("Voto inválido!\n");
					vInvalido = vInvalido + 1;
					break;	
			}
			
			system("pause");
			system("cls");
			
			printf("--------VOTAÇÃO----------\n");
			printf("--------Prefeito----------\n");
			printf("11 - Prefeito Dr. Zureta\n");
			printf("22 - Prefeito Senhor Gomes\n");
			printf("44 - Voto nulo\n");
			scanf("%d", &pref);
			fflush(stdin);
			system("cls");
			
			switch (pref){
				case 11:
					printf("Voto confirmado!\n");
					p1 = p1 + 1;
					break;
				case 22:
					printf("Voto confirmado!\n");
					p2 = p2 + 1;
					break;
				case 44:
					printf("Voto Nulo!\n");
					pNulo = pNulo + 1;
					break;
				default:
					printf("Voto Inválido!\n");
					pInvalido = pInvalido + 1;
					break;
					
					
			}
			system("pause");
			system("cls");
			main();
			
			break;
		
		case 2:
			system("cls");
			printf("--------APURAÇÃO DE VOTOS----------\n");
			printf("----------Vereadores----------\n");
			printf("João do Frete recebeu %d votos\n", v1);
			printf("Maria da Pamonha recebeu %d votos\n", v2);
			printf("Ze da Farmacia recebeu %d votos\n", v3);
			printf("Votos nulos %d \n", vNulo);
			printf("Votos Inválidos %d\n", vInvalido);
			printf("\n");
			printf("----------Prefeitos----------\n");
			printf("Dr. Zureta recebeu %d votos\n", p1);
			printf("Senhor Gomes recebeu %d votos\n", p2);
			printf("Votos nulos %d \n", pNulo);
			printf("Votos Inválidos %d\n", pInvalido);
			printf("\n");
			system("pause");
			system("cls");
			main();
			break;
			
			
		case 3:
			printf("Programa finalizado!");
			
			break;
		
		default:
			printf("Opção inválida, tente novamente.\n");
			system("pause");
			system("cls");
			main();
			break;
					
		
	}
	
	
	return 0;
}

#include<stdio.h>

int main(void)
{
	//estrutura de dados

	int l, c, linha = 0, coluna = 0, jogador = 1, ganhou = 0, jogadas = 0, opcao = 0;
	char jogo[3][3];
		
	printf("INTRODUCAO AS ORDENS\nDIGITE OS DOIS NUMEROS DA CASA QUE DESEJA JOGAR\nESCOLHA UM DOS NUMEROS DA DIREITA PRIMEIRO, LOGO APOS, O DE CIMA");	
	do
	{
	// inicializador da estrutura de dados
		opcao = 0;
		
		for(l = 0; l < 3; l++)
		{
			for(c = 0; c < 3; c++)
			{
				jogo[l][c] = ' ';
			}
		}
		
		for(l = 0; l  < 3; l++)
		{
			for(c = 0; c < 3; c++);
			{
				jogo[l][c] = ' ';
			}
		}
	
		do
		{
			//imprimir jogo
			printf("\n\n\n\t 0   1   2\n\n");
			for(l = 0; l < 3; l++)
			{
				for(c = 0; c < 3; c++)
				{
					if(c == 0)
					{
						printf("\t");
					}
					printf(" %c ", jogo[l][c]);
					if(c < 2)
					{
						printf("|");
					}
					if(c == 2)
					{
						printf("  %i", l);
					}
				}
				if(l < 2)
				{
					printf("\n\t------------");
				}
				printf("\n");
			}
			
			//ler coordenadas
			do
			{
				printf("\nJogador %i\nDigite o numero da linha e da coluna que deseja jogar: ", jogador);
				scanf("%d", &linha);
				scanf("%d", &coluna);	
			}while(linha < 0|| linha > 2 ||
						coluna < 0|| coluna > 2|| jogo[linha][coluna] != ' ');
			
			
			//salvar coordenadas
			if(jogador == 1)
			{
				jogo[linha][coluna] = '0';
				jogador = 2;
			}
			else
			{
				jogo[linha][coluna] = 'X';
				jogador = 1;
			}
			jogadas++;
			
			//alguem ganhou por linha
			if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
				jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
					jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0')
			{
				printf("\nPARABENS JOGADOR 1 VOCE GANHOU\nVenceu por linha.\n");
				ganhou = 1;
			}
			
			if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
				jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
					jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X')
			{
				printf("\nPARABENS JOGADOR 2 VOCE GANHOU\nVenceu por linha.\n");
					ganhou = 1;
			}
			
			if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
				jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
					jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0')
			{
				printf("\nPARABENS JOGADOR 1 VOCE GANHOU\nVenceu por coluna");
					ganhou = 1;
			}
			
			if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
				jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
					jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X')
			{
				printf("\nPARABENS JOGADOR 2 VOCE GANHOU\nVenceu por coluna");
					ganhou = 1;
			}
			
			//verificar se ganhou na diagonal principal
			
			if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0')
			{
				printf("\nPARABENS JOGADOR 1 VOCE GANHOU\nVenceu pela diagonal principal\n");
					ganhou = 1;
			}
			
			if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X')
			{
				printf("\nPARABENS JOGADOR 2 VOCE GANHOU\nVenceu pela diagonal principal\n");
					ganhou = 1;
			}
			
			//Verificar se ganhou na diagonal secundaria
			if(jogo[2][0] == '0' && jogo[1][1] == '0' && jogo[0][2] == '0')
			{
				printf("\nPARABENS JOGADOR 1 VOCE GANHOU\nVenceu pela diagonal Secundaria\n");
					ganhou = 1;
			}
			
			if(jogo[2][0] == 'X' && jogo[1][1] == 'X' && jogo[0][2] == 'X')
			{
				printf("\nPARABENS JOGADOR 2 VOCE GANHOU\nVenceu pela diagonal Secundaria\n");
					ganhou = 1;
			}
			
		}while(ganhou == 0 && jogadas < 9);
		printf("\n\nDESEJA JOGAR NOVAMENTE? DIGITE 1\nResposta: ");
		scanf("%d", &opcao);
	}while(opcao == 1);
		
		
}

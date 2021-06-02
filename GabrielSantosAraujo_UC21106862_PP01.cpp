// Nome: Gabriel Santos Araujo
// Matrícula: UC21106862
// Curso: Engenharia de Software 

                                                                    //Anexando Bibliotecas:
#include<stdio.h>                                                  //Contém funções de entrada e saída,"printf", "scanf" etc
#include<stdlib.h>                                                //Contém funções de alocação de memória, "cls" etc
#include<locale.h>                                               //Define as configurações locais, linguagem, data, moeda etc
#include<string.h>                                              //Contém as funções 'strlen' e 'strcmp'
#include<ctype.h>                                              //Contém as funções 'toupper' e 'tolower'
                                               
int main(){                                                  //Início do algoritmo: função main
    setlocale(LC_ALL, "Portuguese");                        //Definindo linguagem (português) para uso de acentos e "ç"
    
    char NomeEntrevistado[100], SexoEntrevistado;                                                                                  //Declaração de variáveis 'char'(caracteres)
	int Menu, NumEntrevistados=0, i, IdadeEntrevistado, Voto, StephenCurry=0, KevinDurant=0, LebronJames=0, RusselWestbrook=0;    //Declaração de variáveis 'int' (Números Inteiros)
	int StephenCurryF=0, KevinDurantF=0, LebronJamesF=0, RusselWestbrookF=0, HomensMenores=0;  
	
	printf("- BEM VINDO AO GERENCIADOR DE PESQUISAS NBA -");          //Impressão de texto para o usuário
    
	do{                                                              //'do' 'while', estrutura de repetição que acorrerá uma primeira vez e repetirá caso a condição seja satisfeita. 
    	printf("\n\nPressione (1) para uma nova pesquisa.\n");      //Impressão de texto para o usuário
    	printf("Pressione (2) para encerrar o programa.\n\n");     //Impressão de texto para o usuário
    	scanf("%d", &Menu);                                       //Vincula o valor digitado a uma variável
    	system("cls");                                           //Limpa a tela de saída do usuário
    	
    	switch(Menu){                                          //'switch' 'case', estrutura de menu, um teste lógico de comparação é executado para então assim seguir com uma determinada linha estabelecida  
    		case 1:
    			printf("- JOGADORES EM ANÁLISE -\n\n1 - Stephen Curry\n2 - Kevin Durant\n3 - Lebron James\n4 - Russel Westbrook\n\n");    //Impressão de texto para o usuário
    			system("pause");                              //Pausa o sistema                     
    			system("cls");                               //Limpa a tela de saída do usuário
				
				do{                                                                                                            //'do' 'while', estrutura de repetição
    				printf("Informe o número total de entrevistados: \n");                                                    //Impressão de texto para o usuário
    				scanf("%d", &NumEntrevistados);                                                                          //Vincula o valor digitado a uma variável
    				fflush(stdin);                                                                                          //limpa o buffer de memória
    				if (NumEntrevistados<100 || NumEntrevistados>300 )                                                     //'if', estrutura de 'se', executará se condição for satisfeita
    				   printf("\nNúmero de entrevistados inválido!\nPor favor, digite um valor entre 100 e 300.\n"); 	  //Impressão de texto para o usuário			   
				  } while(NumEntrevistados<100 || NumEntrevistados>300 );
				system("cls");                                                       //Limpa a tela de saída do usuário
				  
				for(i=0; i<NumEntrevistados; i++){                                   //'for', Estrutura de repetição, repetirá até a condição ser satisfeita  
					do{                                                             //'do' 'while', estrutura de repetição
						printf("Digite o nome do %dº entrevistado: \n", i+1);      //Impressão de texto para o usuário com acréscimo de uma unidade a variável 'i'
						fgets(NomeEntrevistado, 100, stdin);                      //Estrutura para que uma string receba espaços em branco 
						fflush(stdin);                                           //limpa o buffer de memória
						if (strlen(NomeEntrevistado) <=3)                       //'if', estrutura de 'se', executará se condição for satisfeita
						    printf("\nNome inválido!\nPor favor, digite o nome completo.\n");      //Impressão de texto para o usuário
					  } while(strlen(NomeEntrevistado)<=3);
					  
				    do{                                                                            //'do' 'while', estrutura de repetição
				    	printf("Informe sua idade: \n");                                          //Impressão de texto para o usuário
				    	scanf("%d", &IdadeEntrevistado);                                         //Vincula o valor digitado a uma variável
				    	fflush(stdin);                                                          //limpa o buffer de memória
				    	if (IdadeEntrevistado<12 || IdadeEntrevistado>100)                     //'if', estrutura de 'se', executará se condição for satisfeita
				    	   printf("\nIdade inválida!\nPor favor, digite um valor entre 12 e 100.\n");	   //Impressão de texto para o usuário
					  } while(IdadeEntrevistado<12 || IdadeEntrevistado>100);
					  
					do{                                                                         //'do' 'while', estrutura de repetição
						printf("Informe seu sexo, 'F' ou 'M': \n");                            //Impressão de texto para o usuário
						scanf("%c", &SexoEntrevistado);                                       //Vincula o valor digitado a uma variável
						fflush(stdin);                                                       //limpa o buffer de memória
						SexoEntrevistado = toupper(SexoEntrevistado);                       //Converte o caracter em maiúsculo
						if (SexoEntrevistado != 'M' && SexoEntrevistado != 'F')            //'if', estrutura de 'se', executará se condição for satisfeita
						   printf("\nSexo Inválido!\n");					              //Impressão de texto para o usuário
					  } while(SexoEntrevistado != 'M' && SexoEntrevistado != 'F'); 
				
				    do{                                                                         //'do' 'while', estrutura de repetição
				    	printf("Em quem sera seu voto ?\n");                                   //Impressão de texto para o usuário
				    	scanf("%d", &Voto);                                                   //Vincula o valor digitado a uma variável
				    	fflush(stdin);                                                       //limpa o buffer de memória
				    	if (Voto<1 || Voto>4)                                               //'if', estrutura de 'se', executará se condição for satisfeita
				    	   printf("\nVoto Inválido!\nPor favor, vote entre 1 e 4.\n");     //Impressão de texto para o usuário
					  } while (Voto<1 || Voto>4);
				    system("cls");                                                        //Limpa a tela de saída do usuário
				    
				    {if(Voto==1)                   //'if', estrutura de 'se', executará se condição for satisfeita, e se sim, adicionará mais uma unidade a variável (++)                                       
				    StephenCurry++;               
				    else if(Voto==2)              //'else if', estrutura 'se não', executará se a condição da estrutura anterior não for satisfeita, e repetirá a função 'if'
				    KevinDurant++;
				    else if(Voto==3)
				    LebronJames++;
				    else if(Voto==4)
				    RusselWestbrook++;}
				    
				    {if(Voto==1 && SexoEntrevistado=='F')                 //'if', estrutura de 'se', executará se condição for satisfeita, e se sim, adicionará mais uma unidade a variável (++) 
				    StephenCurryF++;
				    else if(Voto==2 && SexoEntrevistado=='F')            //'else if', estrutura 'se não', executará se a condição da estrutura anterior não for satisfeita, e repetirá a função 'if'
				    KevinDurantF++;
				    else if(Voto==3 && SexoEntrevistado=='F')
				    LebronJamesF++;
				    else if(Voto==4 && SexoEntrevistado=='F')
				    RusselWestbrookF++;}
				    
				    {if(SexoEntrevistado=='M' && IdadeEntrevistado<18)     //'if', estrutura de 'se', executará se condição for satisfeita, e se sim, adicionará mais uma unidade a variável (++) 
				    HomensMenores++;
					}   			
				}  
			    system("cls");                                             //Limpa a tela de saída do usuário
				
				printf("- RELAÇÃO FINAL DE VOTOS -\n\n");
				printf("- Stephen Curry -\nTOTAL DE VOTOS = %d\nVOTOS DO PÚBLICO FEMININO = %d\n\n", StephenCurry, StephenCurryF);               //Impressão de texto para o usuário mais retorno do valor de variáveis 
				printf("- Kevin Durant -\nTOTAL DE VOTOS = %d\nVOTOS DO PÚBLICO FEMININO = %d\n\n", KevinDurant, KevinDurantF);
				printf("- Lebron James -\nTOTAL DE VOTOS = %d\nVOTOS DO PÚBLICO FEMININO = %d\n\n", LebronJames, LebronJamesF);
				printf("- Russel Westbrook -\nTOTAL DE VOTOS = %d\nVOTOS DO PÚBLICO FEMININO = %d\n\n\n", RusselWestbrook, RusselWestbrookF);
				printf("TOTAL DE ENTREVISTADOS: %d\n", NumEntrevistados);
				printf("TOTAL DE HOMENS MENORES DE 18 ANOS: %d\n\n", HomensMenores);
				system("pause");                                         //Pausa o sistema
				
				break;                                                  //Interromper a execução da sequência de comandos.
			
			case 2:
			    printf("Programa encerrado.\nAgradecemos a preferência =)\n\n");   //Impressão de texto para o usuário
				system("pause");                                        //Pausa o sistema
				return 0;	                                            //Retorno da Função
		}
		fflush(stdin);                                                 //limpa o buffer de memória
	}while(1);
}

//Uso de variáveis de fácil entendimento e coesas; Código estruturado e organizado; E programa final clear, com uso eficiente de 'pause' e 'cls' 
//seguindo deste modo práticas recomendadas pelo livro 'Código Limpo'.

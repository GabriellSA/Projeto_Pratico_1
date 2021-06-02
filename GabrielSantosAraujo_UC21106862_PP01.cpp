// Nome: Gabriel Santos Araujo
// Matr�cula: UC21106862
// Curso: Engenharia de Software 

                                                                    //Anexando Bibliotecas:
#include<stdio.h>                                                  //Cont�m fun��es de entrada e sa�da,"printf", "scanf" etc
#include<stdlib.h>                                                //Cont�m fun��es de aloca��o de mem�ria, "cls" etc
#include<locale.h>                                               //Define as configura��es locais, linguagem, data, moeda etc
#include<string.h>                                              //Cont�m as fun��es 'strlen' e 'strcmp'
#include<ctype.h>                                              //Cont�m as fun��es 'toupper' e 'tolower'
                                               
int main(){                                                  //In�cio do algoritmo: fun��o main
    setlocale(LC_ALL, "Portuguese");                        //Definindo linguagem (portugu�s) para uso de acentos e "�"
    
    char NomeEntrevistado[100], SexoEntrevistado;                                                                                  //Declara��o de vari�veis 'char'(caracteres)
	int Menu, NumEntrevistados=0, i, IdadeEntrevistado, Voto, StephenCurry=0, KevinDurant=0, LebronJames=0, RusselWestbrook=0;    //Declara��o de vari�veis 'int' (N�meros Inteiros)
	int StephenCurryF=0, KevinDurantF=0, LebronJamesF=0, RusselWestbrookF=0, HomensMenores=0;  
	
	printf("- BEM VINDO AO GERENCIADOR DE PESQUISAS NBA -");          //Impress�o de texto para o usu�rio
    
	do{                                                              //'do' 'while', estrutura de repeti��o que acorrer� uma primeira vez e repetir� caso a condi��o seja satisfeita. 
    	printf("\n\nPressione (1) para uma nova pesquisa.\n");      //Impress�o de texto para o usu�rio
    	printf("Pressione (2) para encerrar o programa.\n\n");     //Impress�o de texto para o usu�rio
    	scanf("%d", &Menu);                                       //Vincula o valor digitado a uma vari�vel
    	system("cls");                                           //Limpa a tela de sa�da do usu�rio
    	
    	switch(Menu){                                          //'switch' 'case', estrutura de menu, um teste l�gico de compara��o � executado para ent�o assim seguir com uma determinada linha estabelecida  
    		case 1:
    			printf("- JOGADORES EM AN�LISE -\n\n1 - Stephen Curry\n2 - Kevin Durant\n3 - Lebron James\n4 - Russel Westbrook\n\n");    //Impress�o de texto para o usu�rio
    			system("pause");                              //Pausa o sistema                     
    			system("cls");                               //Limpa a tela de sa�da do usu�rio
				
				do{                                                                                                            //'do' 'while', estrutura de repeti��o
    				printf("Informe o n�mero total de entrevistados: \n");                                                    //Impress�o de texto para o usu�rio
    				scanf("%d", &NumEntrevistados);                                                                          //Vincula o valor digitado a uma vari�vel
    				fflush(stdin);                                                                                          //limpa o buffer de mem�ria
    				if (NumEntrevistados<100 || NumEntrevistados>300 )                                                     //'if', estrutura de 'se', executar� se condi��o for satisfeita
    				   printf("\nN�mero de entrevistados inv�lido!\nPor favor, digite um valor entre 100 e 300.\n"); 	  //Impress�o de texto para o usu�rio			   
				  } while(NumEntrevistados<100 || NumEntrevistados>300 );
				system("cls");                                                       //Limpa a tela de sa�da do usu�rio
				  
				for(i=0; i<NumEntrevistados; i++){                                   //'for', Estrutura de repeti��o, repetir� at� a condi��o ser satisfeita  
					do{                                                             //'do' 'while', estrutura de repeti��o
						printf("Digite o nome do %d� entrevistado: \n", i+1);      //Impress�o de texto para o usu�rio com acr�scimo de uma unidade a vari�vel 'i'
						fgets(NomeEntrevistado, 100, stdin);                      //Estrutura para que uma string receba espa�os em branco 
						fflush(stdin);                                           //limpa o buffer de mem�ria
						if (strlen(NomeEntrevistado) <=3)                       //'if', estrutura de 'se', executar� se condi��o for satisfeita
						    printf("\nNome inv�lido!\nPor favor, digite o nome completo.\n");      //Impress�o de texto para o usu�rio
					  } while(strlen(NomeEntrevistado)<=3);
					  
				    do{                                                                            //'do' 'while', estrutura de repeti��o
				    	printf("Informe sua idade: \n");                                          //Impress�o de texto para o usu�rio
				    	scanf("%d", &IdadeEntrevistado);                                         //Vincula o valor digitado a uma vari�vel
				    	fflush(stdin);                                                          //limpa o buffer de mem�ria
				    	if (IdadeEntrevistado<12 || IdadeEntrevistado>100)                     //'if', estrutura de 'se', executar� se condi��o for satisfeita
				    	   printf("\nIdade inv�lida!\nPor favor, digite um valor entre 12 e 100.\n");	   //Impress�o de texto para o usu�rio
					  } while(IdadeEntrevistado<12 || IdadeEntrevistado>100);
					  
					do{                                                                         //'do' 'while', estrutura de repeti��o
						printf("Informe seu sexo, 'F' ou 'M': \n");                            //Impress�o de texto para o usu�rio
						scanf("%c", &SexoEntrevistado);                                       //Vincula o valor digitado a uma vari�vel
						fflush(stdin);                                                       //limpa o buffer de mem�ria
						SexoEntrevistado = toupper(SexoEntrevistado);                       //Converte o caracter em mai�sculo
						if (SexoEntrevistado != 'M' && SexoEntrevistado != 'F')            //'if', estrutura de 'se', executar� se condi��o for satisfeita
						   printf("\nSexo Inv�lido!\n");					              //Impress�o de texto para o usu�rio
					  } while(SexoEntrevistado != 'M' && SexoEntrevistado != 'F'); 
				
				    do{                                                                         //'do' 'while', estrutura de repeti��o
				    	printf("Em quem sera seu voto ?\n");                                   //Impress�o de texto para o usu�rio
				    	scanf("%d", &Voto);                                                   //Vincula o valor digitado a uma vari�vel
				    	fflush(stdin);                                                       //limpa o buffer de mem�ria
				    	if (Voto<1 || Voto>4)                                               //'if', estrutura de 'se', executar� se condi��o for satisfeita
				    	   printf("\nVoto Inv�lido!\nPor favor, vote entre 1 e 4.\n");     //Impress�o de texto para o usu�rio
					  } while (Voto<1 || Voto>4);
				    system("cls");                                                        //Limpa a tela de sa�da do usu�rio
				    
				    {if(Voto==1)                   //'if', estrutura de 'se', executar� se condi��o for satisfeita, e se sim, adicionar� mais uma unidade a vari�vel (++)                                       
				    StephenCurry++;               
				    else if(Voto==2)              //'else if', estrutura 'se n�o', executar� se a condi��o da estrutura anterior n�o for satisfeita, e repetir� a fun��o 'if'
				    KevinDurant++;
				    else if(Voto==3)
				    LebronJames++;
				    else if(Voto==4)
				    RusselWestbrook++;}
				    
				    {if(Voto==1 && SexoEntrevistado=='F')                 //'if', estrutura de 'se', executar� se condi��o for satisfeita, e se sim, adicionar� mais uma unidade a vari�vel (++) 
				    StephenCurryF++;
				    else if(Voto==2 && SexoEntrevistado=='F')            //'else if', estrutura 'se n�o', executar� se a condi��o da estrutura anterior n�o for satisfeita, e repetir� a fun��o 'if'
				    KevinDurantF++;
				    else if(Voto==3 && SexoEntrevistado=='F')
				    LebronJamesF++;
				    else if(Voto==4 && SexoEntrevistado=='F')
				    RusselWestbrookF++;}
				    
				    {if(SexoEntrevistado=='M' && IdadeEntrevistado<18)     //'if', estrutura de 'se', executar� se condi��o for satisfeita, e se sim, adicionar� mais uma unidade a vari�vel (++) 
				    HomensMenores++;
					}   			
				}  
			    system("cls");                                             //Limpa a tela de sa�da do usu�rio
				
				printf("- RELA��O FINAL DE VOTOS -\n\n");
				printf("- Stephen Curry -\nTOTAL DE VOTOS = %d\nVOTOS DO P�BLICO FEMININO = %d\n\n", StephenCurry, StephenCurryF);               //Impress�o de texto para o usu�rio mais retorno do valor de vari�veis 
				printf("- Kevin Durant -\nTOTAL DE VOTOS = %d\nVOTOS DO P�BLICO FEMININO = %d\n\n", KevinDurant, KevinDurantF);
				printf("- Lebron James -\nTOTAL DE VOTOS = %d\nVOTOS DO P�BLICO FEMININO = %d\n\n", LebronJames, LebronJamesF);
				printf("- Russel Westbrook -\nTOTAL DE VOTOS = %d\nVOTOS DO P�BLICO FEMININO = %d\n\n\n", RusselWestbrook, RusselWestbrookF);
				printf("TOTAL DE ENTREVISTADOS: %d\n", NumEntrevistados);
				printf("TOTAL DE HOMENS MENORES DE 18 ANOS: %d\n\n", HomensMenores);
				system("pause");                                         //Pausa o sistema
				
				break;                                                  //Interromper a execu��o da sequ�ncia de comandos.
			
			case 2:
			    printf("Programa encerrado.\nAgradecemos a prefer�ncia =)\n\n");   //Impress�o de texto para o usu�rio
				system("pause");                                        //Pausa o sistema
				return 0;	                                            //Retorno da Fun��o
		}
		fflush(stdin);                                                 //limpa o buffer de mem�ria
	}while(1);
}

//Uso de vari�veis de f�cil entendimento e coesas; C�digo estruturado e organizado; E programa final clear, com uso eficiente de 'pause' e 'cls' 
//seguindo deste modo pr�ticas recomendadas pelo livro 'C�digo Limpo'.

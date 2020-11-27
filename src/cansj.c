#include "proto.h"


void run(void){
	int partie_finie = 0;
	int count = 0;
	char premier[30] , 									deuxieme[30];
	int sym[NOMBRE_CASE] = {'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};

	system("cls");
	printf("-----------bienvenu-----------\n");
	saisie_nom(premier , deuxieme);
	

	af(sym);

	while((partie_finie <= 9)){
		
		if(count % 2 == 0){
			met(sym , count , premier);
		}
		else
			met(sym , count , deuxieme);

		system("cls");
		af(sym);

		if(count % 2 == 0){
			check(sym , premier);
		}
		else{
			check(sym , deuxieme);
		}
				
		count++;	
		partie_finie++;
		
		if(partie_finie == 10){
			printf("match null\n");
			goto again;
		}
	}

	again :

		//remettre a zero les cases prisent
		if(partie_finie == 5){
			partie_finie = 0;
		}
		if(partie_finie == 6){
			partie_finie = 0;
		}
		if(partie_finie == 7){
			partie_finie = 0;
		}
		if(partie_finie == 8){
			partie_finie = 0;
		}
		if(partie_finie == 10){
			partie_finie = 0;
		}

		rejouer();
}

/*----------------------------------------------------------------------------------------------*/

void met(int tab[NOMBRE_CASE] , int compte , char name[30]){
	int value;

	printf("entrer votre choix %s\n", name);
	scanf("%d" , &value);

	while(value < 0 || value > 9){
		printf("veuillez entrez un nombre entre 0 a 9\n");
		printf("entrer votre choix %s\n", name);
		scanf("%d" , &value);				
	}

	if(compte % 2 == 0){
		if(value == 1){
			if(tab[0] == 'o' || tab[0] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 1){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 1){
						break;
					}
				}
			}
			else
				tab[0] = 'x';

		}
			
		if(value == 2){
			if(tab[1] == 'o' || tab[1] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 2){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 2){
						break;
					}
				}
			}
			else
				tab[1] = 'x';
		}
			

		if(value == 3){
			if(tab[2] == 'o' || tab[2] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 3){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 3){
						break;
					}
				}
			}
			else	
				tab[2] = 'x';
		}
			

		if(value == 4){
			if(tab[3] == 'o' || tab[3] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 4){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 4){
						break;
					}
				}
			}
			else
				tab[3] = 'x';
		}
			

		if(value == 5){
			if(tab[4] == 'o' || tab[4] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 5){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 5){
						break;
					}
				}
			}
			else
				tab[4] = 'x';
		}
			

		if(value == 6){
			if(tab[5] == 'o' || tab[5] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 6){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 6){
						break;
					}
				}
			}
			else
				tab[5] = 'x';
		}
			

		if(value == 7){
			if(tab[6] == 'o' || tab[6] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 7){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 7){
						break;
					}
				}
			}
			else
				tab[6] = 'x';
		}
			

		if(value == 8){
			if(tab[7] == 'o' || tab[7] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 8){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 8){
						break;
					}
				}
			}
			else
				tab[7] = 'x';
		}
			

		if(value == 9){
			if(tab[8] == 'o' || tab[8] == 'x'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 9){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 9){
						break;
					}
				}
			}
			else
				tab[8] = 'x';
		}
			
	}

	else{
		if(value == 1){
			if(tab[0] == 'x' || tab[0] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 1){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 1){
						break;
					}
				}
			}
			else
				tab[0] = 'o';
		}
			

		if(value == 2){
			if(tab[1] == 'x' || tab[1] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 2){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 2){
						break;
					}
				}
			}
			else
				tab[1] = 'o';
		}
			

		if(value == 3){
			if(tab[2] == 'x' || tab[2] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 3){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 3){
						break;
					}
				}
			}
			else	
				tab[2] = 'o';
		}
			

		if(value == 4){
			if(tab[3] == 'x' || tab[3] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 4){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 4){
						break;
					}
				}
			}
			else
				tab[3] = 'o';
		}
			

		if(value == 5){
			if(tab[4] == 'x' || tab[4] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 5){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 5){
						break;
					}
				}
			}
			else
				tab[4] = 'o';
		}
			

		if(value == 6){
			if(tab[5] == 'x' || tab[5] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 6){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 6){
						break;
					}
				}
			}
			else
				tab[5] = 'o';
		}
			

		if(value == 7){
			if(tab[6] == 'x' || tab[6] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 7){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 7){
						break;
					}
				}
			}
			else
				tab[6] = 'o';
		}
			

		if(value == 8){
			if(tab[7] == 'x' || tab[7] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 8){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 8){
						break;
					}
				}
			}
			else
				tab[7] = 'o';
		}
			

		if(value == 9){
			if(tab[8] == 'x' || tab[8] == 'o'){
				printf("case deja prise\nchoisissez :  ");
				scanf("%d" , &value);

				while(value == 9){
					printf("case deja prise\nchoisissez :  ");
					scanf("%d" , &value);
					if(value != 9){
						break;
					}
				}
			}
			else
				tab[8] = 'o';
		}
			
	}
}

/*----------------------------------------------------------------------------------------------*/

void saisie_nom(char first[30] , char second[30]){
	printf("quel est votre nom ?\n");
	scanf("%s" , first);
	printf("vous serez le \'x\' dans le jeu %s\n", first);

	printf("quel est votre nom\n");
	scanf("%s" , second);
	printf("vous serez le \'o\' dans le jeu %s\n" , second);
}

/*----------------------------------------------------------------------------------------------*/

void rejouer(void){
	char rep;

	printf("vous voulez encore jouer\nSi oui appuyez sur \'o\' et \'n\' pour quitter\n");
	scanf("%s" , &rep);

	if(rep == 'o' || rep == 'O'){
		run();
	}
	else{
		printf("Au revoir!!\n");
		exit(1);
	}

}
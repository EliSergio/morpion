#include "proto.h"

int check(int tab[NOMBRE_CASE] , char name[30]){

	//tester ligne

	if(tab[0] == 'x' && tab [1] == 'x' && tab[2] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
	}
	else if(tab[0] == 'o' && tab [1] == 'o' && tab[2] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
	}

	if(tab[3] == 'x' && tab [4] == 'x' && tab[5] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
	}
	else if(tab[3] == 'o' && tab [4] == 'o' && tab[5] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
	}

	if(tab[6] == 'x' && tab [7] == 'x' && tab[8] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}
	else if(tab[6] == 'o' && tab [7] == 'o' && tab[8] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}

	//tester colonne

	if(tab[0] == 'x' && tab [3] == 'x' && tab[6] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}
	else if(tab[0] == 'o' && tab [3] == 'o' && tab[6] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}

	if(tab[1] == 'x' && tab [4] == 'x' && tab[7] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
	}
	else if(tab[1] == 'o' && tab [4] == 'o' && tab[7] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}

	if(tab[2] == 'x' && tab [5] == 'x' && tab[8] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}
	else if(tab[2] == 'o' && tab [5] == 'o' && tab[8] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}

	//tester diagonale

	if(tab[0] == 'x' && tab [4] == 'x' && tab[8] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}
	else if(tab[0] == 'o' && tab [4] == 'o' && tab[8] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
		
	}

	if(tab[6] == 'x' && tab [4] == 'x' && tab[2] == 'x'){
		printf("gagner par %s\n" , name);
		rejouer();
	}
	else if(tab[6] == 'o' && tab [4] == 'o' && tab[2] == 'o'){
		printf("gagner par %s\n" , name);
		rejouer();
	}

	return 0;
}
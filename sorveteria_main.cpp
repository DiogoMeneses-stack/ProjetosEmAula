#include <iostream>


int main(int argc, char** argv) {
	int i;
	
	do {
		printf("\n Digite um numero do sabor \n");
		
		printf("\t (1) ...flocos \n");
		printf("\t (2) ...frutas \n");
		printf("\t (3) ...morango \n");
		
		scanf("%d", &i);
	} while ((i <1) || (i>3));
	
	switch(i){
		case1:
			printf("\t\t Escolheu flocos");
			break;
		case2:
			printf("\t\t voce escolheu frutas ");
			break;
		case3:
			printf("\t\t voce escolheu morango.");
			break;
	}
	
	return 0;
}

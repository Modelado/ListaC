#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(void){
	
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 10; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	struct node_struct* l2 = inversa(l);	
	printf("Tamaño de la lista de forma iterativa: %i\n", len_iter(l));
	printf("Tamaño de la lista de forma recursiva: %i\n", len_rec(l));
	printf("Elemento maximo: %i\n", max(l));
	printf("La lista inversa es: \n" );
	print_list(l2);
	printf("\n");
	printf("La lista es: \n" );
	print_list(l);
	printf("\n");

	struct node_struct * next;

	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}
	while(l2 != NULL){
		next = l2->next;
		free(l2);
		l2 = next;
	}

	return 0;
}

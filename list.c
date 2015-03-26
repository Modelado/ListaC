#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

void deleteNode(struct node_struct *n){
	free(n);
	}

void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
		}	
	}
/* Longitud de la lista iterativamente*/
int len_iter(struct node_struct* n){
	int contador;
	contador = 0;
	while(n != NULL){
			++contador;
			n = n->next;
		}
	return contador;	
	}
/*Longitud de la lista recursivamente*/
int len_rec(struct node_struct* n){
	if(n == NULL){
		return 0;
	}else{
		return 1 + len_rec(n->next);
		}
	}

int max(struct node_struct* n){
	int maximo;
	maximo = n->value;
	while(n != NULL){
		if(n->value > maximo)
			maximo = n->value;
			n=n->next;			
		}
		return maximo;	
	}	

struct node_struct* inversa(struct node_struct* n){
	struct node_struct* inversa = NULL;
	struct node_struct* nodito; 
	while(n != NULL){	
		nodito = newNode(n->value);
		nodito->next = inversa;
		inversa = nodito;
		n = n->next;
		}
		return inversa;
}	}


	


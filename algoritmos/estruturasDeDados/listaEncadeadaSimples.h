/*
Implementação de lista encadeada simples 
SEM head
*/

#include <stdlib.h>

typedef struct elto Elto;
typedef struct list List;

struct elto {
    int content;
    Elto* next;
};


struct list {
    int numEltos;
    Elto* firstElto;
};

Elto* newElto(int content);
Elto* delElto(Elto* ant);
List* newListVazia();
bool isEmptyList(List* lista);


/*
A função newElto recebe os valores que compõem um nó e
cria um nó com esses valores e retorna um ponteiro para o nó criado
*/
Elto* newElto(int content){
    Elto* node = (Elto*)malloc(1*sizeof(Elto));
    if(node){
        node->content = content;
        node->next = NULL;
    }
    return node;
}

/*
A função delElto recebe um nó e exclui o nó logo à frente
e retorna o ponteiro para esse nó anterior ou, 
no caso de não haver nó à frente, ele exclui o próprio nó
e retorna NULL
*/
Elto* delElto(Elto* ant){    
    Elto* temp = ant->next->next;
    free(ant->next);
    ant->next = temp;
    return ant;
}

/*
A função newListVazia cria uma lista vazia e
retorna o ponteiro para a lista criada
*/
List* newListVazia(){
    List* lista = (List*)malloc(1*sizeof(List));
    lista->numEltos = 0;
    lista->firstElto = NULL;
    return lista;
}
/*
verifica se a lista está vazia
*/
bool isEmptyList(List* lista){
    bool vazio;
    vazio = lista->numEltos == 0 ? true : false;
    return vazio;
}


/*
Recebe um ponteiro para uma lista, um ponteiro para uma célula e 
um inteiro para a posição da célula anterior à célula a ser inserida
*/
void insert(List* lista, Elto* cell, int ant){
    Elto* temp = seek(lista, ant);
    if(ant = 0){
        lista->firstElto = cell;
        
    }
    lista->numEltos++;
}

/*
Recebe um ponteiro para uma lista e um inteiro pos que significa uma posição
Retorna o ponteiro da célula que está na posição pos da lista
*/
Elto* seek(List* lista, int pos){
    Elto* alvo = list->firstElto;
    int contador = 0;
    while(contador < pos){
        contador++;
        alvo = alvo->next;
    }
    return alvo;
}
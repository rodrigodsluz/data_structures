//Libraries in the system
#include <stdio.h>
#include <stdlib.h>
//Library in the project
#include "adt.h"

//main function
int main(){
    
    BinaryTree *root;
    int choice, value, ok, pos;

    //Option menu to execute operations about the Binary Tree
    do{
        printf("\n\nOptions Menu:");
        printf("\n1 - Create Binary Tree");
        printf("\n2 - Free Binary Tree");
        printf("\n3 - Insert node in Binary Tree");
        printf("\n4 - Remove nodes of Binary Tree");
        printf("\n5 - Consultar nó na árvore binária");
        printf("\n6 - Percurso pré-ordem");
        printf("\n7 - Percurso em-ordem");
        printf("\n8 - Percurso pós-ordem");
        printf("\n9 - Altura da árvore binária");
        printf("\n10 - Total de nós");
        printf("\n11 - Sair");
        printf("\nOpção: ");
        scanf("%d", &choice);

        switch(choice){

        case 1: 

            root = createBinaryTree();

            if(root != NULL){
                printf("\n Binary tree successfully created!");
            }else{
                printf("\n Binary tree wasn't created!");
            }

            break;


        case 2: 
            
            // Free Binary Tree
            ok = freeBinaryTree(root);

            if(ok){
                printf("\n Binary Tree successfully deallocated!");
            }else{
                printf("\n Binary Tree wasn't deallocated!");
            }
            break;

        case 3:

            // Insert node in Binary Tree  
            printf("\n Enter the value: ");
            scanf("%d", &value);      

            ok = insertNode(root, value);

            if(ok){
                printf("\n Successful insertion!");
            }else{
                printf("\n Failed!");
            }

            break;

        case 4:

            // remove node with determined value
            printf("\n Enter the value to be removed: ");
            scanf("%d", &value; 

            ok = removeNode(root, value);

            if(ok){
                printf("\n Successfully remotion!");
            }else{
                printf("\n Failed!");
            }

            break;

        case 5:

            // busca elemento pelo valor
            printf("\n Valor a ser buscado: ");
            scanf("%d", &valor); 

            ok = consultar_arvore_binaria(raiz, valor);

            if(ok == 1){
            printf("\n Busca realizada com sucesso!");
            }else{
            printf("\n Valor não encontrado na árvore!");
            }


            break;

        case 6:    
            // imprime percurso pré-ordem
            percorrer_pre_ordem_arvore_binaria(raiz);
            break;

        case 7:   
            // imprime percurso em-ordem 
            percorrer_em_ordem_arvore_binaria(raiz);
            break;

        case 8:    
            // imprime percurso pós-ordem
            percorrer_pos_ordem_arvore_binaria(raiz);    
            break;


        case 9:
            // imprime a altura da árvore binária
            printf("%d\n", altura_arvore_binaria(raiz));
            break;
        
            break;

        case 10:
            // imprime o número total de nós na árvore binária
            printf("%d\n", quantidade_nos_arvore_binaria(raiz));
            break;
                
        case 11:

            // libera memória e finaliza programa
            liberar_arvore_binaria(raiz);
            printf("\nFinalizando...");
            break;

        default: 
            printf("\nOpção inválida!");
            break;
        }

    }while(choice!= 11);

  return 0;
}
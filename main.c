#include<stdio.h>
#include<string.h>
#include"fonction.h"
int main()
{
   bv bv1= {12479357,8,25,25737957,"Elghazela"},bv2= {11137279,6,30,13836958,"Tunis"},bv3={10572837,5,20,12368040,"Ariana"};
   int x=ajouter("bv2.txt", bv1);
	 x=ajouter("bv2.txt", bv2);
//x=ajouter("bv2.txt", bv3);
    if(x==1)
        printf("\najout  du bureau de vote avec succés  ");
    else printf("\nechec ajout");
  
  x=modifier("bv2.txt",12479357,bv2);

    if(x==1)
        printf("\nModification du bureau de vote avec succés ");
    else printf("\nechec Modification");
    x=supprimer("bv2.txt",12479357);
    if(x==1)
        printf("\nSuppression du bureau de vote avec succés ");
    else printf("\nechec Suppression");
    bv3=chercher("bv2.txt",12479357 );
    if(bv3.idbureau==-1)
        printf("introuvable");
    return 0;
}

// test of new commit
#include<stdio.h>
#include<stdlib.h>
#include"fonction.h"
int main()
{
election nouv;

election e1={12,1,15,20,22,12,2000};
election e2={10,2,16,5,27,12,1996},e3;
election e4={20,5,18,9,12,5,1996};
int x;

printf("ajouter une nouvelle election");

x=ajouterelection("fileelection.txt",e2);
if(x==1)
        printf("\najout election avec succees!!!!!!!!!");
    else printf("\nechec ajout");

 e2=chercherelection("fileelection.txt",12);
    if(e2.id==-1)
    {
        printf("introuvable");
    }
    else if (e2.id!=-1)
     {
         printf("existe!!!\n");
    }


 x=modifierelection(10, e4,"fileelection.txt");
    if(x==1)
        printf("\nModification de election avec succes");
    else printf("\nechec Modification");
 x=supprimerelection(12,"fileelection.txt");
    if(x==1)
        printf("\nSuppression de election avec succes");
    else printf("\nechec Suppression");
    e3=chercherelection("fileelection",1);
    if(e3.id==-1)
        printf("intovable");
    return 0;
}


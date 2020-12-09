#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



//les structures
//structure adresse
typedef struct adress{
char quartier[20];
char rue[20];
int zip;
}adress;


//structure des maladie chronique
typedef struct mldchr{
char nom;
struct mldchr *next;
}mldchr;


//structure contacteur
typedef struct pctc{
char nom[20];
char prenom[20];
char CIN[20];
char test;
struct pctc *next;
}pctc;
typedef pctc* listc;


//structure patient
typedef struct patient{
char nom[20];
char prenom[20];
char CIN[20];
mldchr *maladies;
adress *adrs;
pctc *ctc;
struct patient *next;
char contm;
char etat;
char Ntel[20];
}patient;
typedef patient* listp;

typedef struct hopital{
char nom[20];
adress *adrs;
patient* listdespatient;
int capacity;
int current;
int reacapacity;
int reacurrent;
int dealcapacity;
int dealcurrent;
struct hopital* next;
}hopital;
typedef hopital* listh;

typedef struct lieuc{
char nom[20];
adress* adrs;
char type;
int capacity;
int current;
listc* lc;
struct lieuc* next;
}lieuc;
typedef lieuc* listl;

//fonctions d'ajout des patients**********************************************************************************************
void ajouterpatient(listp *LP,int* nbr,listc* LC){
int choice;
char et;
mldchr* listmld=NULL;
pctc* listctc=NULL;
patient* nouveau=(patient*)malloc(sizeof(patient));
nouveau->adrs=(adress*)malloc(sizeof(adress));


    system("color 4F");
    printf("\n\n");
    printf("\t\t\t");
    cprintf("Donner Le Nom Du Patient:");
    printf("\t\t\t\t\t\t\t");
    gets(nouveau->nom);
    printf("\n");
    printf("\t\t\t");
    cprintf("    donner le prenom:    ");
    printf("\t\t\t\t\t\t\t");
    gets(nouveau->prenom);
    printf("\n");
    printf("\t\t\t");
    cprintf("     donner le CIN:      ");
    printf("  \t\t\t\t\t\t\t");
    gets(nouveau->CIN);
    //partie d'ajout de ladresse
    printf("\t\t\n\t\t\t");
    cprintf("    Donner Le Quartier:   ");
    printf("\t\t\t\t\t\t\t");
    gets(nouveau->adrs->quartier);
    printf("\t\t\n\t\t\t");
    cprintf("       Donner Le Rue:     ");
    printf("\t\t\t\t\t\t\t");
    gets(nouveau->adrs->rue);
    printf("\t\t\t\t\t");
     printf("\t\t\n\t\t\t");
    cprintf("     Donner Le NumTel:    ");
    printf("\t\t\t\t\t\t\t");
    gets(nouveau->Ntel);
    printf("\t\t\n\t\t\t");
    cprintf("     Donner Le ZipCode:   ");
    printf("\t\t\t\t\t\t\t");
    scanf("%d",&nouveau->adrs->zip);
    printf("\t\t\n\t\t\t");

    //partie du choix si le patient a une maladie chronique
     do{
         clrscr();
         system("color 4F");
         printf("\n\t\t");
         cprintf("Est Ce Que Le Patient A Des Maladie Chronique");
         printf("\t\t\t\t\t");
         cprintf("        Tappez 1 Si Oui Et 0 Si Non          ");
         printf("\t\t\t\t");
         printf("\t\t\t     ");
         scanf("%d",&choice);
     }while((choice!=1) && (choice!=0));
//partie des maladie chronique
     if(choice==1){
       //
        mldchr* ptr=NULL;
        printf("\t\t");
        cprintf("     Est ce que la patient A le cancer       ");
        printf("\t\t\t\t\t");
        cprintf("        Tappez 1 Si Oui Et 0 Si Non          ");
        printf("\t\t\t       ");
            do{
            printf("\t\t\t\t     ");
            scanf("%d",&choice);
            }while((choice!=1) && (choice!=0));
                 //ajout du cancer a la liste des maladiechro

                 if(choice==1){
                   if(listmld==NULL){
                    listmld=(mldchr*)malloc(sizeof(mldchr));
                    listmld->nom='c';
                    listmld->next=NULL;
                   }
                   else{
                    ptr=listmld;
                   while(ptr->next!=NULL){
                    ptr=ptr->next;
                   }
                    ptr->next=(mldchr*)malloc(sizeof(mldchr));
                    ptr->next->nom='c';
                    ptr->next->next=NULL;

                       }
     //ajout de dealyse
                    }
                    printf("\t\t");
        cprintf("     Est ce que la patient A le Dealyse      ");
        printf("\t\t\t\t\t");
        cprintf("        Tappez 1 Si Oui Et 0 Si Non          ");
        printf("\t\t\t       ");
            do{
            printf("\t\t\t\t     ");
            scanf("%d",&choice);
            }while((choice!=1) && (choice!=0));
                 //ajout du cancer a la liste des maladiechro
                 if(choice==1){
                         if(choice==1){
                   if(listmld==NULL){
                    listmld=(mldchr*)malloc(sizeof(mldchr));
                    listmld->nom='d';
                    listmld->next=NULL;
                   }
                   else{
                    ptr=listmld;
                   while(ptr->next!=NULL){
                    ptr=ptr->next;
                   }
                    ptr->next=(mldchr*)malloc(sizeof(mldchr));
                    ptr->next->nom='d';
                    ptr->next->next=NULL;

                       }
                    }
                  }
                  //l'ajout de lasthme
                                      printf("\t\t");
        cprintf("      Est ce que la patient A l'Asthme       ");
        printf("\t\t\t\t\t");
        cprintf("        Tappez 1 Si Oui Et 0 Si Non          ");
        printf("\t\t\t       ");
            do{
            printf("\t\t\t\t     ");
            scanf("%d",&choice);
            }while((choice!=1) && (choice!=0));
                 //ajout du cancer a la liste des maladiechro
                 if(choice==1){
                         if(choice==1){
                   if(listmld==NULL){
                    listmld=(mldchr*)malloc(sizeof(mldchr));
                    listmld->nom='a';
                    listmld->next=NULL;
                   }
                   else{
                    ptr=listmld;
                   while(ptr->next!=NULL){
                    ptr=ptr->next;
                   }
                    ptr->next=(mldchr*)malloc(sizeof(mldchr));
                    ptr->next->nom='a';
                    ptr->next->next=NULL;

                       }
     //ajout des maladie par temp->mldchr=malloc
                    }
                  }
                                                 printf("\t\t");
        cprintf("      Est ce que la patient A Le Diabete     ");
        printf("\t\t\t\t\t");
        cprintf("        Tappez 1 Si Oui Et 0 Si Non          ");
        printf("\t\t\t       ");
            do{
            printf("\t\t\t\t     ");
            scanf("%d",&choice);
            }while((choice!=1) && (choice!=0));
                 //ajout du cancer a la liste des maladiechro
                 if(choice==1){
                         if(choice==1){
                   if(listmld==NULL){
                    listmld=(mldchr*)malloc(sizeof(mldchr));
                    listmld->nom='b';
                    listmld->next=NULL;
                   }
                   else{
                    ptr=listmld;
                   while(ptr->next!=NULL){
                    ptr=ptr->next;
                   }
                    ptr->next=(mldchr*)malloc(sizeof(mldchr));
                    ptr->next->nom='b';
                    ptr->next->next=NULL;

                       }
     //ajout des maladie par temp->mldchr=malloc
                    }
                  }}

              do{  clrscr();
         system("color 4F");
         printf("\n\n\t    ");
         cprintf("combien de personnes ont eu un contact avec le patient");
         printf("\t\t\t    ");
         cprintf("               Entre 0 et 100                         ");
         printf("\n\n\t\t\t\t\t");
         scanf("%d",&choice);
         }while((choice>100) || (choice<0) );
         if((choice>0)&&(choice<=100)){
          pctc* tmp=NULL;
          int i;
          listctc=(pctc*)malloc(sizeof(pctc));
          tmp=listctc;

          for(i=0;i<choice;i++){
          clrscr();
          system("color 4F");
          printf("\n\n\t\t\t  ");
          tmp->test='?';
          cprintf("donner le nom du pers N %d",i+1);
          printf("\n\n\t\t\t  ");
          gets(tmp->nom);
          printf("\n\n\t\t\t  ");
          cprintf("donner le prenom du pers N %d",i+1);
          printf("\n\n\t\t\t  ");
          gets(tmp->prenom);
          printf("\n\n\t\t\t  ");
          cprintf("donner le CIN du pers N %d",i+1);
          printf("\n\n\t\t\t  ");
          gets(tmp->CIN);
          if(i<=choice-2){
          tmp->next=(pctc*)malloc(sizeof(pctc));
          tmp=tmp->next;}

          }
         tmp->next=NULL;
         }
          do{  clrscr();
         system("color 4F");
         printf("\n\n\t\t");
         cprintf("Est Ce que La Contamination Est Locale");
         printf("\t\t\t\t\t\t");
         cprintf("     Tappez 1 Si Oui Et 0 Si Non      ");
         printf("\n\n\t\t\t\t");
         scanf("%d",&choice);
         }while((choice!=1) && (choice!=0));
         if(choice==1){
            nouveau->contm='L';
         }
         else{
            nouveau->contm='E';
         }
         do{
         clrscr();
         system("color 4F");
         printf("\n\t\t    ");
         cprintf("Choisissez l'etat du patient");
         printf("\n\t\t    ");
         cprintf("  N Si Normal Et G Si Grave ");
         printf("\n\t\t          ");
         scanf("%c",&et);

         }while((et!='N') && (et!='G'));
     //ajout des maladie par temp->mldchr=malloc
         nouveau->etat=et;

     //sinon on continue


     nouveau->ctc=listctc;
     nouveau->maladies=listmld;
     //ajout des ctc a la list des ctct
     if(*LC==NULL){
     *LC=listctc;
     }
     else{
     pctc* tp=NULL;
     tp=*LC;
     while(tp->next!=NULL){
     tp=tp->next;
     }
     tp->next=listctc;
     }
    //ajout nouveau list a LP
    if((*LP==NULL)||((*LP)->adrs==NULL))
    *LP=nouveau;
    else{
    patient* temp=*LP;
    while(temp->next!=NULL){
     temp=temp->next;
    }
    temp->next=nouveau;}
    *nbr=*nbr+1;;
    }

//***************************************************************************************************************************
void chercherunpat(listp *LP){

char search[20];
int choice;
patient* psave=NULL;
mldchr* pchr=NULL;

if((*LP==NULL)||((*LP)->adrs==NULL)){
 printf("liste Patient est vide");
 return;
}
if(LP!=NULL){
        patient* p=NULL;
        p=*LP;
        do{

        system("color 9F");
        printf("\n\t    ");
        cprintf("           Pour Chercher Un Patient avec          ");
        printf("\n\t    ");
        cprintf("   Son CIN Tappez 1/Son Numero Tel 2/ Son Nom 3   ");
        printf("\n\t\t\t\t");
        scanf("%d",&choice);
        }while((choice!=1)&&(choice!=2)&&(choice!=3)&&(choice!=4) );
        //choix est 1 CIN
        if(choice==1){
                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);
            while(p!=NULL){

             if((strcmp(p->CIN,search)==0)){
              clrscr();
              system("color 9F");
              printf("\n\t\t\t");
              cprintf("Les Infos Du Patient");
              printf("\n\n\t\t\t");
              cprintf("Le Nom Est        : %s",p->nom);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Prenom Est     : %s",p->prenom);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("La CIN Est        : %s",p->CIN);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Ntel Est       : %s",p->Ntel);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Quartier Est   : %s",p->adrs->quartier);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("La Rue Est        : %s",p->adrs->rue);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("L'Etat Est        : %c",p->etat);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Liste Des Maladies: %c");
              pchr=p->maladies;
              while(pchr!=NULL){
                cprintf("%c ",pchr->nom);
                pchr=pchr->next;
              }

              printf("\n\t\t\t");
              return;
             }
               if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   patient introuvable");
                  return;
               }
               p=p->next;
             }

        }
        //choix 2 par Ntel
            if(choice==2){
                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("     Donner La Ntel Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);
            while(p!=NULL){

             if((strcmp(p->Ntel,search)==0)){
              clrscr();
              system("color 9F");
              printf("\n\t\t\t");
              cprintf("Les Infos Du Patient");
              printf("\n\n\t\t\t");
              cprintf("Le Nom Est        : %s",p->nom);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Prenom Est     : %s",p->prenom);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("La CIN Est        : %s",p->CIN);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Ntel Est       : %s",p->Ntel);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Quartier Est   : %s",p->adrs->quartier);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("La Rue Est        : %s",p->adrs->rue);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("L'Etat Est        : %c",p->etat);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Liste Des Maladies: %c");
              pchr=p->maladies;
              while(pchr!=NULL){
                cprintf("%c ",pchr->nom);
                pchr=pchr->next;
              }

              printf("\n\t\t\t");
             }
               if((p->next==NULL)&&((strcmp(p->Ntel,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               }
               p=p->next;
             }

        }
        //choix 2 par NOM
            if(choice==3){
                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("     Donner La Nom  Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);
            while(p!=NULL){

             if((strcmp(p->nom,search)==0)){
              clrscr();
              system("color 9F");
              printf("\n\t\t\t");
              cprintf("Les Infos Du Patient");
              printf("\n\n\t\t\t");
              cprintf("Le Nom Est        : %s",p->nom);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Prenom Est     : %s",p->prenom);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("La CIN Est        : %s",p->CIN);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Ntel Est       : %s",p->Ntel);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Le Quartier Est   : %s",p->adrs->quartier);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("La Rue Est        : %s",p->adrs->rue);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("L'Etat Est        : %c",p->etat);
              printf("\n\t\t\t");
              printf("\n\t\t\t");
              cprintf("Liste Des Maladies: %c");
              pchr=p->maladies;
              while(pchr!=NULL){
                cprintf("%c ",pchr->nom);
                pchr=pchr->next;
              }

              printf("\n\t\t\t");
             }
               if((p->next==NULL)&&((strcmp(p->nom,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               }
               p=p->next;
             }

        }

        }

        }
//fin fx chercher도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도도
void ajouterunhopital(listh* LH){

    listh nouveau=NULL;
    nouveau=(hopital*)malloc(sizeof(hopital));
    nouveau->next=NULL;
    nouveau->listdespatient=NULL;
        clrscr();
        system("color 3F");
        printf("\n\t\t");
        cprintf("             Donner le Nom d'Hopital             ");
        printf("\n\t\t\t");
        gets(nouveau->nom);
        printf("\n\t\t");
        cprintf("          Donner le Quartier d'Hopital           ");
        printf("\n\t\t\t");
        gets(nouveau->adrs->quartier);
        printf("\n\t\t");
        cprintf("            Donner la rue d'Hopital              ");
        printf("\n\t\t\t");
        gets(nouveau->adrs->rue);
        printf("\n\t\t");
        cprintf("     Donner la Capacite des lits d'Hopital       ");
        do{
        printf("\n\t\t\t");
        scanf("%d",&nouveau->capacity);
        if(nouveau->capacity<=0)
        printf("\t\t\tEntrer Une Valeur Superieur A 0");
        }while(nouveau->capacity<=0);
        printf("\n\t\t");
        nouveau->current=0;
        cprintf("    Donner le nombre des lits De Reanimation     ");
        do{
        printf("\n\t\t\t");
        scanf("%d",&nouveau->reacapacity);
        if(nouveau->reacapacity<0)
            printf("\t\tinvalid donner un nombre superieur ou egal a 0");
        }while(nouveau->reacapacity<0);
         nouveau->reacurrent=0;
         printf("\n\t\t");
        cprintf("     Donner le nombre des Chambres De Dialyse     ");
        do{
        printf("\n\t\t\t");
        scanf("%d",&nouveau->dealcapacity);
        if(nouveau->dealcapacity<0)
        printf("\t\t invalid entrer un nombre superieur ou egal a 0 ");
        }while(nouveau->dealcapacity<0);
         nouveau->dealcurrent=0;

         if(*LH==NULL){
            *LH=nouveau;
         }
         else{
            hopital* tph=NULL;
            tph=*LH;
            while(tph->next!=NULL){
                tph=tph->next;
            }
            tph->next=nouveau;
         }

        }
//************************************************************************************************************************
void ajouterunlieu(listl* LCF){
 int choice;
 listl nouveau=(lieuc*)malloc(sizeof(lieuc*));
 nouveau->adrs=(adress*)malloc(sizeof(adress));

 nouveau->lc=NULL;
 nouveau->next=NULL;
   printf("\n\t\t\t");
  cprintf("Donner Le Nom Du Lieu");
  printf("\n\t\t\t");
  gets(nouveau->nom);
   printf("\n\t\t\t");
   printf("\n\t\t\t");
  cprintf(" Donner Le Quartier  ");
  printf("\n\t\t\t");
  gets(nouveau->adrs->quartier);
   printf("\n\t\t\t");
  cprintf(" Donner La capacite  ");
  printf("\n\t\t\t");
  scanf("%d",&nouveau->capacity);
  nouveau->current=0;
  printf("\n\t\t\t");
  printf("\n\t\t\t");
  cprintf("Donner Le Type Du Lieu");
  printf("\n\t\t\t");
  cprintf("tappez 1 Hotel/0 Motel");
  do{
  printf("\n\t\t\t");
  scanf("%d",&choice);
  if((choice!=1)&&(choice!=0)){
    printf("\t\t\tentrer 1 ou 0");
    }
  }while((choice!=1)&&(choice!=0));

  if(choice==1){
    nouveau->type='H';
    }
  if(choice==0){
    nouveau->type='M';
    }

if(*LCF==NULL){
            *LCF=nouveau;
         }
         else{
            listl tp=NULL;
            tp=*LCF;
            while(tp->next!=NULL){
                tp=tp->next;
            }
            tp->next=nouveau;
            tp->next->next=NULL;
         }

  }
//************************************************************************************************************
void patientmort(listp *LP,int* nbrdeces,listh* LH){
char search[20];
patient* psave=NULL;
mldchr* pchr=NULL;


if((*LP==NULL)||((*LP)->adrs==NULL)){
 printf("liste Patient est vide");
 return;

}
if(*LP!=NULL){
        patient* p=NULL;
        p=*LP;


                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               return;
               }

             if((strcmp((*LP)->CIN,search)==0))
             {

                 break;
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break;

             }


               p=p->next;
             }
             if((strcmp((*LP)->CIN,search)==0)){


             if((*LP)->next==NULL){
             printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Mort] ",p->nom,p->prenom);
             p->adrs=NULL;
             p=NULL;

             }
             if((*LP)->next!=NULL){
              printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Mort] ",p->nom,p->prenom);
              *LP=(*LP)->next;
               p->adrs=NULL;
               p=NULL;
             }
             *nbrdeces=*nbrdeces+1;
              return;

            }
            else{

                if(p->next->next==NULL){
                printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Mort] ",p->next->nom,p->next->prenom);
                p->next->adrs=NULL;
                p->next=NULL;
                *nbrdeces=*nbrdeces+1;
                return;
                }

                if(p->next->next!=NULL){
                 printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Mort] ",p->next->nom,p->next->prenom);
                 psave=p->next;
                 p->next=p->next->next;
                 psave->adrs=NULL;
                 psave=NULL;
                }
            *nbrdeces=*nbrdeces+1;
             return;
            }

}

}
//************************************************************************************************************
void patientguerie(listp *LP,int* nbrguerie,listh* LH){
char search[20];
patient* psave=NULL;
mldchr* pchr=NULL;


if((*LP==NULL)||((*LP)->adrs==NULL)){
 printf("liste Patient est vide");
 return;

}
if(*LP!=NULL){
        patient* p=NULL;
        p=*LP;


                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               return;
               }

             if((strcmp((*LP)->CIN,search)==0))
             {

                 break;
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break;

             }


               p=p->next;
             }
             if((strcmp((*LP)->CIN,search)==0)){


             if((*LP)->next==NULL){
             printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Gueri] ",p->nom,p->prenom);
             p->adrs=NULL;
             p=NULL;

             }
             if((*LP)->next!=NULL){
               printf("%Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Gueri] ",p->nom,p->prenom);
              *LP=(*LP)->next;
               p=NULL;
             }
             *nbrguerie=*nbrguerie+1;


            }
            else{

                if(p->next->next==NULL){
                printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Gueri] ",p->next->nom,p->next->prenom);
                p->next->adrs=NULL;
                p->next=NULL;
                *nbrguerie=*nbrguerie+1;
                return;
                }

                if(p->next->next!=NULL){
                 printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Supprime Avec Succes [Gueri] ",p->next->nom,p->next->prenom);
                 psave=p->next;
                 p->next=p->next->next;
                 psave->adrs=NULL;
                 psave=NULL;
                }
            *nbrguerie=*nbrguerie+1;
            }

}

}
//*************************************************************************************************************
void patientnormal(listp *LP,listh* LH){
char search[20];
patient* psave=NULL;
mldchr* pchr=NULL;


if((*LP==NULL)||((*LP)->adrs==NULL)){
 printf("liste Patient est vide");
 return;

}
if(*LP!=NULL){
        patient* p=NULL;
        p=*LP;


                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               return;
               }

             if((strcmp((*LP)->CIN,search)==0))
             {

                 break;
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break;

             }


               p=p->next;
             }
             if((strcmp((*LP)->CIN,search)==0)){


             if((*LP)->next==NULL){
             printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Normal] ",p->nom,p->prenom);

             p->etat='N';
             return;
             }
             if((*LP)->next!=NULL){
             printf("%Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Normal] ",p->nom,p->prenom);

               p->etat='N';
               return;
             }



            }
            else{

                if(p->next->next==NULL){
                printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Normal] ",p->next->nom,p->next->prenom);

                p->next->etat='N';

                return;
                }

                if(p->next->next!=NULL){
                 printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Normal] ",p->next->nom,p->next->prenom);
                 p->next->etat='N';

                }

            }

}

}
//**************************************************************************************************************
void patientgrave(listp *LP,listh* LH){
char search[20];
patient* psave=NULL;
mldchr* pchr=NULL;


if((*LP==NULL)||((*LP)->adrs==NULL)){
 printf("liste Patient est vide");
 return;

}
if(*LP!=NULL){
        patient* p=NULL;
        p=*LP;


                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               return;
               }

             if((strcmp((*LP)->CIN,search)==0))
             {

                 break;
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break;

             }


               p=p->next;
             }
             if((strcmp((*LP)->CIN,search)==0)){


             if((*LP)->next==NULL){
             printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Grave] ",p->nom,p->prenom);

             p->etat='G';
             return;
             }
             if((*LP)->next!=NULL){
             printf("%Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Grave] ",p->nom,p->prenom);

               p->etat='G';
               return;
             }



            }
            else{

                if(p->next->next==NULL){
                printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Grave] ",p->next->nom,p->next->prenom);

                p->next->etat='G';

                return;
                }

                if(p->next->next!=NULL){
                 printf("Le Patient Avec Le Nom %s Et Le Prenom %s Est Modifie Avec Succes [Grave] ",p->next->nom,p->next->prenom);
                 p->next->etat='G';

                }

            }

}

}
//***************************************************************************************************************
void serviceaffichage(listp LP,listl LCF,listc LC,listh LH){
int choice;
do{  clrscr();
    system("color 5F");
   printf("\nSERVICE D'AFFICHAGE DE TOUT LES HOPITAUX/PATIENTS/CONTACTEUR/LIEUXDECONFINEMENT\t");
   printf("________________________________________________________________________________");
printf("\t\t\n ");
cprintf("Choisissez 1 Pour Afficher Touts Les Patients De Casablanca             ");
printf("\t\t\n ");
cprintf("Choisissez 2 Pour Afficher Touts Les Hopitaux De Casablaca              ");
printf("\t\t\n ");
cprintf("Choisissez 3 Pour Afficher Touts Les Contacteurs De Casablanca          ");
printf("\t\t\n ");
cprintf("Choisissez 4 Pour Afficher Touts Les Lieux De Confinement De Casablanca ");
scanf("%d",&choice);
}while((choice!=1)&&(choice!=2)&&(choice!=3) &&(choice!=4));

if(choice==1){
  patient* ptr=NULL;
  mldchr *pchr=NULL;
  ptr=LP;

  clrscr();
  system("color 5F");
  if((LP==NULL)||(LP->adrs==NULL)){
    printf("Liste Patient Vide");
    return;
  }
  printf("\n\n\t");
  printf("Liste Des Patients De Casablanca");
  printf("\n\n\n");
 while(ptr!=NULL){
  cprintf("| Le Nom : %s | Le Prenom : %s | Le Quartier : %s | La Contamination : %c | L'etat : %c | Maladies Chronique:",ptr->nom,ptr->prenom,ptr->adrs->quartier,ptr->contm,ptr->etat);

              pchr=ptr->maladies;
              while(pchr!=NULL){
                cprintf("%c ",pchr->nom);
                pchr=pchr->next;
              }
  printf("\n\n");
  ptr=ptr->next;
 }}
  if(choice==2){
    listh ptr=NULL;

    clrscr();
  system("color 5F");
   if(LH==NULL){
    printf("La Liste Des Hopiteaux Est Vide");
    return;
   }
   printf("\n\n\t");
  printf("Liste Des Hopitaux De Casablanca");
  printf("\n\n\n");
   ptr=LH;
   while(ptr!=NULL){
    printf("\n\n");
    cprintf("|Le Nom D'Hopital Est : %s |Le Quartier D'Hopital Et : %s |La Capacite Des Lits est : %d |Le Nbr Des Chmbr de dealyse : %d |Le Nbr Des Chbr De Dealyse Dispo : %d |Le Nbr De chbr de reanimation : %d |Le Nbr de chbr reanimation dispo : %d ",ptr->nom,ptr->adrs->quartier,ptr->capacity,((ptr->capacity)-(ptr->current)),ptr->dealcapacity,((ptr->dealcapacity)-(ptr->dealcurrent)),ptr->reacapacity,((ptr->reacapacity)-(ptr->reacurrent)));

    ptr=ptr->next;
   }
    }
    if(choice==3){
    listc ptr=NULL;

    clrscr();
    system("color 5F");

    if(LC==NULL){
    printf("List des contacteurs est vide");
    return;
    }
       printf("\n\n\t");
  printf("Liste Des Contacteur De Casablanca");
  printf("\n\n\n");
    ptr=LC;
    while(ptr!=NULL){

     cprintf("|Le Nom Est %s |Le Prenom Est %s |La CIN Est %s son test est %c|",ptr->nom,ptr->prenom,ptr->CIN,ptr->test);
     printf("\n\n");

       ptr=ptr->next;
    }



    }
    if(choice==4){
        clrscr();
        system("color 5F");
     if(LCF==NULL){

        printf("Liste De Lieux De Confinement Vide");
        return;
     }
     else{
         listl p=NULL;
         p=LCF;
         printf("\n");
         printf("la liste des lieux de confinement");
         printf("\n\n");
         while(p!=NULL){
           cprintf("Le Nom %s Le Quartier %s Le Type %c",p->nom,p->adrs->quartier,p->type);
           printf("\n\n");
           p=p->next;
         }}





    }


}
//**********************************************************************************************************************
affecterunpatient(listp *LP,listh* LH){
char search[20];
patient* psave=NULL;
mldchr* pchr=NULL;



if((*LP==NULL)||((*LP)->adrs==NULL)){
 printf("liste Patient est vide");
 return;

}

if(*LH==NULL){

    printf("\t\t\t liste hopiteaux Vide");
    return;

}


if(*LP!=NULL){
        patient* p=NULL;
        listh ph=NULL;
        listp pcheck=NULL;
        p=*LP;
        ph=*LH;


                clrscr();
        system("color 9F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Patient          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   patient introuvable");
               return;
               }

             if((strcmp((*LP)->CIN,search)==0))
             {

                 break; //p est p
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break; //p est p->next;

             }


               p=p->next;
             }

              //fin recherche
             //le traitement

             if((strcmp((*LP)->CIN,search)==0)){


             if((*LP)->next==NULL){





             while(ph=!NULL){
             if(strcmp(ph->adrs->quartier,p->adrs->quartier)==0){


              if((ph->capacity-ph->current<=0)&&(p->maladies==NULL)){/** si le patient n'as aucune maladie chronique est les lits son pas dispo*/
               printf("\t\t\t l'Hopital le plus Proche Est Plein");
               break;

              }

              if((ph->capacity-ph->current>0)&&(p->maladies==NULL)){/** si le patient n'as aucune maladie chronique est les lits son dispo*/


                pcheck=ph->listdespatient;
                if(pcheck==NULL){
                pcheck=p;
                ph->current=ph->current+1;
                printf("\t Le Patient A Ete Affecte A l'Hopital le plus Proche ");
                return;
                }
                while((pcheck!=NULL)||(pcheck->adrs==NULL)){

                 if((pcheck->next==NULL)||(pcheck->next->adrs==NULL)){
                   pcheck->next=p;
                   ph->current=ph->current+1;
                   printf("\t Le Patient A Ete Affecte A l'Hopital le plus Proche ");
                   return;
                 }

                 pcheck=pcheck->next;

                }
                return;
              }

             }

              ph=ph->next;
             }


             return;
             /** traitement de rechercher*/
             }
             if((*LP)->next!=NULL){


               return;
             }

            }



            /***Traitement LP->CIN nest pas le cas*/

            else{

                if(p->next->next==NULL){



                return;
                }

                if(p->next->next!=NULL){


                }

            }

}

}
//***************************************************************************************************************************
void contacteurpositive(listc *LC){
char search[20];
patient* psave=NULL;

if(*LC==NULL){
 printf("liste ctctr est vide");
 return;
}

if(*LC!=NULL){
        listc p=NULL;
        p=*LC;


                clrscr();
        system("color 6F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Contacteur          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   contacteur introuvable");
               return;
               }

             if((strcmp((*LC)->CIN,search)==0))
             {

                 break;
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break;

             }


               p=p->next;
             }
             if((strcmp((*LC)->CIN,search)==0)){


             if((*LC)->next==NULL){
             printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->nom,p->prenom);

             p->test='P';
             return;
             }
             if((*LC)->next!=NULL){
             printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->nom,p->prenom);

               p->test='P';
               return;
             }



            }
            else{

                if(p->next->next==NULL){
                printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->next->nom,p->next->prenom);

                p->next->test='P';

                return;
                }

                if(p->next->next!=NULL){
                 printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->next->nom,p->next->prenom);
                 p->next->test='P';

                }

            }

}

}
//***************************************************************************************************************************
void contacteurnegative(listc *LC){
char search[20];
patient* psave=NULL;

if(*LC==NULL){
 printf("liste ctctr est vide");
 return;
}

if(*LC!=NULL){
        listc p=NULL;
        p=*LC;


                clrscr();
        system("color 6F");
        printf("\n\t\t   ");
        cprintf("      Donner La CIN Du Contacteur          ");
        printf("\n\t\t\t\t   ");
        gets(search);

            while(p!=NULL){
             if((p->next==NULL)&&((strcmp(p->CIN,search)!=0))){
                  printf("\t\t\t   contacteur introuvable");
               return;
               }

             if((strcmp((*LC)->CIN,search)==0))
             {

                 break;
             }

             if((strcmp(p->next->CIN,search)==0)){


                  break;

             }


               p=p->next;
             }
             if((strcmp((*LC)->CIN,search)==0)){


             if((*LC)->next==NULL){
             printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->nom,p->prenom);

             p->test='N';
             return;
             }
             if((*LC)->next!=NULL){
             printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->nom,p->prenom);

               p->test='N';
               return;
             }



            }
            else{

                if(p->next->next==NULL){
                printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->next->nom,p->next->prenom);

                p->next->test='N';

                return;
                }

                if(p->next->next!=NULL){
                 printf("Le Contacteur Avec Le Nom %s Et Le Prenom %s son test est [Negative] ",p->next->nom,p->next->prenom);
                 p->next->test='N';

                }

            }

}

}
//*******************************************************************************************************************************
int main()
{
     listp LP=NULL;
     listc LC=NULL;
     listh LH=NULL;
     listl LCF=NULL;
     listp psave=NULL;
     int nbr=0;
     int choix,choice,nbrcas=0,nbrguerie=0,nbrdeces=0,nbrquarantine=0;
    //menu
menu:
    do{
            clrscr();
    system("color 3F");
    printf("\n");
    printf("\t\t   GESTION DES HOPITAUX DE CASABLANCA");
    printf("\t\t\t\t________________________________________________________________________________");
    printf("\n\n ");
    cprintf("Les cas total");
    printf("\t");
    cprintf(" Nombre des Cas Guerie");
    printf("\t");
    cprintf("Personne en quarentaine");
    printf("\t  ");
    cprintf("Deces");
    printf("\t\n\n     ");
    textcolor(2);
    cprintf(" %d ",nbr);
    printf("\t\t");
    textcolor(10);
    cprintf(" %d ",nbrguerie);
    printf("\t\t\t ");
    textcolor(3);
    cprintf(" %d ",nbrquarantine);
    printf("\t\t   ");
    textcolor(12);
    cprintf(" %d ",nbrdeces);
    printf("\t\t\n________________________________________________________________________________");
    //partie menu
    printf("\t\t\t\t MENU\t\t\t\t\t\t");
    //les options du menu
    printf("\t\tChoisissez une de ces options dessous\t\t\t\t\n\n");
    textcolor(12);
    cprintf(" tappez 1 Pour ajouter un patient");
    printf("   ");
    textcolor(10);
    cprintf(" tappez 2 Pour modifier l'etat d'un patient");
    printf(" \n");
    textcolor(11);
    cprintf(" tappez 3 Pour ajouter un hopital");
    printf("   ");
    textcolor(19);
    cprintf(" tappez 4 Pour chercher un patient         ");
    printf(" \n");
    textcolor(14);
    printf("         ");
    cprintf(" tappez 5 Pour modifier les resultat du test d'un contacteur");
    printf("\t\t\t\t\n\t");
    textcolor(23);
    cprintf(" tappez 6 Pour ajouter les pers en contact a lieu de confinement");
    printf(" \n\n");
    textcolor(29);
    cprintf("tappez 7 Service D'affichage P/H/C/L");
    printf(" ");
    textcolor(31);
    cprintf("tappez 8 pour ajouter un lieu de confinmnt");
    //fin menu
//choisir l'option

            printf("\n");
            scanf("%d",&choix);
    }while(choix>8 || choix<1);
    clrscr();
   if(choix==1){
//fct d'ajout du patient
   system("color 4F");
   printf("\n\t\t\t    L'AJOUT DU PATIENT \t\t\t\t\t");
   printf("________________________________________________________________________________");
   ajouterpatient(&LP,&nbr,&LC);
   printf("\t     Patient Enregistre Tappez Pour Revenir Au Menu");
   getch();
   clrscr();
   goto menu;
   }
  if(choix==2){
//fct de modification de letat du patient
   do{ clrscr();
       system("color 2F");
       system("color 2F");
       printf("\n\t\t\t MODIFICATION D'ETAT DU PATIENT \t\t\t");
       printf("________________________________________________________________________________");
       printf("\n");
       cprintf("1 Pour Modifier l'etat en Normal/2 Pour Grave /3 Pour Guerie/4 Pour Mort  ");
       scanf("%d",&choice);

   }while((choice!=1)&&(choice!=2)&&(choice!=3)&&(choice!=4));

   if(choice==1){
    patientnormal(&LP,&LH);
   }
   if(choice==2){
    patientgrave(&LP,&LH);
   }
   if(choice==3){
    patientguerie(&LP,&nbrguerie,&LH);
   }
   if(choice==4){
   patientmort(&LP,&nbrdeces,&LH);
   }
   getch();
   clrscr();
   goto menu;

   }
  if(choix==3){
//fct dajout de hopitaux
   system("color 3F");
   printf("\n\t\t AJOUT D'UN HOPITAL A LA LIST DES HOPITAUX \t\t\t");
   printf("________________________________________________________________________________");
   ajouterunhopital(&LH);
   printf("\t\t  Hopital Enregistre Tappez Pour Revenir Au Menu");
   getch();
   clrscr();
   goto menu;
   }
   if(choix==4){
//fct de chercher un patient
   system("color 9F");
   printf("\n\t\t\t    CHERCHER UN PATIENT \t\t\t\t");
   printf("________________________________________________________________________________");

   chercherunpat(&LP);
   getch();
   clrscr();
   goto menu;
   }
   if(choix==5){
//fct modif de test dun ctctr
   do{
   clrscr();
   system("color 6F");
   printf("\n      MODIFICATION DE RESULTAT DE TEST DES PERSONNE QUI SONT EN CONFINEMENT \t");
   printf("________________________________________________________________________________\n");
   cprintf("Tappez 0 pour modifier le test est Negative et 1 si positive");
   scanf("%d",&choice);

   }while((choice!=0)&&(choice!=1));
   if(choice==0){
   contacteurnegative(&LC);
   }
   if(choice==1){
   contacteurpositive(&LC);
   }
   getch();
   clrscr();
   goto menu;
   }
   if(choix==6){
//fct dajout de cnctr ay lieu de cnfnm
   system("color 70");
   printf("\n             AJOUT DES PERSONNE EN CONTACT A UN LIEU DE CONFINEMENT\t\t");
   printf("________________________________________________________________________________");
   getch();
   clrscr();
   goto menu;
   }
   if(choix==7){
//fct affichage des hopitaux

   serviceaffichage(LP,LCF,LC,LH);
   getch();
   clrscr();
   goto menu;
   }
   if(choix==8){
        clrscr();
// affichage des leiu  cnfnm
   system("color 70");
   printf("\n\t           L'AJOUT D'UN  LIEU DE CONFINEMENT \t\t\t");
   printf("\t_______________________________________________________________________________\n");
   ajouterunlieu(&LCF);
   printf("\t\tlieu ajouter tappez pour revenir a la liste");
   getch();
   clrscr();
   goto menu;
   }
    return 0;
}

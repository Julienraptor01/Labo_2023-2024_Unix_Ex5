#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>
#include "protocole.h" // contient la cle et la structure d'un message

int idQ;
int pid1,pid2;

int main()
{
  MESSAGE requete;
  pid_t destinataire;

  // Armement du signal SIGINT
  // TO DO (etape 6)

  // Creation de la file de message
  fprintf(stderr,"(SERVEUR) Creation de la file de messages\n");
  // TO DO (etape 2)

  // Attente de connection de 2 clients
  fprintf(stderr,"(SERVEUR) Attente de connection d'un premier client...\n");
  // TO DO (etape 5)
  fprintf(stderr,"(SERVEUR) Attente de connection d'un second client...\n");
  // TO DO (etape 5)

  //while(1) 
  {
    // TO DO (etapes 3, 4 et 5)
  	fprintf(stderr,"(SERVEUR) Attente d'une requete...\n");

    fprintf(stderr,"(SERVEUR) Requete recue de %d : --%s--\n",requete.expediteur,requete.texte);
    
    fprintf(stderr,"(SERVEUR) Envoi de la reponse a %d\n",destinataire);
  }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Handlers de signaux ////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// TO DO (etape 6)

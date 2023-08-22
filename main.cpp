#include "windowclient.h"
#include <QApplication>

WindowClient *w;
char nomClient[40];

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
      printf("Erreur: Trop ou trop peu d\'argument(s)...\n");
      printf("Usage: Client nom\n");
      exit(1);
    }

    strcpy(nomClient,argv[1]);

    QApplication a(argc, argv);
    w = new WindowClient();
    w->show();
    return a.exec();
}

objects = Salarie.o Fournisseur.o Client.o Personne.o main.o

pers.exe : $(objects)
	g++ $(objects) -o pers.exe

Salarie.o Fournisseur.o Client.o : Personne.h
Personne.o :
main.o :  Salarie.h Fournisseur.h  Client.h Personne.h
clean :
	del *.o
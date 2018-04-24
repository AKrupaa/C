#include <stdio.h>	
//#include <cstdio>


//znajdz w bitach ile zajmuje wlasnie ten plik
//jest plik, i ile ma bajtow?

int main()
{
	FILE* stream;
	
	if ( ( stream = fopen( "text.txt", "r" ) ) == NULL )
	{
		printf("B³ad (R)"); 
		return 0;
	}
														//   \/ przesun wskaznik w pliku
//	fseek(stream,0,SEEK_END);	//znajdz aktualna pozycje -> fseek( stream, o ile w prawo przesunac , skad? )  ad. sk¹d? np. od koñca czyli (SEEK_END)
//	fseek(stream,1,SEEK_SET);
	
//	long offset = ftell(stream);
//	printf("Pozycja w pliku: %d\n", offset);

	fseek(stream,0,SEEK_END);					///SEEK_SET, SEEK_CUR, SEEK_END
	long offset = ftell(stream);
    printf("Pozycja w pliku: %d\n", offset);
    
	fclose(stream);
	
// -------------------------------------------------------------------------------------------------------------------------------------

	if((stream=fopen("text.txt", "a"))==NULL)
	{
		printf("B³ad (A)"); 
		return 0;
	}
	
	fprintf( stream, "%s", "abc");
	fseek(stream,0,SEEK_END);
	offset = ftell(stream);
    printf("Pozycja w pliku po dodaniu: %d\n", offset);
    
    fclose(stream);
	//dzia³a.
	
// -------------------------------------------------------------------------------------------------------------------------------------	
	
	if((stream=fopen("text.txt", "r"))==NULL)
	{
		printf("B³ad (R)"); 
		return 0;
	}
	
	fpos_t dlugosc;
	fseek (stream, 0, SEEK_END); /* ustawiamy wskaŸnik na koniec pliku */
	fgetpos (stream, &dlugosc);
	printf ("Rozmiar pliku: %d\n", dlugosc);
	
	fclose(stream);
	
// -------------------------------------------------------------------------------------------------------------------------------------

	//plik zrodlowy do pliku docelowego :)
	// a.txt -> b.txt
	
	FILE* stream1;
	
	if ( ( stream1 = fopen( "a.txt", "r" ) ) == NULL )
	{
		printf("B³ad (R)"); 
		return 0;
	}
	
	char tab1[1000];
	int counter=0;
	char a;
	while(!feof(stream1))
	{
		fscanf(stream1,"%c", &a);
		tab1[counter++]=a;
		//printf("%c",a);
	}
	counter--; //bo sprawdzam EOF a potem wykonuje instukcje ... u know.
	
	fclose(stream1);
	
	if((stream1=fopen("b.txt", "w"))==NULL)
	{
		printf("B³ad (W)"); 
		return 0;
	}
	
	int i;
	for(i=0;i<counter;i++)
	{
		fprintf(stream1, "%c", tab1[i]);
	}
	
	fclose(stream1);
	
// -------------------------------------------------------------------------------------------------------------------------------------

	//masz plik - > usun go
	//	#include <cstdio>

	//stworz plik - > jezeli istnieje -> usun go
	
	FILE* stream2;
	if((stream2=fopen("usungo.txt","w"))==NULL)			//tworze jednoczesnie plik :)
	{
		printf("B³ad - nie pliku do usuniecia.");
		return 0;
	}
	
	fclose(stream2);
	
    if( remove( "usungo.txt" ) == 0 )
         printf( "Usunieto pomyslnie plik.\n" );
    else
         printf( "Nie udalo sie skasowac pliku.\n" );
   
// -------------------------------------------------------------------------------------------------------------------------------------

	//stworz plik -> wpisz info -> policz ilosc linijek :)
	
	FILE* stream3;
	if((stream3=fopen("linijki.txt","w"))==NULL)
	{
		printf("B³¹d (W)");
		return 0;
	}
	
	fprintf(stream3,"%s","abcd \nabcd \nabcd \n ");
	
	fclose(stream3);
	
	if((stream3=fopen("linijki.txt","r"))==NULL)
	{
		printf("B³ad (R)");
		return 0;
	}
	
	int linijka=0;
	char znak;
	
	for(;!feof(stream3);)
	{
		fscanf(stream3,"%c",&znak);
		if(znak=='\n')
		linijka++;
	}
	
	fclose(stream3);
	
	printf("Liczba linijek= %i", linijka);
	
	
	return 0;
}

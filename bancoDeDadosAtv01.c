#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale (LC_ALL,"Portuguese");

char nomeTutor[100], numero[10], email[100], nomePet[100], especie[100]; 




printf ("		BEM VINDO(a) A CL�NICA VETERIN�RIA LDR-Pets!!\n");
printf ("		  para prosseguir realize o cadastro abaixo:\n");
	
	
printf ("\nNome do(a) tutor(a): ");
scanf ("%s", nomeTutor);
printf ("N�mero para contato: ");
scanf ("%s", numero);
printf ("E-mail (opcional): ");
scanf ("%s", email);
printf ("Nome do pet: ");
scanf ("%s", nomePet);
printf ("Informe a esp�cie: ");
scanf ("%s", especie);

system ("CLS");

printf ("		TUDO PRONTO!!\n");
printf ("		suas informa��es ser�o salvas e exibidas abaixo...\n");

printf ("\nNome do(a) tutor(a): %s", nomeTutor);
printf ("\nN�mero para contato: +55 %s", numero);
printf ("\nE-mail: %s", email);
printf ("\nNome do pet: %s", nomePet);
printf ("\nEsp�cie: %s", especie);
	
	
	
	
	
	
	
	return 0;
}

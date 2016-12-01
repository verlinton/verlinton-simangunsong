#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main (void)
{
	int username, password;
	int i;
	printf("--------------------------------------------------------------\n");
	printf("\---------WELCOME TO USERNAME  AND PASSPOWORD VERLINTON------- \n");
 	printf("--------------------------------------------------------------\n\n");
	int user = 12345;
	int pass = 12345;
	i = 1;
	do
	{
		printf("Username : ");
		scanf("%d",&username);
		printf("Password : ");
		scanf("%d",&password);

 		if (username = user && password == pass)
{
 printf("\n--------------------\n");
  printf("Anda Berhasil Login");
        printf("\n--------------------\n\n");
  }
       else
  	{
        printf("\n------------------------\n");
        printf("Maaf ID & PASSWORD Salah!");
        printf("\n-------------------------\n\n");
         i = i +1;
      }
 }
   while (i <= 3);

   printf("Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n");
   printf("Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..");

   getch();
	 }
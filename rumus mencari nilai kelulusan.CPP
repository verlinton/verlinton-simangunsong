#include <stdio.h>
#include <conio.h>
main()
{
	int nilai,tugas;

   printf("Masukan Sebuah Nilai:");scanf("%d",&nilai);
   printf("Masukan Nilai Tugas:");scanf("%d",tugas);

if(nilai>90)
		printf("Lulus\n");
else
		printf("A\n");
if(nilai>80)
		printf("lulus\n");
else
		printf("B\n");
if(nilai>70)
		printf("lulus\n");
else
		printf("C\n");
if(nilai>=65)
		printf("Gagal\n");
else
		printf("D\n");
if(nilai<65)
		printf("Gagal\n");
else
		printf("D\n");


getch();
}
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main( )
{
char kode,jenis minuman,harga[15];
long harga=0;
clrscr( );
cout<<"milo : ";cin>>kode;
cout<<"jenis minuman : ";cin>>ukuran;
if (kode=='1')
{
strcpy(jenis minuman,"M & K");
if (ukuran=='S' || ukuran =='s')
harga=45000;
else
harga=60000;
}
else if (kode=='2')
{
strcpy(merk," Adidas");
if (ukuran=='S' || ukuran == 's')
harga=65000;
else
harga=75000;
}
else
cout<<"Salah Kode Baju"<<endl;
cout<<"------------------------"<<endl;
cout<<"Merk Baju : "<<merk<<endl;
cout<<"Harga Baju : "<<harga<<endl;
getch();
}
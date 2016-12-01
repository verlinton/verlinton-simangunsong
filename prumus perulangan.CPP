#include<iostream.h>
#include<conio.h>

void main()
{
 int bil1;
 cout<<"              Latihan Perulangan C++ dengan For               "<<endl;
 cout<<"=============================================================="<<endl;
 cout<<"1.Menampilkan deret angka 1 sampai 10                      :  ";
 for(bil1=0;bil1<=10;bil1++)
 {
  cout<<bil1;
 }
 cout<<endl;
 cout<<"2.Menampilkan deret bilangan genap dari angka 1 sampai 10  :  ";
 for(bil1=0;bil1<=10;bil1++)
 {
  bil1%2==0;
  cout<<bil1;
  bil1++;
 }
 cout<<endl;
 cout<<"3.Menampilkan deret bilangan ganjil dari angka 1 sampai 10 :  ";
 for(bil1=0;bil1<10;bil1++)
 {
  bil1%2!=0;
  cout<<bil1+1;
  bil1++;
 }

 getch();
}


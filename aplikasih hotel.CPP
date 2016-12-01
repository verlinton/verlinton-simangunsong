#include<iostream.h>
#include<conio.h>

void A( );  //deklarasi function untuk memanggil fungsi A
void B( );  //deklarasi function untuk memanggil fungsi B
void C( );   //deklarasi function untuk memanggil fungsi C
void main( )
{
char menu,pil;
do{
clrscr( );
 cout<<"======================================================================"<<endl;
 cout<<"                      PROGRAM APLIKASI HOTEL SEDERHANA                    "<<endl;
 cout<<"=========================================================================="<<endl;
 cout<<"PILIHAN PELAYANAN KELAS HOTEL YANG ANDA INGINKAN:"<<endl;
 cout<<"a.Kelas A"<<endl;
 cout<<"b.Kelas B"<<endl;
 cout<<"c.Kelas C"<<endl;
 cout<<endl;
 cout<<"Masukkan Pilihan pelayanan kelas hotel yang anda inginkan [a/b/c]: ";
 cin>>pil;

 if (pil=='a' || pil=='A')
 {
  A();
 }

 else if (pil=='b' || pil=='B')
 {
  B();
 }

 else if (pil=='c' || pil=='C')
 {
  C();
 }
 else
 {
 clrscr();
  cout<<"Maaf pilihan anda belum tersedia. Silahkan kembali ke menu pilihan"<<endl;
 }
 cout<<endl;
cout<<"Apakah anda ingin kembali ke menu[Y/T]:";
cin>>menu;
}while(menu=='y' || menu=='Y');

getch();

}

void A()
{
int nk1;
char menu1,pk2;
float bs1,d1,t1;
do{
  clrscr();
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Menghitung total biaya pelayanan hotel kelas A:"<<endl;
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Pelanggan Kelas                : ";
  cin>>pk2;
  if(pk2=='A' || pk2=='a')
  {
  cout<<"Masukkan No. Kamar(001/002)    : ";
  cin>>nk1;
  if(nk1==001)
  {
  bs1=200000;
  d1=bs1*0.1;
  t1=bs1-d1;
  cout<<"Biaya Sewa Per Hari            : "<<bs1<<endl;
  cout<<"Diskon 10 %                    : "<<d1<<endl;
  cout<<"Total                          : "<<t1<<endl;
  }
  else if (nk1==002)
  {
  bs1=200000;
  d1=bs1*0.1;
  t1=bs1-d1;
  cout<<"Biaya Sewa Per Hari            : "<<bs1<<endl;
  cout<<"Diskon 10 %                    : "<<d1<<endl;
  cout<<"Total                          : "<<t1<<endl;
  }
  else
  {
   cout<<"Maaf No. Kamar tidak tersedia di pelayanan hotel kelas A"<<endl;
  }
  }
  else
  {
   cout<<"Maaf,inputkan pelanggan kelas A"<<endl;
  }
  cout<<endl;
  cout<<"========================================================="<<endl;
  cout<<"Apakah anda ingin kembali ke menu pelayanan hotel kelas A [Y/T]:";
  cin>>menu1;
  cout<<"========================================================="<<endl;
  }while(menu1=='y' || menu1=='Y');

}

void B()
{
int nk2;
char menu2,pk1;
float bs2,d2,t2;
do{
  clrscr();
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Menghitung total biaya pelayanan hotel kelas B:"<<endl;
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Pelanggan Kelas                : ";
  cin>>pk1;
  if(pk1=='B' || pk1=='b')
  {
  cout<<"Masukkan No. Kamar(101/102)    : ";
  cin>>nk2;
  if(nk2==101)
  {
  bs2=300000;
  d2=bs2*0.2;
  t2=bs2-d2;
  cout<<"Biaya Sewa Per Hari            : "<<bs2<<endl;
  cout<<"Diskon 20 %                    : "<<d2<<endl;
  cout<<"Total                          : "<<t2<<endl;
  }
  else if (nk2==102)
  {
  bs2=300000;
  d2=bs2*0.2;
  t2=bs2-d2;
  cout<<"Biaya Sewa Per Hari            : "<<bs2<<endl;
  cout<<"Diskon 20 %                    : "<<d2<<endl;
  cout<<"Total                          : "<<t2<<endl;
  }
  else
  {
   cout<<"Maaf No. Kamar tidak tersedia di pelayanan hotel kelas B"<<endl;
  }
  }
  else
  {
   cout<<"Maaf,inputkan pelanggan kelas B"<<endl;
  }
  cout<<endl;
  cout<<"========================================================="<<endl;
  cout<<"Apakah anda ingin kembali ke menu pelayanan hotel kelas B [Y/T]:";
  cin>>menu2;
  cout<<"========================================================="<<endl;
  }while(menu2=='y' || menu2=='Y');
}

void C( )
{
int nk3;
char menu3,pk;
float bs3,d3,t3;
do{
  clrscr();
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Menghitung total biaya pelayanan hotel kelas C:"<<endl;
  cout<<"-----------------------------------------------"<<endl;
  cout<<"Pelanggan Kelas                : ";
  cin>>pk;
  if(pk=='C' || pk=='c')
  {
  cout<<"Masukkan No. Kamar(201/202)    : ";
  cin>>nk3;
  if(nk3==201)
  {
  bs3=400000;
  d3=bs3*0.3;
  t3=bs3-d3;
  cout<<"Biaya Sewa Per Hari            : "<<bs3<<endl;
  cout<<"Diskon 30 %                    : "<<d3<<endl;
  cout<<"Total                          : "<<t3<<endl;
  }
  else if (nk3==202)
  {
  bs3=400000;
  d3=bs3*0.3;
  t3=bs3-d3-80000;
  cout<<"Biaya Sewa Per Hari            : "<<bs3<<endl;
  cout<<"Diskon 30 %                    : "<<d3<<endl;
  cout<<"Total                          : "<<t3<<endl;
  }
  else
  {
   cout<<"Maaf No. Kamar tidak tersedia di pelayanan hotel kelas C"<<endl;
  }
  }
  else
  {
   cout<<"Maaf,inputkan pelanggan kelas C"<<endl;
  }
  cout<<endl;
  cout<<"========================================================="<<endl;
  cout<<"Apakah anda ingin kembali ke menu pelayanan hotel kelas C [Y/T]:";
  cin>>menu3;
  cout<<"========================================================="<<endl;
  }while(menu3=='y' || menu3=='Y');
}




#include<iostream.h>
#include<conio.h>

void lingkaran();  //deklarasi function untuk memanggil fungsi luas lingkaran
void segiempat();  //deklarasi function untuk memanggil fungsi luas segiempat
void segitiga();   //deklarasi function untuk memanggil fungsi luas segitiga
void main()
{
int pil;
char menu;
do{
clrscr();
cout<<"=========================================================================="<<endl;
 cout<<"PROGRAM MENGHITUNG LUAS LINGKARAN, LUAS SEGIEMPAT, DAN SEGITIGA DNG FUNGSI"<<endl;
 cout<<"=========================================================================="<<endl;
 cout<<"PILIHAN BANGUN RUANG YANG INGIN DIHITUNG LUASNYA:"<<endl;
 cout<<"1.LINGKARAN"<<endl;
 cout<<"2.SEGIEMPAT"<<endl;
 cout<<"3.SEGITIGA"<<endl;
 cout<<endl;
 cout<<"Masukkan Pilihan bangun ruang yang ingin anda hitung luasnya [1/2/3]: ";
 cin>>pil;

 if (pil==1)
 {
  lingkaran();
 }

 else if (pil==2)
 {
  segiempat();
 }

 else if (pil==3)
 {
  segitiga();
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

void lingkaran()
{
float r,L1;
  clrscr();
  cout<<"Menghitung luas bangun ruang lingkaran:"<<endl;
  cout<<"Masukkan jari-jari lingkaran(cm): ";
  cin>>r;
  L1=3.14*r*r;
  cout<<"Maka luas bangun lingkaran dengan jari-jari "<<r<<" cm adalah "<<L1<<" cm2"<<endl;

}

void segiempat()
{
float s,L2;
  clrscr();
  cout<<"Menghitung luas bangun ruang segiempat:"<<endl;
  cout<<"Masukkan panjang sisi segiempat(cm): ";
  cin>>s;
  L2=s*s;
  cout<<endl;
  cout<<"Maka luas bangun segiempat dengan panjang sisi "<<s<<" cm adalah "<<L2<<" cm2"<<endl;

}

void segitiga()
{
float a,t,L3;
  clrscr();
  cout<<"Menghitung luas bangun ruang segitiga:"<<endl;
  cout<<"Masukkan alas (cm)  : ";
  cin>>a;
  cout<<"Masukkan tinggi (cm): ";
  cin>>t;
  L3=0.5*a*t;
  cout<<"Maka luas bangun segitiga dengan alas "<<a<<" cm dan tinggi "<<t<<" cm adalah "<<L3<<" cm2"<<endl;

}
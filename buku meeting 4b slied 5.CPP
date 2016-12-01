#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>
main()
{
  char *nama_buku,*bonus[40];
  long harga_buku=0,ppn=0,total_bayar=0;
  float kode,jum,potongan;
  clrscr();
  cout<<"       TOKOH BUKU VERLINTON    \n";
  cout<<"         JL.KASIH No.19      \n";
  cout<<"       ---------------------\n\n";
  cout<<"masukan kode buku [1|2|3]:\n\n";
  cout<<"kode : ";cin >>kode;
  cout<<"jumlah pembelian buku :";cin>>jum;
  cout<<"\n";

  if( kode == '1')
  {
  	strcpy  (nama_buku ,"sukses belajar borland c++");
   harga_buku=50000;
  }
  if( kode == '2')
  {
  	strcpy  (nama_buku,"kunci pribadi yang sukses");
   harga_buku=35000;
  }
   else if( kode == '3')
  {
  	strcpy  (nama_buku,"mencari mutiara dipasar hati");
   harga_buku=45000;
  getch();
  }
  if (jum>=5)
  {
  ppn = 0,1;
  strcpy (*bonus, "Notebook");
  }

  cout<<" kode ="<<kode<<endl;
  cout<<" harga buku ="<<harga_buku<<endl;
  cout<<" potongan ="<<potongan<<endl;
  cout<<" bonus ="<<bonus<<endl;
  cout<<" total bayar ="<<jum*harga_buku<<endl;
  cout<<" ppn ="<<ppn<<endl;
  getch();
}




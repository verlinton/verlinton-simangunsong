#include <conio.h>
#include <iostream.h>
main()
{
char kobar, buku, bns, beli, lagi;
float totbay, jumbel, totbel, potongan, harga;
kembali:
clrscr();
cout<<""<<endl;
cout<<" Masukkan Kode Buku [1..3]  : ";cin>>kobar;
cout<<" Jumlah Pembelian Buku Anda : ";cin>>jumbel;
clrscr();
cout<<"\n ";
cout<<"\t *** TOKO BUKU verlinton *** \n";
cout<<"\t    JL.Kasih sayang  No.9 \n";
cout<<" -------------------------------------------";
cout<<""<<endl;
cout<<" Nama Buku yang Anda Beli     :"<<buku;
switch(kobar)
 {
  case ('1') :
      {
      cout<<"Sukses Belajar Borland C++"<<buku;
      harga= 50000*jumbel ;
      }
      break;
  case ('2') :
      {
      cout<<"Kunci Pribadi Yang Sukses"<<buku;
      harga= 35000*jumbel;
      }
      break;
  case ('3') :
      {
      cout<<"Mencari Mutiara Didasar Hati"<<buku;
      harga= 45000*jumbel;
      }
      break;
 }
cout<<endl;
cout<<" Harga Buku yang Anda Beli    : Rp."<<harga<<endl;
    if (jumbel >5)
  {
   potongan = 0.3*harga;
  }
  else
  {
   potongan= 0;
  }
cout<<" Jumlah Buku yang Anda Beli   : "<<jumbel<<endl;
cout<<" Total Harga                  : Rp."<<harga<<endl;
cout<<" Potongan Harga               : Rp."<<potongan<<endl;

totbay= harga-potongan;
cout<<" ---------------------------------------------"<<endl;
cout<<" Total Bayar                  : Rp."<<totbay<<endl;

cout<<" Bonus yang Anda Dapatkan     :"<<bns;
     if (jumbel >5)
  {
  cout<<"Note Book"<<bns;
  }
   else
  {
   cout<<"Maaf Tidak Dapat Bonus"<<bns;
  }
  cout<<endl;
cout<<" \n ";
cout<<"---------------------------------------------"<<endl;
cout<<"\t **** TERIMA KASIH ****        ";
cout<<endl;
cout<<" Apa mau Input data lagi ???? : ";cin>>lagi;
if (lagi== 'Y' || lagi=='Y')
   {
   goto kembali;
   }
getch();
}
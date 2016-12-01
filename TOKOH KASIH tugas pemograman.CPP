#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
char nama_kasir[15], ntransaksi[10], kode_susu, jenis_susu[15], kode_kasir[15];
float uang_bayar, jumlah_beli, harga, tharga, jharga, diskon, total_bayar, kembali;
 
ulang:
cout<<"-------------------------------------------"<<endl;
cout<<"\n               TOKO SUSU BAYI              "<<endl;
cout<<"\n               -COUNTER LOVE-              "<<endl;
cout<<"\n==========================================="<<endl;
 
cout<<"Input Nomor Transaksi		: ";cin>>ntransaksi;
cout<<"Input Kode Kasir [01/02/03]	: ";cin>>kode_kasir;
cout<<"-------------------------------------------"<<endl;
cout<<"Pilih Kode Susu [N/L/B] 		: ";cin>>kode_susu;
cout<<"Input Jumlah Beli			: ";cin>>jumlah_beli;
cout<<"-------------------------------------------"<<endl;
clrscr();
 
if (kode_susu == 'N'||kode_susu == 'n')
	{
		strcpy(jenis_susu,"Nutrilon Baby");
		harga=125000;
	}
else if (kode_susu == 'L'||kode_susu == 'l')
	{
		strcpy(jenis_susu,"Lactogen Baby");
		harga=105000;
	}
else if (kode_susu == 'B'||kode_susu == 'b')
	{
		strcpy(jenis_susu,"Morinaga");
		harga=135000;
	}
else
	{
		clrscr();
		gotoxy(20,12);
		cout<<"   ANDA SALAH MEMASUKKAN KODE SUSU    ";
		gotoxy(20,13);
		cout<<"**** TEKAN ENTER UNTUK MENGULANG *****";
		getch();
		clrscr();
		goto ulang;
	}
 
if (strcmp(kode_kasir, "01") == 0)
	{
		strcpy(nama_kasir,"Budi");
    }
 
else if (strcmp(kode_kasir, "02") == 0)
	{
		strcpy(nama_kasir,"Slamet");
    }
else if (strcmp(kode_kasir, "03") == 0)
	{
		strcpy(nama_kasir,"verlinton");
    }
else
	{
		clrscr();
		gotoxy(20,12);
		cout<<"   ANDA SALAH MEMASUKKAN KODE KASIR   ";
		gotoxy(20,13);
		cout<<"**** TEKAN ENTER UNTUK MENGULANG *****";
		getch();
		clrscr();
		goto ulang;
	}
 
cout<<"-------------------------------------------"<<endl;
cout<<"\n               TOKO SUSU BAYI              "<<endl;
cout<<"\n               -COUNTER LOVE-              "<<endl;
cout<<"\n==========================================="<<endl;
cout<<"No. Nota : "<<ntransaksi<<"          "<<"Nama Kasir : "<<nama_kasir;
cout<<"\n-------------------------------------------"<<endl;
cout<<"Merk Susu	: "<<jenis_susu<<endl;
cout<<"Harga		: "<<harga<<endl;
cout<<"Jumlah Beli	: "<<jumlah_beli<<endl;
cout<<"\n-------------------------------------------"<<endl;
 
tharga=harga*jumlah_beli;
diskon=0.05*tharga;
jharga=tharga-diskon;
 
cout<<"Jumlah Harga	: "<<jharga<<endl;
cout<<"Diskon		:  "<<diskon<<endl;
 
total_bayar=jharga-diskon;
 
cout<<"-------------------------------------------"<<endl;
cout<<"Total Bayar	: "<<total_bayar<<endl;
cout<<"Uang Bayar	: ";cin>>uang_bayar;
 
kembali = uang_bayar - total_bayar;
 
cout<<"Kembali		: "<<kembali<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"     Terima kasih Atas Kunjungan Anda      "<<endl;
getch();
}
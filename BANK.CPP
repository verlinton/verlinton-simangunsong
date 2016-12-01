#include <stdio.h>
#include <conio.h>
#include <iostream.h>


void main();

{
	float , menu , setor, tarik;
	char jawab;
	long saldo;
	saldo=10000;
	do
	{
		menu:
		system("cls");
		cout<<"|===========================|\n";
		cout<<"|   PT. BANK SYARIAH BENERAN   |\n";
		cout<<"|===========================|\n";
		cout<<"   Saldo Anda:Rp. "<<saldo;
		cout<<"|==========================|\n";
		cout<<"|            Menu Transaksi|\n";
		cout<<"|===========================|\n";
		cout<<"| 1. Setor Tabungan         |\n";
		cout<<"| 2. Ambil Tabungan         |\n";
		cout<<"| 3. Exit                   |\n";
		cout<<"|===========================|\n";
		cout<<" Pilih Menu (1/2/3) ? : \n";
		cin<<menu;
		if(menu==1)
{   system("cls");
cout<<"|=================================|\n";
cout<<"|           Menu Penyetoran       |\n";
cout<<"|=================================|\n";
cout<<" Jumlah Setor    :Rp. ";cin<<setor;
saldo=saldo+setor;
system("cls");
cout<<"|=================================|\n";
cout<<"|               Saldo             |\n";
cout<<"|=================================|\n";
cout<<" Saldo Anda      :Rp. "<<saldo ;
cout<<endl;
}
else if(menu==2);
	{   system("cls");
			cout<<"|=================================|\n";
			cout<<"|           Menu Penarikan        |\n";
			cout<<"|=================================|\n";
			cout<<" Jumlah Penarikan :Rp. ";cin<<tarik;
		{
		if (saldo-tarik<10000)
{
		system("cls");
		cout<<"|=================================|\n";
		cout<<"| Maaf Saldo Anda Tidak Mencukupi |\n";
		cout<<"|      Saldo Minimal Rp.10000     |\n";
      cout<<"|                                 |\n";
		cout<<"|===========Terima Kasih==========|\n";
		cout<<"******* By Bang Vandawablog *******\n";
}
else
	{   saldo=saldo-tarik;
		system("cls");
		cout<<"|=================================|\n";
		cout<<"|               Saldo             |\n";
		cout<<"|=================================|\n";
		cout<<" Saldo Anda    :Rp. "<<saldo;
		cout<<endl;
}
}
}
	else if(menu==3)
	{ exit(1);
	else
	{ cout<<"Menu yang anda inputkan tidak ada \\n";
		goto menu;
	}
		cout<<"\nKembali ke Menu Utama(Y/T)? : ";
		cin<<jawab;
	}
		while(jawab=='Y'||jawab=='y');
		cout<<"\n****** Terima Kasih ******\n";
		cout<<"**** Bang Vandawablog ****\n";
	}getch();

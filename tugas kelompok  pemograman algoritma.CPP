#include <stdio.h>
#include <constrea.h>
#include <iomanip.h>
main()
{
int i,data,jumbel[5];
char nakas[20],lg;
char napem[20],kode[5],baju[5][20];
long int harga[5],total[5],tobay,ukem,ubay;
exis:
clrscr();
tobay=0;
cout<<"..... Exis Shop ....."<<endl;
cout<<"======================"<<endl;
cout<<"nama kasir \t:";gets(nakas);
cout<<"nama pembeli \t:";gets(napem);
cout<<"\nbanyak data \t:";cin>>data;
cout<<"======================"<<endl;
for(i=1;i<=data;i++)
{
cout<<"data ke-:"<<i<<endl;
cout<<"kode buku [K/J/S] \t:";cin>>kode[i];
if (kode[i]=='K'||kode[i]=='k')
{
strcpy(baju[i],"kemeja");
harga[i]=150000;
}
else if (kode[i]=='J'||kode[i]=='j')
{
strcpy(baju[i],"jaket");
harga[i]=20000;
}
else if (kode[i]=='S'||kode[i]=='s')
{
strcpy(baju[i],"kaos");
harga[i]=50000;
}
cout<<"nama baju \t:"<<baju[i]<<endl;
cout<<"harga baju \t:"<<harga[i]<<endl;
cout<<"jumlah beli \t:";cin>>jumbel[i];cout<<endl;
total[i]=harga[i]*jumbel[i];
}
clrscr();
cout<<"nama pembeli :"<<napem<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"no kode baju nama baju jumlah beli harga     total"<<endl;
cout<<"-----------------------------------------------------"<<endl;
	 //12345678901234567890123456789012345678901234567890
for(i=1;i<=data;i++)
{
gotoxy(1,4+i);cout<<i;
gotoxy(7,4+i);cout<<kode[i];
gotoxy(15,4+i);cout<<baju[i];
gotoxy(25,4+i);cout<<jumbel[i];
gotoxy(36,4+i);cout<<harga[i];
gotoxy(46,4+i);cout<<total[i]<<endl;

tobay+=total[i];
}
cout<<"-----------------------------------------------------"<<endl;
cout<<"\t\t\t total bayar = Rp. "<<tobay<<endl;
cout<<"\t\t\t uang bayar  = Rp. ";cin>>ubay;
ukem=ubay-tobay;
cout<<"\t\t\t kembalian   = Rp. "<<ukem<<endl;
cout<<"ingin input data [Y/T] :" ;
lg = getche();
if(lg=='Y'||lg=='y')
goto exis;
getch();
}


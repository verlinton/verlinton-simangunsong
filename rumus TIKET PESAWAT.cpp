#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

main()
{
                char kd_pesawat[15],nm_pesawat[8],lagi;
   int kls_pesawat, hrg_tiket, jml_tiket, total_bayar;

   awal:
   clrscr();
//            awal:
                cout<<"\t\t\t\t PROGRAM TIKET PESAWAT VERLINTON "<<endl;
   cout<<"\t\t\t\t JAKARTA  -  MALAYSIA "<<endl;
   cout<<"-------------------------------"<<endl;
   cout<<endl;
//            printf("\n\);
                cout<<"Masukkan Kode Pesawat [MPT/GRD/BTV] : ";gets(kd_pesawat);
   cout<<"\nKelas Pesawat : "<<endl;
   cout<<"\t 1. Executive "<<endl;
   cout<<"\t 2. Bisnis    "<<endl;
   cout<<"\t 3. Ekonomi   "<<endl;
   cout<<"\nPilih Kelas [1/2/3] : "; cin>>kls_pesawat;

   if (strcmp(kd_pesawat,"MERPATI")== 0)
    {
                strcpy(nm_pesawat,"MERPATI");

      if(kls_pesawat == 1)
                { hrg_tiket = 1500000;}
      else if (kls_pesawat == 2)
                { hrg_tiket = 900000; }
      else if (kls_pesawat == 3)
                { hrg_tiket == 500000; }
      else{hrg_tiket = 0; }
      }
     else if ( strcmp(kd_pesawat,"GARUDA")== 0)
     {strcpy(nm_pesawat,"GARUDA");
                                if(kls_pesawat == 1)
                {hrg_tiket = 1200000;}
      else if (kls_pesawat == 2)
                {hrg_tiket = 800000;}
      else if (kls_pesawat == 3)
                {hrg_tiket = 400000;}
      else {hrg_tiket = 0;}
     }
    else if ( strcmp(kd_pesawat,"BATAVIA")== 0)
    {strcpy(nm_pesawat,"BATAVIA");
     if(kls_pesawat == 1)
                {hrg_tiket = 1000000;}
      else if (kls_pesawat == 2)
                {hrg_tiket = 700000;}
      else if (kls_pesawat == 3)
      {hrg_tiket = 300000;}
     else
                {hrg_tiket = 0;}
     }

    printf("\n");
    printf("\nNama Pesawat     : %s",nm_pesawat);
    printf("\nHarga Tiket      : %d",hrg_tiket);
    printf("\n");
    cout<<"Jumlah Tiket     : "; cin>>jml_tiket;
    total_bayar = hrg_tiket*jml_tiket;

    printf("Total Bayar      : %d",total_bayar);
    printf("\n\n");
    cout<<"\t\t\t INGIN INPUT LAGI [Y/T] : "; cin>>lagi;
    if (lagi == 'y' || lagi =='Y')
     goto awal;
getch();
}


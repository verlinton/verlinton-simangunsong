#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{
float tugas,absen,uts,uas,na;

cout << "masukan nilai  mahasiswa bsi kelas 12c1"<<endl;
cout <<"*************`*********"<<endl;
cout <<"masukan nilai tugas :",cin>>tugas;
cout <<"masukan nilai absen :",cin>>absen;
cout <<"masukan nilai uas :",cin>>uts;
cout <<"masukan nilai uts :",cin>>uas;
na=(tugas*0.1)+(absen*0.2)+(uas*0.3)+(uts*0.4);
cout <<"hasil akhir:"<<na;

getch();
}

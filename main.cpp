#include <iostream>
#include <windows.h>
using namespace std;
// Nama = ALDI
// Nim  = 1121031014
// Kelas= B
int main()
{
    //input jam,menit,detik//
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
        //output jam,menit,detik//
        cout<<"set jam : "<<endl;
        cin>>HH;
        cout<<"set menit : "<<endl;
        cin>>MM;
        cout<<"set detik : "<<endl;
        cin>>SS;
        if(HH<23&&MM<59&&SS<59)
        b++;
        else
        system("cls");
    }
    //looping untuk menentukan true dan false yg sudah di tentukan di soal//
    //jika true program akan menampilkan output yg sudah di tentukan//
    //jika false program akan mengulang pada tampilan awal//
    while(a==0)
    {
        system("cls");
        cout<<HH<<":"<<MM<<":"<<SS<<endl;
        Sleep(1000);
        SS++;
        if(SS>59)
        {
            SS=0;
            MM++;
        }
        if(MM>59)
        {
            MM=0;
            HH++;
        }
        if(HH>23)
        {
            HH=0;
        }
    }
    return 0;
}

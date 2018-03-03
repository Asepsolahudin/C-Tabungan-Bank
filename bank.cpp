#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

void main ()
{
   int saldo, menu, setor, ambil;
   saldo = 10000;
   do
   {
   	clrscr ();
   	puts ("---------------------------------------");
        puts ("     PT. BANK SYARIAH BENERAN          ");
        puts ("---------------------------------------");
        cout << " SALDO : "<< saldo <<endl;
        cout <<"\n";
        puts (" MENU TRANSAKSI ");
   	cout <<"\n";
   	puts (" 1. SETOR TABUNGAN ");
   	puts (" 2. AMBIL TABUNGAN ");
   	puts (" 3. EXIT ");
        cout <<"\n";
   	cout << " Pilih menu (1/2/3)? ";
   	cin >> menu;
   	if (menu ==1)
      {
      	 clrscr ();
         puts ("-------------------------------------------------");
         cout<<"                 SETOR TABUNGAN                  "<< endl;
         puts ("-------------------------------------------------");
         cout <<" Masukan Besar Uang Yang Ingin Anda Tabung : Rp.";
         cin >> setor;
         saldo += setor;
         clrscr ();
         puts ("-------------------------------------------------");
         cout << "            Teransaksi anda berhasil           "<<endl;
         puts ("-------------------------------------------------");
         cout << " Silahkan tekan [Enter] untuk kembali ke menu utama ";
         getche ();
      }
      else if (menu ==2)
      {
      	 clrscr ();
         puts ("-------------------------------------------------");
         cout<<"                 AMBIL TABUNGAN                  "<< endl;
         puts ("-------------------------------------------------");
         cout <<" Masukan Besar Uang Yang Ingin Anda Ambil : Rp.";
         cin >> ambil;
         if (saldo-ambil >= 10000)
         {
                clrscr ();
                saldo -= ambil;
                puts ("-------------------------------------------------");
         	cout << "            Teransaksi anda berhasil           "<<endl;
         	puts ("-------------------------------------------------");
         	cout << " Silahkan tekan [Enter] untuk kembali ke menu utama ";
         	getche ();
         }
         else
         {
         	clrscr ();
                saldo -= 0;
                puts ("-------------------------------------------------");
         	cout << "     Maaf saldo anda kurang dari Rp.10000 \n       Teransaksi anda tidak berhasil        "<<endl;
                puts ("-------------------------------------------------");
         	cout << " Silahkan tekan Enter untuk kembali ke menu utama ";
         	getche ();
         }
      }
      else if (menu > 3)
      {
      	clrscr ();
        puts ("-------------------------------------------------");
      	cout<<"     Maaf menu yang anda pilih tidak tersedia    "<<endl;
        puts ("-------------------------------------------------");
        cout << " Silahkan tekan Enter untuk kembali ke menu utama ";
        getche ();
      }
      else
      {
      }
   }
	while (menu != 3);
}

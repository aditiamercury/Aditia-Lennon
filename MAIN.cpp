/* Aditia Kurniawan
* NIM. 16.111.155
* TIF RM 16C
* TUGAS UAS (06/07/2017)
*/

#include <iostream> //input & output stream
#include "Algopencarian.cpp"
#include "Array.cpp"
#include "coba1.cpp"
#include "coba2.cpp"
#include "E-Learning.cpp"
#include "Faktorial.cpp"
#include "Helloworld.cpp"
#include "Maksimum.cpp"
#include "Matrikbertabel.cpp"
#include "Matriks.cpp"
#include "MatriksJumlah.cpp"
#include "PROGRAM_IP_MAHASISWA.cpp"


using namespace std;

int main(){
	int pil;
	system("clear");
		cout<<"-----------------------------\n";
		cout<<"PROGRAM KOMPILASI APPLIKASI\n";
		cout<<"UAS ALGORITMA PEMROGRAMAN II\n";
		cout<<"Dosen : Frencius, MT.\n";
		cout<<"Nama  : Aditia Kurniawan\n\n\n";
        cout<<"-----------------------------\n";
		cout<<"------------MENU-------------\n";
        cout<<"1. Algopencarian\n";
        cout<<"2. Array\n";
        cout<<"3. coba1\n";
        cout<<"4. coba2\n";
        cout<<"5. E-Learning\n";
        cout<<"6. Faktorial\n";
        cout<<"7. Helloworld\n";
        cout<<"8. Maksimum\n";
        cout<<"9. Matrikbertabel\n";
        cout<<"10. Matriks\n";
        cout<<"11. MatriksJumlah\n";
        cout<<"12. PROGRAM_IP_MAHASISWA\n";
	
		
		
        
        cout<<"\n"<<"Masukan Pilihan :";
		cin>>pil;
		
		if(cin.fail()){
			cin.clear(); cin.ignore(); main();
		} else {		
			//seleksi data
			if(pil == 1){ Algopencarian();}
			else if(pil == 2){ Array(); }
            else if(pil == 3){ coba1(); }
            else if(pil == 4){ coba2(); }
            else if(pil == 5){ ELearning(); }
            else if(pil == 6){ Faktor(); }
            else if(pil == 7){ Helloworld(); }
            else if(pil == 8){ Maksimum(); }
            else if(pil == 9){ Matrikbertabel(); }
            else if(pil == 10){ Matriks(); }
            else if(pil == 11){ MatriksJumlah(); }
            else if(pil == 12){ PROGRAM_IP_MAHASISWA(); }
			
			else{
				//return main();
                cout<<"KESALAHAN INPUT, ULANGI!\n\n";
			}
		}		
	
}
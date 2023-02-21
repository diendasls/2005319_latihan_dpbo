/*Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

#include <string>
#include <iostream>
using namespace std;
// class
#include "Manusia.cpp" // parent
#include "SivitasAkademik.cpp" // derived class 1
#include "Mahasiswa.cpp" // derived class 2

int main(){

    // instansiasi
    Mahasiswa mhs;

    mhs.setNik("123456");
    mhs.setAsalUniversitas("X1 University");
    mhs.setEmailEdu("gyulie@x1.edu");
    mhs.setNama("Wira");
    mhs.setJenisKelamin("Laki-laki");
    mhs.setNim("173");
    mhs.setFakultas("Teknik");
    mhs.setProdi("Teknik Elektro");


    // OUTPUT
    cout << "NIK           : " << mhs.getNik()             << endl;
    cout << "ASAL UNIV     : " << mhs.getAsalUniversitas() << endl;
    cout << "EMAIL EDU     : " << mhs.getEmailEdu()        << endl;
    cout << "NAMA          : " << mhs.getNama()            << endl;
    cout << "JENIS KELAMIN : " << mhs.getJenisKelamin()    << endl;
    cout << "NIM           : " << mhs.getNim()             << endl;
    cout << "FAKULTAS      : " << mhs.getFakultas()        << endl;
    cout << "PRODI         : " << mhs.getProdi()           << endl;

    return 0;
}
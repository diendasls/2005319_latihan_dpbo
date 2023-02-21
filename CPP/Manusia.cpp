/*Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

#include <iostream>
#include <string>
using namespace std;

// class Manusia sebagai parent (Superclass)
class Manusia{
    
    // private atribute
    private:
        string nik;
        string nama;
        string jenis_kelamin;

    public:

    Manusia(){ // constructor
    }

    /* SETTER & */

    // NIK
    void setNik(string nik){
        this->nik = nik;
    }

    string getNik(){
        return this->nik;
    }

    // NAMA
    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }

    // JENIS KELAMIN
    void setJenisKelamin(string jenis_kelamin){
        this->jenis_kelamin = jenis_kelamin;
    }

    string getJenisKelamin(){
        return this->jenis_kelamin;
    }

    ~Manusia(){ // destructor
    }
};
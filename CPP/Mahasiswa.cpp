/*Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

#include <iostream>
#include <string>
using namespace std;

// class Mahasiswa sebagai child (subclass) dari SivitasAkademik (derived class 2)
class Mahasiswa : public SivitasAkademik{
    
    // Private atribute
    private:
        string nim;
        string fakultas;
        string prodi;

    public:

    /* SETTER & GETTER */

    Mahasiswa(){ // constructor
    }

    // NIM
    void setNim(string nim){
        this->nim = nim;
    }

    string getNim(){
        return this->nim;
    }

    // FAKULTAS
    void setFakultas(string fakultas){
        this->fakultas = fakultas;
    }

    string getFakultas(){
        return this->fakultas;
    }

    // PRODI
    void setProdi(string prodi){
        this->prodi = prodi;
    }

    string getProdi(){
        return this->prodi;
    }

    ~Mahasiswa(){ // destructor
    }
};
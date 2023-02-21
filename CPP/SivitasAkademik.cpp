/*Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

#include <iostream>
#include <string>
using namespace std;

// class SivitasAkademik sebagai child (subclass) dari Manusia (derived class 1)
class SivitasAkademik : public Manusia{
    
    private:
        string asal_universitas;
        string email_edu;

    public:

    SivitasAkademik(){ // constructor
    }

    /* SETTER & GETTER */

    // ASAL UNIVERSITAS
    void setAsalUniversitas(string asal_universitas){
        this->asal_universitas = asal_universitas;
    }

    string getAsalUniversitas(){
        return this->asal_universitas;
    }

    // EMAIL EDU
    void setEmailEdu(string email_edu){
        this->email_edu = email_edu;
    }

    string getEmailEdu(){
        return this->email_edu;
    }

    ~SivitasAkademik(){ // destructor
    }
};
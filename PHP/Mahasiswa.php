<!-- Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin -->

<?php

// class Mahasiswa sebagai child (subclass) dari SivitasAkademik (derived class 2)
class Mahasiswa extends SivitasAkademik{
    // private atribute
    private $nim;
    private $fakultas;
    private $prodi;

    // constructor
    function __construct(){
    }

    /* SETTER & GETTER */

    // NIM
    function setNim($nim){
        $this->nim =$nim;
    }
    
    function getNim(){
        return $this->nim;
    }
    
    // FAKULTAS
    function setFakultas($fakultas){
        $this->fakultas =$fakultas;
    }
    
    function getFakultas(){
        return $this->fakultas;
    }
    
    // PRODI
    function setProdi($prodi){
        $this->prodi =$prodi;
    }
    
    function getProdi(){
        return $this->prodi;
    }

    // destructor
    function __destruct(){
    }
}

?>
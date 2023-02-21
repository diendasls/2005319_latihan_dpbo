<!-- Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin -->

<?php

// class Manusia sebagai parent (Superclass)
class Manusia{
    // private atribute
    private $nik;
    private $nama;
    private $jenis_kelamin;

    // constructor
    function __construct(){
    }

    /* SETTER & GETTER */
    
    // NIK
    function setNik($nik){
        $this->nik =$nik;
    }
    
    function getNik(){
        return $this->nik;
    }
    
    // NAMA
    function setNama($nama){
        $this->nama =$nama;
    }
    
    function getNama(){
        return $this->nama;
    }
    
    // JENIS KELAMIN
    function setJenisKelamin($jenis_kelamin){
        $this->jenis_kelamin =$jenis_kelamin;
    }
    
    function getJenisKelamin(){
        return $this->jenis_kelamin;
    }
 
    // destructor
    function __destruct(){
    }
}

?>
<!-- Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin -->

<?php

// class SivitasAkademik sebagai child (subclass) dari Manusia (derived class 1)
class SivitasAkademik extends Manusia{
    // private atribute
    private $asal_universitas;
    private $email_edu;

    // constructor
    function __construct(){
    }

    /* SETTER & GETTER */

    // ASAL UNIV
    function setAsalUniversitas($asal_universitas){
        $this->asal_universitas =$asal_universitas;
    }
    
    function getAsalUniversitas(){
        return $this->asal_universitas;
    }
    
    // EMAIL EDU
    function setEmailEdu($email_edu){
        $this->email_edu =$email_edu;
    }
    
    function getEmailEdu(){
        return $this->email_edu;
    }
     
    // destructor
    function __destruct(){
    }
}

?>
<!-- Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin -->

<?php
    include "Manusia.php";
    include "SivitasAkademik.php";
    include "Mahasiswa.php";

    // set atribut class Mahasiswa
    $mhs = new Mahasiswa();
    $mhs->setNik("123456");
    $mhs->setAsalUniversitas("X1 University");
    $mhs->setEmailEdu("gyulie@x1.edu");
    $mhs->setNama("Wira");
    $mhs->setJenisKelamin("Laki-laki");
    $mhs->setNim("173");
    $mhs->setFakultas("Teknik");
    $mhs->setProdi("Teknik Elektro");

    // output
    echo "<b>NIK           : </b>".$mhs->getNik()."<br/>";
    echo "<b>ASAL UNIV     : </b>".$mhs->getAsalUniversitas()."<br/>";
    echo "<b>EMAIL EDU     : </b>".$mhs->getEmailEdu()."<br/>";
    echo "<b>NAMA          : </b>".$mhs->getNama()."<br/>";
    echo "<b>JENIS KELAMIN : </b>".$mhs->getJenisKelamin()."<br/>";
    echo "<b>NIM           : </b>".$mhs->getNim()."<br/>";
    echo "<b>FAKULTAS      : </b>".$mhs->getFakultas()."<br/>";
    echo "<b>PRODI         : </b>".$mhs->getProdi()."<br/>";

?>
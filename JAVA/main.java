//Latihan 2 DPBO

/*Saya Adinda Salsabilla 2005319 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/

// base class, memiliki nik, nama, dan jenis kelamin
class human{
    void nik()
    {
        System.out.println("NIK              = 123456789");
    }
    void nama()
    {
        System.out.println("NAMA             = Wira");
    }
    void jenis_kelamin()
    {
        System.out.println("JENIS KELAMIN    = Laki-laki");
    }
}

//derival class, class turunan dari human -> sivitas akademik
class sivitasAkademik extends human{ // memiliki asal univ dan email education
    void asal_univ()
    {
        System.out.println("ASAL UNIVERSITAS = X1 University");
    }
    void email_edu()
    {
        System.out.println("EMAIL            = gyulie@x1.edu");
    }
}

// derival class, class turunan dari sivitas akademik -> mahasiswa
class mahasiswa extends sivitasAkademik{ // memiliki
    void nim()
    {
        System.out.println("NIM              = 173");
    }
    void fakultas()
    {
        System.out.println("FAKULTAS         = Teknik");
    }
    void prodi()
    {
        System.out.println("PRODI            = Teknik Elektro");
    }
}

//main
class Main
{
    public static void main(String[] args)
    {
        mahasiswa k_Mhs = new mahasiswa();

        // menampilkan semua behaviour
        // System.out.println("NIK");
        k_Mhs.nik();
        // System.out.println("ASAL UNIVERSITAS");
        k_Mhs.asal_univ();
        // System.out.println("EMAIL EDU");
        k_Mhs.email_edu();
        // System.out.println("NAMA");
        k_Mhs.nama();
        // System.out.println("JENIS KELAMIN");
        k_Mhs.jenis_kelamin();
        // System.out.println("NIM");
        k_Mhs.nim();
        // System.out.println("FAKULTAS");
        k_Mhs.fakultas();
        // System.out.println("PRODI");
        k_Mhs.prodi();
    }
}

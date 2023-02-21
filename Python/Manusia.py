# class Manusia sebagai parent
class Manusia:

    def __init__(self) :
    # constructor
        self.nik = ""
        self.nama = ""
        self.jenis_kelamin = ""

    # setter & getter

    # NIK
    def setNik(self, nik):
        self.nik = nik # set nilai atribut nik
    
    def getNik(self):
        return self.nik # mengembalikan nilai atribut nik

    # NAMA
    def setNama(self, nama): 
        self.nama = nama # set nilai atribut nama

    def getNama(self):
        return self.nama # mengembalikan nilai atribut nama

    # JENIS KELAMIN
    def setJenisKelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin # set nilai atribut jenis_kelamin

    def getJenisKelamin(self):
        return self.jenis_kelamin # mengembalikan nilai atribut jenis_kelamin
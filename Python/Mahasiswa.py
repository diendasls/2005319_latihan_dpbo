from SivitasAkademik import SivitasAkademik

# class Mahasiswa sebagai child (subclass) dari SivitasAkademik (derived class 2)
class Mahasiswa(SivitasAkademik):

    def __init__(self) :
    # constructor
        self.nim = ""
        self.fakultas = ""
        self.prodi = ""

    # setter & getter

    # NIM
    def setNim(self, nim):
        self.nim = nim # set nilai atribut nim
    
    def getNim(self):
        return self.nim # mengembalikan nilai atribut nim

    # FAKULTAS
    def setFakultas(self, fakultas):
        self.fakultas = fakultas # set nilai atribut fakultas

    def getFakultas(self):
        return self.fakultas # mengembalikan nilai atribut fakultas

    # PRODI
    def setProdi(self, prodi):
        self.prodi = prodi # set nilai atribut prodi

    def getProdi(self):
        return self.prodi # mengembalikan nilai atribut prodi
    

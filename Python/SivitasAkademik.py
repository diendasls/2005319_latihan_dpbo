from Manusia import Manusia

# class SivitasAkademik sebagai child (subclass) dari Manusia (derived class 1)
class SivitasAkademik(Manusia):

    def __init__(self) :
    # Konstruktor
        self.asal_universitas = ""
        self.email_edu = ""

    # setter & getter

    # ASAL UNIVERSITAS
    def setAsalUniversitas(self, asal_universitas):
        self.asal_universitas = asal_universitas # set nilai atribut asal_universitas
    
    def getAsalUniversitas(self):
        return self.asal_universitas # mengembalikan nilai atribut asal_universitas

    # EMAIL EDU
    def setEmailEdu(self, email_edu):
        self.email_edu = email_edu # set nilai atribut email_edu

    def getEmailEdu(self):
        return self.email_edu # mengembalikan nilai atribut email_edu
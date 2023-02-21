#import 
from Mahasiswa import Mahasiswa

# instansiasi
mhs = Mahasiswa()

# mengeset isi atribut manusia
mhs.setNik("123456")
mhs.setAsalUniversitas("X1 University")
mhs.setEmailEdu("gyulie@x1.edu")
mhs.setNama("Wira")
mhs.setJenisKelamin("Laki-laki")
mhs.setNim("173")
mhs.setFakultas("Teknik")
mhs.setProdi("Teknik Elektro")

# output
print("NIK           : " + str(mhs.getNik()))
print("ASAL UNIV     : " + str(mhs.getAsalUniversitas()))
print("EMAIL EDU     : " + str(mhs.getEmailEdu()))
print("NAMA          : " + str(mhs.getNama()))
print("JENIS KELAMIN : " + str(mhs.getJenisKelamin()))
print("NIM           : " + str(mhs.getNim()))
print("FAKULTAS      : " + str(mhs.getFakultas()))
print("PRODI         : " + str(mhs.getProdi()))
Algoritma menghitung_ip_mahasiswa_tiap_jurusan
	{program ini bertujuan untung menghitung ip mahasiswa tiap jurusan dan juga menghitung ip tertinggi dan terendah khusus mahasiswa jurusan TI dan RPL}

Deklarasi
	double gajiBersih < 0, gajiPokok < 3000000, tunjanganJabatan < 0, tunjanganKeluarga < 0, tunjanganAnak < 0, tambahanGaji < 0, potonganGaji < 0, gajiKotor < 0, pajak < 0, tunjanganPendidikan < 0;

	int nik, jumlahJamKerja, jumlahAnak;

	string namaKaryawan, tingkatPendidikan, status;

	char kodeJabatan;

Deskripsi 
	Write (“DATA DIRI ANDA”)
	Write(“NIK : ”)
	Read (nik)
Write (“nama : ”)
read (nama)
write(“Kode jabatan (S/t/b) : “)
write ("Status Perkawinan (MENIKAH/BELUM)  : ")
read (status)

if (status == "MENIKAH") then
	write ("Jumlah anak : ")
	read(jumlahAnak)
	tunjanganKeluarga < 0.1 * gajiPokok
	if (jumlahAnak > 3) then jumlahAnak < 3
	endif
	tunjanganAnak < 0.05 *  gajiPokok * jumlahAnak;
endif

write ("Jumlah jam kerja	: ")
read(jumlahJamKerja)

case (kodeJabatan) of
	'S' : tunjanganJabatan < 0.2 * gajiPokok
	'T' : tunjanganJabatan < 0.15 * gajiPokok
	'B' : tunjanganJabatan < 0.05 * gajiPokok;
	default : write ("Masukan Kode Jabatan Yang Sesuai!")
endcase

if (tingkatPendidikan == "SMA") then
tunjanganPendidikan < 0.05 * gajiPokok
else if (tingkatPendidikan == "D3") then
	tunjanganPendidikan < 0.1 * gajiPokok
          else if (tingkatPendidikan == "S1") then tunjanganPendidikan < 0.15 * gajiPokok
               else write ("Masukan Tingkat Pendidikan Yang Sesuai!")
endif 



if (jumlahJamKerja > 200) then tambahanGaji < 0.05 * gajiPokok
    else potonganGaji < 0.05 * gajiPokok
endif


gajiKotor < (gajiPokok + tambahanGaji + tunjanganAnak + tunjanganJabatan + tunjanganKeluarga + tunjanganPendidikan) - potonganGaji

if (gajiKotor > 3500000) then pajak < 0.025 * gajiKotor
endif


   gajiBersih < gajiKotor - pajak;

write ("HASIL PERHITUNGAN GAJI") 


  write ("Gaji Pokok : Rp" , gajiPokok)
   write("Tunjangan Keluarga : Rp" , tunjanganKeluarga)
   write("Tunjangan Jabatan: Rp" , tunjanganJabatan)
   write("Tunjangan Pendidikan: Rp" , tunjanganPendidikan)
   write("Tunjangan Anak: Rp" , tunjanganAnak) 
   write("Tambahan Gaji : Rp" , tambahanGaji) 
    write("Potongan Gaji : Rp"  potonganGaji)
   ("Gaji Kotor: Rp" , gajiKotor) 
   
  write("Pajak: Rp" , pajak) 
 write ("Gaji Bersih: Rp" , gajiBersih)

algoritma menghitung_Nilai_akhir_mahasiswa
{algoritma ini bertujuan menghitung nilai akhir seorang Mahasiswa lalu mengelompokan Mahasiswa sesuai nilai hurufnya dan menampilkannya, juga menampilkan Mahasiswa dengan nilai Tertinggi dan Terendah}

deklarasi
    integer noPok, nilPert, nilTug, nilMid, nilFinal, dataKe, tgsKe, preKe;
    integer noPokTinggi, noPokRendah, mhsA, mhsB, mhsC, mhsD, mhsE;
    string nama, ket, namaTinggi, namaRendah;
    real nilTotPre, nilAkhir, nilTotTug, maks = -1, minim = 101;
    char nilHuruf, masihSiswa;

    prosedur inputNilai(input pilihan : integer)
    fungsi validasiBatas(input pesan : string , dataKe , btsBwh, btsAtas : integer) -> integer
    fungsi hitungTotNilai(input total, nilainya : real) -> real
    fungsi rataRata(input total, pembagi, pengali : real) -> real
    fungsi akumulasiMahasiswa(input mhs : integer) -> integer
    prosedur cekNilaiHuruf
    prosedur cariMhsTinggirendah
    prosedur rekapMhs
    prosedur mhsSesuaiNilai(input mhs : string, nilMhs : integer)
    prosedur dataNilaiMhs(input ket : string, noPok : integer, nama : string , nilai : real)
    prosedur hitungNilai
    prosedur tampilNilai

deklarasi
    while true do
        nilTotPre <- 0
        preKe <- 0;
        tgsKe <- 0; 
        nilTotTug <- 0;
        dataKe <- dataKe + 1;

        writr ("Masukan Data Mahasiswa Ke-" , dataKe , " : " )
        write  ("No. Pokok  : ") read (noPok)
        write ("Nama  : ") read (nama)

        write ("Nilai Tugas 1-5 [0-100] : ") 
        inputNilai(5)

        write ("Nilai Presensi 1-15 [1 = Hadir; 0 = Tidak hadir] : ") 
        inputNilai(15)

        hitungNilai
        cekNilaiHuruf
        cariMhsTinggirendah
        tampilNilai

       write ("Masih ada Mahasiswa? [y/t] : ") read  (masihSiswa)
        if (masihSiswa == 't') then break
        endif
    endwhile
    
    rekapMhs



prosedur inputNilai(input pilihan : integer) 
{prosedur untuk menginput 5 nilai tugas dan 15 nilai Presensi}

deklarasi
    integer nilai, i

Deskripsi
    for  i = 1 to i pilihan step 1 do

        if (pilihan == 15) then
            preKe <- preKe + 1
            nilai <- validasiBatas("Nilai Pertemuan ke-", preKe, 0, 1)
            nilTotPre <- hitungTotNilai(nilTotPre, nilai)
        endif

        if (pilihan == 5) then   
            tgsKe <- tgsKe + 1
            nilai <- validasiBatas("Nilai Tugas ke-", tgsKe, 0, 100)
            nilTotTug <- hitungTotNilai(nilTotTug, nilai)
        endif
    endfor


fungsi validasiBatas(input pesan : string , dataKe , btsBwh, btsAtas : integer) -> int
{fungsi mengecek batas inputan nilai}

deklarasi
    integer nilai;

Deskripsi
    while true do
        if ( dataKe == 0 ) then write (pesan, " : " )
        else  write (pesan , dataKe , " : ")
        read (nilai)
        endif

        if (nilai < btsBwh OR nilai > btsAtas) then
            write ("Masukan nilai antara " , btsBwh , "-", btsAtas, "!")  
            continue
        else break; 
        endif
    endwhile
    return nilai


fungsi hitungTotNilai(input total, nilainya : real) -> real 
{prosedur untuk menghitung total nilai tugas dan nilai Presensi }
deklarasi
Deskripsi
    return total + nilainya


fungsi rataRata(input total, pembagi, pengali <- 1 : real) -> real 
{prosedur untuk menghitung ratarata nilai tugas dan Presensi}
deklarasi
Deskripsi
    return (total / pembagi) * pengali


prosedur hitungNilai 
{prosedur untuk menghitung nilai nilai}
deklarasi
Deskripsi
    nilMid <- validasiBatas("Nilai Mid", 0, 0, 100)
    nilFinal <- validasiBatas("Nilai Final", 0, 0, 100)
    nilTotTug <- rataRata(nilTotTug, 5)
    nilTotPre <- rataRata(nilTotPre, 15, 100)
    nilAkhir <- (0.1 * nilTotPre) + (0.2 * nilTotTug) + (0.3 * nilMid) + (0.4 * nilFinal)

prosedur tampilNilai 
{prosedur untuk menampilkan nilai nilai}
deklarasi
Deskripsi
    write ("Nilai Tugas : " , nilTotTug )
    write ("Nilai Presensi : " , nilTotPre) 
    write ("Nilai Akhir : " , nilAkhir )
    write ("Nilai Huruf : " , nilHuruf) 
    write ("Keterangan : " , ket)


fungsi akumulasiMahasiswa(input mhs : integer) -> integer
{prosedur untuk akumulasi sesuai nilai huruf} 
deklarasi
Deskripsi
    return mhs + 1


prosedur cekNilaiHuruf 
(prosedur untuk cek nilai huruf sesuai nilai akhir)
deklarasi
Deskripsi
    if (nilAkhir >= 80 AND nilAkhir <= 100) then
        nilHuruf <- 'A'
        ket  <- "LULUS"
        mhsA <-  akumulasiMahasiswa(mhsA)

    else if (nilAkhir >= 65 AND nilAkhir < 80) then
        nilHuruf <- 'B'
        ket <- "LULUS"
        mhsB <- akumulasiMahasiswa(mhsB);
    else if (nilAkhir >= 50 AND nilAkhir < 65) then  
        nilHuruf <- 'C'
        ket <- "LULUS"
        mhsC <- akumulasiMahasiswa(mhsC);
    else if (nilAkhir >= 40 AND nilAkhir < 50) then 
        nilHuruf <- 'D'
        ket <- "LULUS"
        mhsD <- akumulasiMahasiswa(mhsD);
    else 
        nilHuruf <- 'E'
        ket <- "TIDAK LULUS"
        mhsE <- akumulasiMahasiswa(mhsE)
    endif


prosedur cariMhsTinggirendah 
{prosedur untuk mengecek nilai tertinggi dan terendah}
Deklarasi
Deskripsi
    if (nilAkhir > maks) then
        noPokTinggi <- noPok
        namaTinggi <-nama
        maks <- nilAkhir
    endif

    if (nilAkhir < minim) then
        noPokRendah <- noPok
        namaRendah <- nama
        minim <- nilAkhir
    endif


prosedur rekapMhs 
{prosedur untuk menampilkan rekap mahasiswa}
deklarasi
Deskripsi
    mhsSesuaiNilai("Nilai A", mhsA)
    mhsSesuaiNilai("Nilai B", mhsB)
    mhsSesuaiNilai("Nilai C", mhsC)
    mhsSesuaiNilai("Nilai D", mhsD)
    mhsSesuaiNilai("Nilai E", mhsE)

    dataNilaiMhs("Tertinggi", noPokTinggi, namaTinggi, maks)
    dataNilaiMhs("Terendah", noPokRendah, namaRendah, minim)


prosedur mhsSesuaiNilai(input mhs : string, nilMhs : integer)
{prosedur untuk menampilkan total mahasiswa sessuai nilai huruf}
deklarasi
Deskripsi
    write ( "Jumlah Mahasiswa " , mhs , " : " , nilMhs )


prosedur dataNilaiMhs(input ket : string, noPok : integer, nama : string , nilai : real) 
{prosedur untuk menampilkan mahasiswa dengan nilai tertinggi dan terendah}
deklarasi
Deskripsi
    write ("Data Mahasiswa Nilai " , ket )
    write ("No. Pokok : " , noPok )
    write ("Nama : " , nama )
    write ("Nilai Akhir : " , nilai )

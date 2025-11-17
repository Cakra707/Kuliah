algoritma menghitung_ip-mahasiswa
{program ini digunakan untuk menghitung ip mahasiswa sessuai jurusannya serta menampilkan ip tertinggi untuk mahasiswa jrusan ti dan rpl}

deklarasi
int noPokok, sks, jumlahMatkul, dataKe, totalSks, siswaTI, siswaMI, siswaSI, siswaBD, siswaRPL, siswaKWH, noPokokTinggiTI, noPokokRendahTI, noPokokTinggiRPL, noPokokRendahRPL;

float bobot, bobotxSks, totalBobotxSks, ip, maksIpTI = -1, minIpTI = 9, maksIpRPL = -1, minIpRPL = 9;

string nama, kodeJrsn, jurusan, namaTinggiTI, kodeMatkul, nilaiHuruf, namaRendahTI, namaTinggiRPL, namaRendahRPL, matkul, masihMatkul, masihMahasiswa;


Deskripsi
    while true do 
        dataKe < dataKe + 1
        write ("masukan data ke ", datake)
        write ("no pokok : ")
        read (noPokok)
        write("nama :")
        read(nama)
        write("Kode (TI/SI/MI/RPL/BD/KWH) : ")
        read(kodeJrsn)

        if(kodeJrsn == "TI") then 
            jurusan = "Teknik Informatika"       
            siswaTI++; 
            else if (kodeJrsn == "SI") then 
            jurusan = "Sistem Informasi"; 
            siswaSI++;
            else if (kodeJrsn == "MI") then 
            jurusan = "Manajemen Informatika"
            siswaMI++;
            else if (kodeJrsn == "RPL") then 
            jurusan = "Rekayasa Perangkat Lunak"
            siswaRPL++; 
            else if (kodeJrsn == "BD") then 
            jurusan = "Bisnis Digital"
            siswaBD++;
            else if (kodeJrsn == "KWH") then  
            jurusan = "Kewirausahaan"; 
            siswaKWH++;
            else write ("Masukan kode yang sesuai!") 
            dataKe < datake - 1; 
            continue;
        endif

        write ("Jurusan :")
        read (jurusan)

        totalBobotxSks < 0;
        totalSks < 0;
        jumlahMatkul < 0;

        while true do 
            jumlahMatkul < jumlahMatkul + 1
            write("masukan Data matakuliqh :")
            write("kode :")
            read(kodeMatkul)
            write("nama:")
            readZ(matkul)
            write("Sks:")
            read(sks)
            write("Nilai huruf:")
            read(nilaiHuruf)

            if (nilaiHuruf == "A")then  bobot = 4.00;
                    else if (nilaiHuruf == "A-") then bobot = 3.67;
                    else if (nilaiHuruf == "B+") then bobot = 3.33;
                    else if (nilaiHuruf == "B") then bobot = 3.00;
                    else if (nilaiHuruf == "B-") then bobot = 2.67;
                    else if (nilaiHuruf == "C+") then bobot = 2.33;
                    else if (nilaiHuruf == "C") then bobot = 2.00;
                    else if (nilaiHuruf == "D") then bobot = 1.00;
                    else if (nilaiHuruf == "E") then bobot = 0;
                    else write("Masukan nilai huruf yang sesuai [A,A-,B+,B,B-,C,C+,D,E]!") 
                    continue;
            endif
                    
            write("bobot" , bobot)
            write("Bobot × sks", bobotxSks)

            totalSks < totalSks + sks;
            totalBobotxSks < totalBobotxSks + bobotxSks;
                
            write ("Total SKS           : " , totalSks)
            if (totalSks == 0 ) then
                cout << "\nTotal SKS tidak boleh nol(0)!" <<endl <<endl;
                jumlahMatkul--;
                continue;
            endif
            
            write("Total Bobot x SKS   : ", totalBobotxSks)

            ip < totalBobotxSks / totalSks;

            write("Masih ada Matakuliah [y/t]  : ")
            read(masihMatkul)
            if (masihMatkul == "t") then break;
            endif

        endwhile

        write ("Jumlah matkul        : " , jumlahMatkul) 
        write ("Indeks Prestasi       : " , ip )

        if (jurusan == "Teknik Informatika") then 
            if (ip > maksIpTI) then 
                maksIpTI < ip; 
                noPokokTinggiTI < noPokok; 
                namaTinggiTI < nama; 
            endif          
            if (ip < minIpTI) then 
                minIpTI < ip; 
                noPokokRendahTI < noPokok; 
                namaRendahTI < nama; 
            endif
        endif

        if (jurusan == "Rekayasa Perangkat Lunak") then
            if (ip > maksIpRPL) then  
                maksIpRPL < ip; 
                noPokokTinggiRPL < noPokok; 
                namaTinggiRPL < nama; 
            endif
            if (ip < minIpRPL) then 
                minIpRPL < ip; 
                noPokokRendahRPL < noPokok; 
                namaRendahRPL < nama; 
            endif
        endif

            write("Masih ada mahasiswa lain [y/t]: ")
            read(masihMahasiswa)
            if (masihMahasiswa == "t") then break;
            endif
    endwhile

    write ( "Jumlah Mahasiswa TEKNIK INFORMATIKA   : " ,siswaTI) 
    if (siswaTI > 0) then 
        write( "Indeks Prestasi tertinggi                  : " , maksIpTI)
        write("No. Pokok             : " , noPokokTinggiTI )
        write("Nama       : "  , namaTinggiTI )
        Write("Indeks Prestasi terendah      : " , minIpTI )
        write("No. Pokok        : " ,  noPokokRendahTI)
        write( "Nama          : " , namaRendahTI )
    else write( "Tidak ada data Indeks Prestasi untuk jurusan ini" )
        
    write("Jumlah Mahasiswa REKAYASA PERANGKAT LUNAK  : " , siswaRPL)
    if (siswaRPL > 0) 
        write( "Indeks Prestasi tertinggi  : " , maksIpRPL )
        write(<< "No. Pokok     : " ,noPokokTinggiRPL) 
        write("Nama        : " , namaTinggiRPL) 
        write("Indeks Prestasi terendah      : " , minIpRPL )
        write ("No. Pokok           : " , noPokokRendahRPL )
    write "Nama       : " , namaRendahRPL 
    else write ("Tidak ada data Indeks Prestasi untuk jurusan ini" )
    endif
    
    write ("Jumlah Mahasiswa SISTEM INFORMASI    : " ,siswaSI) 
    write("Jumlah Mahasiswa BISNIS DIGITAL    : " , siswaBD )
    write( "Jumlah Mahasiswa KEWIRAUSAHAAN         : " , siswaKWH)
    write("Jumlah Mahasiswa MANAJEMEN INFORMATIKA   : " ,siswaMI)
    write("Total Jumlah Mahasiswa : " , siswaTI + siswaRPL + siswaSI + siswaBD + siswaKWH + siswaMI)



#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

struct infotype_Mahasiswa{
    string nama_mhs;
    string nim;
    string jurusan;
};
struct infotype_Matkul{
    string nama_matkul;
    string kode;
};

typedef struct elmMhs *adr_Mahasiswa;
typedef struct elmMatkul *adr_Matkul;

struct elmMhs{
    infotype_Mahasiswa infoMhs;
    adr_Mahasiswa NextMhs;
    adr_Matkul Nextmatkul;
};
struct elmMatkul{
    infotype_Matkul infomatkul;
    adr_Matkul Nextmatkul;
};
struct ListMhs{
    adr_Mahasiswa firstMhs;
};
struct ListMatkul{
    adr_Matkul firstmatkul;
};
//YANG DIPERLUKAN UNTUK MAHASISWA
void CreateListMhs(ListMhs &LM);
adr_Mahasiswa createElmMhs(string nama_mhs, string nim, string jurusan);
void insertMhs(ListMhs &LM, adr_Mahasiswa PM);
//YANG DIPERLUKAN UNTUK MATAKULIAH
void CreatListMatkul(ListMatkul &LK);
adr_Matkul createElmMatkul(string nama_matkul, string kode);
void insertMatkul(ListMatkul &LK, adr_Matkul PK);
//FUNGSI TAMBAHAN
adr_Mahasiswa findMhs(ListMhs LM, string nim);
adr_Matkul findMatkul(ListMatkul LK, string nama_matkul);
void setMatkul(ListMhs &LM, ListMatkul &LK, string nim, string nama_matkul);
void tampil(ListMhs LM, ListMatkul LK);

#endif // MLL_H_INCLUDED

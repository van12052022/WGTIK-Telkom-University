#include "MLL.h"
//YANG DIPERLUKAN UNTUK MAHASISWA
void CreateListMhs(ListMhs &LM){
    LM.firstMhs = NULL;
}
adr_Mahasiswa createElmMhs(string nama_mhs, string nim, string jurusan){
    adr_Mahasiswa M = new elmMhs;
    M->infoMhs.nama_mhs = nama_mhs;
    M->infoMhs.nim = nim;
    M->infoMhs.jurusan = jurusan;
    M->NextMhs = NULL;
    M->Nextmatkul = NULL;
    return M;
}
void insertMhs(ListMhs &LM, adr_Mahasiswa PM){
    if(LM.firstMhs == NULL){
        LM.firstMhs = PM;
    }else{
        adr_Mahasiswa p = LM.firstMhs;
        while(p->NextMhs != NULL){
            p = p->NextMhs;
        }
        p->NextMhs = PM;
    }
}
//YANG DIPERLUKAN UNTUK MATAKULIAH
void CreatListMatkul(ListMatkul &LK){
    LK.firstmatkul = NULL;
}
adr_Matkul createElmMatkul(string nama_matkul, string kode){
    adr_Matkul K = new elmMatkul;
    K->infomatkul.nama_matkul = nama_matkul;
    K->infomatkul.kode = kode;
    K->Nextmatkul = NULL;
    return K;
}
void insertMatkul(ListMatkul &LK, adr_Matkul PK){
    if(LK.firstmatkul == NULL){
        LK.firstmatkul = PK;
    }else{
        adr_Matkul p = LK.firstmatkul;
        while(p->Nextmatkul != NULL){
            p = p->Nextmatkul;
        }
        p->Nextmatkul = PK;
    }}
//FUNGSI TAMBAHAN
adr_Mahasiswa findMhs(ListMhs LM, string nim){
    adr_Mahasiswa M = LM.firstMhs;
    while((M!= NULL)&&(M->infoMhs.nim!= nim)){
        M = M->NextMhs;
    }
    if(M->infoMhs.nim == nim){
        return M;
    }else{
        return NULL;
    }
}
adr_Matkul findMatkul(ListMatkul LK, string nama_matkul){
    adr_Matkul K = LK.firstmatkul;
    while((K!= NULL)&&(K->infomatkul.nama_matkul!= nama_matkul)){
        K = K->Nextmatkul;
    }
    if(K->infomatkul.nama_matkul == nama_matkul){
        return K;
    }else{
        return NULL;
    }
}
void setMatkul(ListMhs &LM, ListMatkul &LK, string nim, string nama_matkul){
    adr_Mahasiswa M = findMhs(LM,nim);
    adr_Matkul K = findMatkul(LK,nama_matkul);
    if((M != NULL)&&(K != NULL)){
        M->Nextmatkul = K;
    }
}
void printInfoMhs(ListMhs LM){
    adr_Mahasiswa M = LM.firstMhs;
    while(M != NULL){
        cout<<"Nama        : "<<M->infoMhs.nama_mhs<<endl;
        cout<<"NIM         : "<<M->infoMhs.nim<<endl;
        cout<<"Jurusan     : "<<M->infoMhs.jurusan<<endl;
        cout<<"--------------------------------------"<<endl;
        M = M -> NextMhs;
    }
}
void printInfoMatkul(ListMatkul LK){
    adr_Matkul K = LK.firstmatkul;
    while(K != NULL){
        cout<<"Nama Mata Kuliah : "<<K->infomatkul.nama_matkul<<endl;
        cout<<"Kode             : "<<K->infomatkul.kode<<endl;
        cout<<"--------------------------------------"<<endl;
        K = K->Nextmatkul;
    }
}
void tampil(ListMhs LM, ListMatkul LK){
    adr_Mahasiswa M = LM.firstMhs;
    while(M != NULL){
        cout<<"Nama         : "<<M->infoMhs.nama_mhs<<endl;
        cout<<"NIM          : "<<M->infoMhs.nim<<endl;
        cout<<"Jurusan      : "<<M->infoMhs.jurusan<<endl;
        if(M->Nextmatkul == NULL){
            cout<<"Mata Kuliah  : Belum Ambil"<<endl;
            cout<<"Kode         : -"<<endl;
        }else{
            cout<<"Mata Kuliah  : "<<M->Nextmatkul->infomatkul.nama_matkul<<endl;
            cout<<"Kode         : "<<M->Nextmatkul->infomatkul.kode<<endl;
        }
        cout<<"--------------------------------------"<<endl;
        M = M -> NextMhs;
    }
}
void deleteAll(ListMhs &LM, ListMatkul &LK){
    adr_Mahasiswa M = LM.firstMhs;
    while (M != NULL)
    {
        adr_Mahasiswa p = M;
        M = M->NextMhs;
        delete p;
    }
    LM.firstMhs = NULL;
}

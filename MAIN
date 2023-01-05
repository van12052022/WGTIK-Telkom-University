#include <iostream>
#include "MLL.h"
using namespace std;

int main()
{
    cout<<"--------------KELOMPOK 6--------------"<<endl;
    cout<<"---------------IF-45-02---------------"<<endl<<endl;
    // Data Mahasiswa
    ListMhs LM;
    CreateListMhs(LM);
    adr_Mahasiswa M;
    M = createElmMhs("Maulana","1301213427","SE");
    insertMhs(LM,M);
    M = createElmMhs("Ryvan","1301213422","IF");
    insertMhs(LM,M);
    M = createElmMhs("Gibran","1301215467","IF");
    insertMhs(LM,M);
    M = createElmMhs("Munzir","1301219632","SE");
    insertMhs(LM,M);
    M = createElmMhs("Dinda","1301218743","STD");
    insertMhs(LM,M);
    M = createElmMhs("Putri","1301218854","STD");
    insertMhs(LM,M);
    // Data Matkul
    ListMatkul LK;
    CreatListMatkul(LK);
    adr_Matkul L = createElmMatkul("STD","CII32");
    insertMatkul(LK,L);
    adr_Matkul B = createElmMatkul("MAVEK","CII22");
    insertMatkul(LK,B);
    //Set Mahasiswa dengan Matakuliah
    setMatkul(LM,LK,"1301213427","STD");
    setMatkul(LM,LK,"1301213422","STD");
    setMatkul(LM,LK,"1301215467","MAVEK");
    setMatkul(LM,LK,"1301219632","MAVEK");
    setMatkul(LM,LK,"1301218854","STD");
    cout<<"------------Data Mahasiswa-------------"<<endl;
    printInfoMhs(LM);
    cout<<endl;
    cout<<"------------Data MataKuliah------------"<<endl;
    printInfoMatkul(LK);
    cout<<endl;
    cout<<"------------Data Gabungan--------------"<<endl;
    tampil(LM,LK);
    cout<<endl;
    cout<<"-----------Semua Data dihapus----------"<<endl;
    deleteAll(LM,LK);
    tampil(LM,LK);
    cout<<"-------------Data Terhapus-------------"<<endl;
    return 0;
}

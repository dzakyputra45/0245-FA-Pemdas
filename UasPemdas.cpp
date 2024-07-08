#include <iostream> 
using namespace std;


class MasukUniversitas { 
public: // isi access modifier disini 
    
    int uangPendaftaran; 
    int uangsemester;
    int uangbangunan;
// isi daftar variable yang dibutuhkan di bawah ini 
 
public: 
    MasukUniversitas() { 
        uangPendaftaran = 0;
        uangsemester = 0;
        uangbangunan = 0;
        
        // isi nilai default variable yang dibutuhkan di bawah ini 
    } 
 
    virtual void namaJalurMasuk() { return; }

     
    // isi disini dengan fungsi virtual yang dibutuhkan 

 
    void setUangPendaftaran(int nilai) { 
        this->uangPendaftaran = nilai; 
    } 
 
    float getUangPendaftaran() { 
        return uangPendaftaran; 
    }
 
    // isi setter dan getter variable yang dibutuhkan di bawah ini 
}; 
 
class SNBT : public MasukUniversitas { 
public:
    void namaJalurMasuk() {
        cout << "Masukkan uang pendaftaran :";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester :";
        cin >> uangsemester;
        cout << "Masukkan uang bangunan :";
        cin >> uangbangunan;
        cout << "Total Biaya = " << uangPendaftaran + uangbangunan + uangsemester << "  " << endl;

        int Totalbiaya = uangPendaftaran + uangbangunan + uangsemester;


        cout << "Kategori =  " ;
        if (Totalbiaya > 5000000) {
            cout << "Mahal" << endl;
        } else if (Totalbiaya >= 3000000) {
            cout << "Sedang" << endl;
        } else if (Totalbiaya < 1000000) {
            cout << "Kecil" << endl;
        }
        
        cout << "Rekomendasi =  " ;
        if (Totalbiaya > 5000000) {
            cout << "Tidak Direkomendasikan" << endl;
        } else if (Totalbiaya >= 3000000) {
            cout << "Dipertimbangkan" << endl;
        } else if (Totalbiaya < 1000000) {
            cout << "Direkomendasikan" << endl;
        }

    }
    // isi disini untuk melengkapi class SNBT 
}; 
 
class SNBP : public MasukUniversitas { 
public:
        void namaJalurMasuk() {
        cout << "Masukkan uang pendaftaran :";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester :";
        cin >> uangsemester;
        cout << "Total Biaya = " << uangPendaftaran + uangsemester << "  " << endl;

        int Totalbiaya = uangPendaftaran  + uangsemester;


        cout << "Kategori =  " ;
        if (Totalbiaya > 5000000) {
            cout << "Mahal" << endl;
        } else if (Totalbiaya >= 3000000) {
            cout << "Sedang" << endl;
        } else if (Totalbiaya < 1000000) {
            cout << "Kecil" << endl;
        }

        cout << "Rekomendasi =  " ;
        if (Totalbiaya > 5000000) {
            cout << "Tidak Direkomendasikan" << endl;
        } else if (Totalbiaya >= 3000000) {
            cout << "Dipertimbangkan" << endl;
        } else if (Totalbiaya < 1000000) {
            cout << "Direkomendasikan" << endl;
        }
    }
    
    // isi disini untuk melengkapi class SNBP 
}; 
 
int main() { 



    while(true) {
        cout << "1. SNBT"  << endl;
        cout << "2. SNBP"  << endl;
        cout << "3. Exit"  << endl;
        cout << "Pilih : " << endl;
        int pilih;
        cin >> pilih;
        cout << endl;

        
        if (pilih == 1) {
            SNBT snbt;
            snbt.namaJalurMasuk();
        } else if (pilih == 2) {
            SNBP snbp;
            snbp.namaJalurMasuk();
        } else if (pilih == 3) {
            break;
        }
    }

    return 0;
    // isi disini untuk fungsi main 
}
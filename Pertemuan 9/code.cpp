#include <iostream>
using namespace std;

int main() {
    struct data {
        long long NISN;
        int nilai;
        string nama;
    };
    data siswa[7];

    siswa[0].NISN = 9960312699;
    siswa[1].NISN = 9963959682;
    siswa[2].NISN = 9950310962;
    siswa[3].NISN = 9970272750;
    siswa[4].NISN = 9970293945;
    siswa[5].NISN = 9952382180;
    siswa[6].NISN = 9965653989;

    siswa[0].nama = "Handi Ramadhan";
    siswa[1].nama = "Rio Alfandra";
    siswa[2].nama = "Ronaldo Valentino Uneputty";
    siswa[3].nama = "Achmad Yaumil Fadjri R.";
    siswa[4].nama = "Alivia Rahma Pramesti";
    siswa[5].nama = "Ari Lutfianto";
    siswa[6].nama = "Arief Budiman";

    siswa[0].nilai = 90;
    siswa[1].nilai = 55;
    siswa[2].nilai = 80;
    siswa[3].nilai = 60;
    siswa[4].nilai = 70;
    siswa[5].nilai = 65;
    siswa[6].nilai = 60;

    cout << "Insertion Sort" << endl;
    //Insertion Sort NILAI
    int i, datasize = sizeof(siswa)/sizeof(siswa[0]), temp;
    for (int j=1; j<datasize; j++){
        i=j-1;
        temp=siswa[j].nilai;
        while(siswa[i].nilai > temp && i >= 0){
            siswa[i+1].nilai = siswa[i].nilai;
            i--;
        }
        siswa[i+1].nilai = temp;
    }
    for (int j = 0; j<datasize; j++){
        cout << siswa[j].nilai << " ";
    }
    cout << endl;
    //Insertion Sort NISN
    long long k, tempp;
    for (int j=1; j<datasize; j++){
        k=j-1;
        tempp=siswa[j].NISN;
        while(siswa[k].NISN > tempp && k >= 0){
            siswa[k+1].NISN = siswa[k].NISN;
            k--;
        }
        siswa[k+1].NISN = tempp;
    }
    for (int j = 0; j<datasize; j++){
        cout << siswa[j].NISN << " ";
    }
    cout << endl << endl;
    
    siswa[0].nilai = 90;
    siswa[1].nilai = 55;
    siswa[2].nilai = 80;
    siswa[3].nilai = 60;
    siswa[4].nilai = 70;
    siswa[5].nilai = 65;
    siswa[6].nilai = 60;

    siswa[0].NISN = 9960312699;
    siswa[1].NISN = 9963959682;
    siswa[2].NISN = 9950310962;
    siswa[3].NISN = 9970272750;
    siswa[4].NISN = 9970293945;
    siswa[5].NISN = 9952382180;
    siswa[6].NISN = 9965653989;

    // Selection Sort Nilai
    cout << "Selection Sort" << endl;
    int min_selection_nilai, temp_selection_nilai;
    for (int i=0; i<datasize-1; i++) {
        min_selection_nilai=i;
        for (int j=i+1; j<datasize; j++){
            if (siswa[j].nilai < siswa[min_selection_nilai].nilai) {
                min_selection_nilai=j;
            }
        }
        temp_selection_nilai = siswa[i].nilai;
        siswa[i].nilai = siswa[min_selection_nilai].nilai;
        siswa[min_selection_nilai].nilai=temp_selection_nilai;
    }
    for (int i=0; i<datasize; i++){
        cout << siswa[i].nilai << " ";
    }
    cout << endl;

    //Selection Sort NISN
    long long min_selection_nisn, temp_selection_nisn;
    for (int i=0; i<datasize-1; i++) {
        min_selection_nisn=i;
        for (int j=i+1; j<datasize; j++){
            if (siswa[j].NISN<siswa[min_selection_nisn].NISN) {
                min_selection_nisn=j;
            }
        }
        temp_selection_nisn=siswa[i].NISN;
        siswa[i].NISN=siswa[min_selection_nisn].NISN;
        siswa[min_selection_nisn].NISN=temp_selection_nisn;
    }
    for (int i=0; i<datasize; i++){
        cout << siswa[i].NISN << " ";
    }
    cout << endl << endl;

    siswa[0].nilai = 90;
    siswa[1].nilai = 55;
    siswa[2].nilai = 80;
    siswa[3].nilai = 60;
    siswa[4].nilai = 70;
    siswa[5].nilai = 65;
    siswa[6].nilai = 60;

    siswa[0].NISN = 9960312699;
    siswa[1].NISN = 9963959682;
    siswa[2].NISN = 9950310962;
    siswa[3].NISN = 9970272750;
    siswa[4].NISN = 9970293945;
    siswa[5].NISN = 9952382180;
    siswa[6].NISN = 9965653989;

    //Bubble Sort Nilai
    cout << "Bubble Sort" << endl;
    int temp_bubble_nilai;
    for (int i=0; i<datasize-1; i++){
        for (int j=0; j<datasize-1; j++) {
            if(siswa[j].nilai>siswa[j+1].nilai) {
                temp_bubble_nilai=siswa[j].nilai;
                siswa[j].nilai=siswa[j+1].nilai;
                siswa[j+1].nilai=temp_bubble_nilai;
            }
        }
    }
    for (int i=0; i<datasize; i++){
        cout << siswa[i].nilai << " ";
    }
    cout << endl;

    //Bubble Sort NISN
    long long temp_bubble_nisn;
    for (int i=0; i<datasize-1; i++){
        for (int j=0; j<datasize-1; j++) {
            if(siswa[j].NISN>siswa[j+1].NISN) {
                temp_bubble_nisn=siswa[j].NISN;
                siswa[j].NISN=siswa[j+1].NISN;
                siswa[j+1].NISN=temp_bubble_nisn;
            }
        }
    }
    for (int i=0; i<datasize; i++){
        cout << siswa[i].NISN << " ";
    }
    cout << endl << endl;

    cout << "Mencari NISN 9950310962 dengan Binary Search" << endl;
    bool found=false;
    long long i_b = 0, j_b = sizeof(siswa)/sizeof(siswa[0]), k_b, query_nisn = 9950310962; 
    while(!found && i_b<=j_b) {
        k_b=(i_b+j_b)/2;
        if(siswa[k_b].NISN < query_nisn) {
            i_b=k_b+1;
        } else if (siswa[k_b].NISN == query_nisn) {
            found = true;
        } else {
            j_b = k_b-1;
        }
        if (!found) {
            cout << "NISN Tidak Ditemukan" << endl;
        } else {
            cout << "NISN Telah Ditemukan" << endl;
            cout << siswa[k_b].NISN << endl;
            break;
        }
    }
    cout << endl;
    
    cout << "Mengubah nama data yang memiliki nilai 60 menjadi Joko" << endl;
    int query_nilai = 60;
    bool found_nilai = false;
    for (int i=0; i<datasize; i++){
        if(siswa[i].nilai = query_nilai) {
            siswa[i].nama = "Joko";
            found = true;
            cout << siswa[i].nama << " " << siswa[i].nilai << endl;
            break;
        }
    }
    if (!found) {
        cout << "Query tidak dapat ditemukan" << endl;
    }
}
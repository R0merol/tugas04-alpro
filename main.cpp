#include <iostream>
using namespace std;


void jobArray(){
    printf("########## Job Array ##########\n\n");

    const int BARIS = 3;
    const int KOLOM = 4;
    int data[BARIS][KOLOM] = {
        {6, 4, 4, 4},
        {7, 8, 2, 6},
        {5, 8, 6, 3}
    };

    // Kalkulasi Jumlah dan Rerata
    int jumlah[BARIS] = {};
    float rerata[BARIS] = {};
    int jumlah2[KOLOM] = {};
    float rerata2[KOLOM] = {};

    for (int i = 0; i < BARIS; i++){

        for (int j = 0; j < KOLOM; j++){
            jumlah[i] += data[i][j];
            jumlah2[j] += data[i][j];
            rerata[i] = (float)jumlah[i] / KOLOM;
            rerata2[j] = (float)jumlah2[j] / BARIS;
        }
    }

    // Gambar Tabel
    printf("No.    | Data 1 | Data 2 | Data 3 | Data 4 | Jumlah | Rerata\n");
    printf("1      | %d      | %d      | %d      | %d      | %d     | %3.2f\n", data[0][0], data[0][1], data[0][2], data[0][3], jumlah[0], rerata[0]);
    printf("2      | %d      | %d      | %d      | %d      | %d     | %3.2f\n", data[1][0], data[1][1], data[1][2], data[1][3], jumlah[1], rerata[1]);
    printf("3      | %d      | %d      | %d      | %d      | %d     | %3.2f\n", data[2][0], data[2][1], data[2][2], data[2][3], jumlah[2], rerata[2]);
    printf("------------------------------------------------------------\n");
    printf("Jumlah | %d     | %d     | %d     | %d     |\n", jumlah2[0], jumlah2[1], jumlah2[2], jumlah2[3]);
    printf("Rerata | %3.2f   | %3.2f   | %3.2f   | %3.2f   |\n", rerata2[0], rerata2[1], rerata2[2], rerata2[3]);
    printf("\n");
}


void jobLoopIfElse(){
    printf("########## Job Loop If Else ##########\n\n");

    const int DIMENSI = 5;

    // Tampilan 1
    printf("-- Tampilan 1 --\n");
    for (int i = 0; i < DIMENSI; i++){

        for (int j = 0; j < DIMENSI; j++){

            if (j < 2){
                cout << 1 << "\t";
            } else{
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }
    cout << endl;

    // Tampilan 2
    printf("-- Tampilan 2 --\n");
    for (int i = 0; i < DIMENSI; i++){

        for (int j = 0; j < DIMENSI; j++){

            if (i < 3){
                cout << 1 << "\t";
            } else{
                cout << 0 << "\t";
            }
        }
        cout << endl;
    }
    cout << endl;

    // Tampilan 3
    printf("-- Tampilan 3 --\n");
    for (int i = 0; i < DIMENSI; i++){

        for (int j = 0; j < DIMENSI; j++){

            if (i == j){
                cout << 0 << "\t";
            } else{
                cout << 1 << "\t";
            }
        }
        cout << endl;
    }
    cout << endl;
}


int main(){
    jobArray();
    jobLoopIfElse();

    return 0;
}

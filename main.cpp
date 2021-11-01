#include <iostream>
using namespace std;


void jobArray(){
    int baris = 3;
    int kolom = 4;
    int data[baris][kolom] = {
        {6, 4, 4, 4},
        {7, 8, 2, 6},
        {5, 8, 6, 3}
    };

    // Kalkulasi Jumlah dan Rerata
    int jumlah[baris] = {};
    float rerata[baris] = {};
    int jumlah2[kolom] = {};
    float rerata2[kolom] = {};
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            jumlah[i] += data[i][j];
            jumlah2[j] += data[i][j];
            rerata2[j] = (float)jumlah2[j] / baris;
        }
        rerata[i] = (float)jumlah[i] / kolom;
    }

    // Gambar Tabel
    printf("########## Job Array ##########\n");
    printf("\n");
    printf("No.    | Data 1 | Data 2 | Data 3 | Data 4 | Jumlah | Rerata\n");
    printf("1      | %d      | %d      | %d      | %d      | %d     | %3.2f\n", data[0][0], data[0][1], data[0][2], data[0][3], jumlah[0], rerata[0]);
    printf("2      | %d      | %d      | %d      | %d      | %d     | %3.2f\n", data[1][0], data[1][1], data[1][2], data[1][3], jumlah[1], rerata[1]);
    printf("3      | %d      | %d      | %d      | %d      | %d     | %3.2f\n", data[2][0], data[2][1], data[2][2], data[2][3], jumlah[2], rerata[2]);
    printf("------------------------------------------------------------\n");
    printf("Jumlah | %d     | %d     | %d     | %d     |\n", jumlah2[0], jumlah2[1], jumlah2[2], jumlah2[3]);
    printf("Rerata | %3.2f   | %3.2f   | %3.2f   | %3.2f   |\n", rerata2[0], rerata2[1], rerata2[2], rerata2[3]);
    printf("\n");
}


void jobNestedLoop(){
    int jumlahTampilan = 3;
    int panjang = 5;
    int tinggi = 5;
    int tampilan[jumlahTampilan][tinggi][panjang] = {{
            {1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
        }, {
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 1, 1, 1},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
        }, {
            {0, 1, 1, 1, 1},
            {1, 0, 1, 1, 1},
            {1, 1, 0, 1, 1},
            {1, 1, 1, 0, 1},
            {1, 1, 1, 1, 0},
        }
    };

    // Gambar Tampilan
    printf("########## Job Nested Loop ##########\n");
    printf("\n");
    for (int i = 0; i < jumlahTampilan; i++){
        printf("-- Tampilan #%d --\n", i + 1);
        for (int j = 0; j < tinggi; j++){
            for (int k = 0; k < panjang; k++){
                cout << tampilan[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}


int main(){
    jobArray();
    jobNestedLoop();

    return 0;
}

/* 
# Hasil jobArray():
########## Job Array ##########

No.    | Data 1 | Data 2 | Data 3 | Data 4 | Jumlah | Rerata
1      | 6      | 4      | 4      | 4      | 18     | 4.50
2      | 7      | 8      | 2      | 6      | 23     | 5.75
3      | 5      | 8      | 6      | 3      | 22     | 5.50
------------------------------------------------------------
Jumlah | 18     | 20     | 12     | 13     |
Rerata | 6.00   | 6.67   | 4.00   | 4.33   |

# Hasil jobNestedLoop():
########## Job Nested Loop ##########

-- Tampilan #1 --
1 1 0 0 0        
1 1 0 0 0        
1 1 0 0 0        
1 1 0 0 0        
1 1 0 0 0        

-- Tampilan #2 --
1 1 1 1 1        
1 1 1 1 1        
1 1 1 1 1        
0 0 0 0 0        
0 0 0 0 0        

-- Tampilan #3 --
0 1 1 1 1        
1 0 1 1 1        
1 1 0 1 1        
1 1 1 0 1        
1 1 1 1 0
*/

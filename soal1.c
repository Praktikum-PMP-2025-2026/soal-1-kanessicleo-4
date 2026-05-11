/*   EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5 - Foundation of Algorithm
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : Kanessi Cleo Kinanti (13224100)
 *   Nama File           : soal1.c
 *   Deskripsi           : Menghitung dan menampilkan derajat setiap simpul,
 *                         simpul maksimum, dan simpul terisolasi. */

#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    int degree[N];
    for (int i = 0; i < N; i++) {
        degree[i] = 0; //Inisialisasi 
    }
    int simpul;
    int max_vertex = -1;
    int max_degree = -1;
    int isolated = 0;

    // Input simpul sekaligus menghitung derajatnya
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &simpul);
            degree[i] += simpul;
        }
    }
    
    // Menampilkan derajat simpul
    for (int i = 0; i < N; i ++) {
        printf("DEGREE %d %d\n", i, degree[i]);
    }

    // Menghitung simpul maksimum
    for (int i = 0; i < N; i ++) {
        if (degree[i] > max_degree) {
            max_degree = degree[i];
            max_vertex = i;
        }
    }
    printf("MAX_VERTEX %d\n", max_vertex);

    // Menghitung simpul terisolasi
    for (int i = 0; i < N; i ++) {
        if (degree[i] == 0) {
            isolated ++;
        }
    }
    if (isolated == 0) {
        printf("ISOLATED NONE\n");
    }
    else {
        printf("ISOLATED ");
        for (int i = 0; i < N; i ++) {
            if (isolated != 0 && degree[i] == 0) {
                printf("%d\n", i);
        }
    }
    }
    return 0;
}

// Referensi
// [1] https://www.geeksforgeeks.org/c/implementation-of-graph-in-c/

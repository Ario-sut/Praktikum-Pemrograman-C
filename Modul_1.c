/** EL2208 Praktikum Pemecahan Masalah dengan C 2023/2024
 *   Modul               : Overview of the C Language
 *   Hari dan Tanggal    : Senin, 26 Februari 2024
 *   Nama (NIM)          : Fitraka Ario Sutansyah (13222072)
 *   Nama File           : Modul_1.c
 *   Deskripsi           : Program ini menyimpan nilai para murid dan dapat memilih nilai yang diinginkan berdasarkan peringkat yang diinginkan
 */

#include <stdio.h>

int main() {
    int N=0, i, j, temp;
    
    printf("Masukkan jumlah Murid : ");
    scanf("%d", &N);
    if (N <= 0)
    {
      printf("Jumlah tidak valid");
    }
    
    else {
    int max = N;
    int array[N];
    for (i = 0; i < N; i++)
    {
      printf("Masukan Nilai ke-%d : ", i+1);
      scanf("%d", &array[i]);      
    }

    for (i = 0; i < N-1; i++)   {
      for (j = 0; j < N-1-i; j++)
      {     
            if(array[j] < array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                }
      }
      }
    printf("Masukan Peringkat yang ingin dilihat : ");
    scanf("%d", &N);
    if (N <= max && N > 0) {
    printf("Peringkat ke-%d memiliki nilai : %d", N, array[N-1]);
    }
    else {
    printf("Peringkat diluar range");
    }
    }    

    return 0;
    } 



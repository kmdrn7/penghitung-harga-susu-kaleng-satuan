#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char susu;
	int ukuran, qtt;
	float total=0, jumlah;

	int HitungPembelian(char susu, int ukuran, int qtt){
		if(susu == 'A' || susu == 'a'){
			if(ukuran == 1){
				total+=15000;
			} else if(ukuran == 2 ){
				total+=20000;
			} else if(ukuran == 3){
				total+=25000;
			}
		} else if(susu == 'B' || susu == 'b'){
			if(ukuran == 1){
				total+=13500;
			} else if(ukuran == 2){
				total+=17000;
			} else if(ukuran == 3){
				total+=20000;
			}
		} else if(susu == 'C' || susu == 'c'){
			if(ukuran == 1){
				total+=15000;
			} else if(ukuran == 2){
				total+=18500;
			} else if(ukuran == 3){
				total+=22000;
			}
		} else {
			printf("\nJenis susu tidak ditemukan\n\n");
		}

		total = total * qtt;
		return total;
	}

	printf("\n");
	printf("======================================================================\n");
	printf("========================= Hitung Harga Susu ==========================\n");
	printf("======================================================================\n\n");

	printf("----------------------------------------------------------------------\n");
	printf("| A. Susu Dancow                                                     |\n");
	printf("| 1. kecil : Rp15.000  | 2. sedang : Rp20.000  | 3. besar : Rp25.000 |\n");
	printf("----------------------------------------------------------------------\n");
	printf("| B. Susu Bendera                                                    |\n");
	printf("| 1. kecil : Rp13.500  | 2. sedang : Rp17.000  | 3. besar : Rp20.000 |\n");
	printf("----------------------------------------------------------------------\n");
	printf("| C. Susu SGM                                                        |\n");
	printf("| 1. kecil : Rp15.000  | 2. sedang : Rp18.500  | 3. besar : Rp22.000 |\n");
	printf("----------------------------------------------------------------------\n");
	printf("\n");
	printf("Masukkan merk susu (A/B/C) : ");
	susu = getchar();
	printf("Masukkan jenis ukuran susu (1/2/3) : ");
	scanf("%d", &ukuran);
	printf("Masukkan banyaknya beli : ");
	scanf("%d", &qtt);

	jumlah = HitungPembelian(susu, ukuran, qtt);

	printf("\nJumlah total yang harus anda bayar adalah Rp%'g\n\n", jumlah);

}

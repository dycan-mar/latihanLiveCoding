# 🚀 Kumpulan Soal Latihan Live Coding Konsep Pemrograman (Bahasa C)

Dokumen ini dirancang khusus untuk mempersiapkan kamu menghadapi ujian **Live Coding** mata kuliah **Konsep Pemrograman** (Semester 1). Soal disusun bertahap mulai dari tingkat dasar hingga studi kasus menengah, menyerupai format ujian praktikum / asisten laboratorium.

---

## 💡 Tips Penting Menghadapi Live Coding Bahasa C
1. **Perhatikan Format I/O:** Dosen/asisten lab biasanya sangat ketat dengan spasi, baris baru (`\n`), dan format desimal (misal `%.2f`).
2. **Buffer `scanf`:** Saat membaca karakter (`char`) setelah angka, gunakan spasi sebelum `%c` (contoh: `scanf(" %c", &ch);`) untuk membuang karakter *newline* / *enter*.
3. **Ukuran Array:** Hindari *out-of-bounds*. Jika batas maksimum elemen $N = 100$, deklarasikan minimal `arr[105]`.
4. **Validasi Kondisi Batas:** Pikirkan kasus seperti angka 0, bilangan negatif, atau array kosong.

---

## 📌 DAFTAR ISI SOAL
- [Level 1: Pemanasan (I/O, Aritmatika, & Format)](#level-1-pemanasan-io-aritmatika--format)
  - [Soal 1.1: Konverter Detik ke Format Waktu Digital](#soal-11-konverter-detik-ke-format-waktu-digital)
  - [Soal 1.2: Kasir Supermarket & Pajak](#soal-12-kasir-supermarket--pajak)
- [Level 2: Percabangan (Branching: if-else, switch)](#level-2-percabangan-branching-if-else-switch)
  - [Soal 2.1: Validasi & Jenis Segitiga](#soal-21-validasi--jenis-segitiga)
  - [Soal 2.2: Tarif Parkir Progresif](#soal-22-tarif-parkir-progresif)
- [Level 3: Perulangan & Pola Bintang (Looping)](#level-3-perulangan--pola-bintang-looping)
  - [Soal 3.1: Pola Belah Ketupat (Diamond Pattern)](#soal-31-pola-belah-ketupat-diamond-pattern)
  - [Soal 3.2: Pencari Bilangan Prima dalam Rentang](#soal-32-pencari-bilangan-prima-dalam-rentang)
  - [Soal 3.3: Pola Angka Zig-zag](#soal-33-pola-angka-zig-zag)
- [Level 4: Array 1 Dimensi](#level-4-array-1-dimensi)
  - [Soal 4.1: Elemen Terbesar Kedua & Modus Sederhana](#soal-41-elemen-terbesar-kedua--modus-sederhana)
  - [Soal 4.2: Pembalik Array & Rotasi K Elemen](#soal-42-pembalik-array--rotasi-k-elemen)
  - [Soal 4.3: Filter Angka Ganjil & Genap](#soal-43-filter-angka-ganjil--genap)
- [Level 5: String & Manipulasi Karakter](#level-5-string--manipulasi-karakter)
  - [Soal 5.1: Detektor Palindrom Bebas Spasi & Case-Insensitive](#soal-51-detektor-palindrom-bebas-spasi--case-insensitive)
  - [Soal 5.2: Sandi Geser Sederhana (Caesar Cipher)](#soal-52-sandi-geser-sederhana-caesar-cipher)
- [Level 6: Array 2 Dimensi (Matriks)](#level-6-array-2-dimensi-matriks)
  - [Soal 6.1: Selisih Mutlak Diagonal Matriks Persegi](#soal-61-selisih-mutlak-diagonal-matriks-persegi)
  - [Soal 6.2: Transpose Matriks M x N](#soal-62-transpose-matriks-m-x-n)
- [Level 7: Fungsi & Struct (Tantangan Lengkap)](#level-7-fungsi--struct-tantangan-lengkap)
  - [Soal 7.1: Rekapitulasi Data Nilai Mahasiswa](#soal-71-rekapitulasi-data-nilai-mahasiswa)

---

## Level 1: Pemanasan (I/O, Aritmatika, & Format)

### Soal 1.1: Konverter Detik ke Format Waktu Digital
**Deskripsi Masalah:**  
Diberikan sebuah bilangan bulat positif $T$ yang menyatakan total durasi dalam satuan detik. Ubah total detik tersebut ke dalam format `HH:MM:SS` (Jam:Menit:Detik) dengan ketentuan digit selalu 2 digit (misal: 5 detik ditulis `05`).

**Format Masukan:**  
Satu baris berisi satu bilangan bulat non-negatif $T$ ($0 \le T \le 864000$).

**Format Keluaran:**  
Satu baris string dengan format `HH:MM:SS`.

**Contoh 1:**  
```text
Masukan:
3665

Keluaran:
01:01:05
```

**Contoh 2:**  
```text
Masukan:
75

Keluaran:
00:01:15
```

---

### Soal 1.2: Kasir Supermarket & Pajak
**Deskripsi Masalah:**  
Sebuah minimarket menerapkan diskon bertingkat:
- Jika total belanja $\ge Rp\,500.000$, diskon $15\%$.
- Jika total belanja antara $Rp\,200.000$ s.d. $< Rp\,500.000$, diskon $10\%$.
- Jika total belanja $< Rp\,200.000$, tidak ada diskon ($0\%$).

Setelah diskon dikurangkan, pembeli dikenakan PPN sebesar $11\%$ dari harga setelah diskon.  
Buatlah program untuk menghitung total akhir yang harus dibayarkan pembeli (bulatkan hingga 2 angka di belakang koma).

**Format Masukan:**  
Satu baris berupa bilangan riil (float/double) menyatakan total belanja.

**Format Keluaran:**  
Cetak 3 baris:
```text
Diskon: Rp <nilai_diskon>
PPN (11%): Rp <nilai_ppn>
Total Bayar: Rp <total_akhir>
```
*(Semua angka diformat dengan 2 angka di belakang koma).*

**Contoh:**  
```text
Masukan:
300000

Keluaran:
Diskon: Rp 30000.00
PPN (11%): Rp 29700.00
Total Bayar: Rp 299700.00
```

---

## Level 2: Percabangan (Branching: if-else, switch)

### Soal 2.1: Validasi & Jenis Segitiga
**Deskripsi Masalah:**  
Diberikan tiga buah bilangan bulat positif $a, b, c$ yang menyatakan panjang sisi-sisi suatu bangun.  
Pertama, cek apakah ketiga panjang sisi tersebut dapat membentuk sebuah segitiga (syarat pembentukan segitiga: jumlah panjang dua sisi mana pun harus lebih besar dari sisi ketiga, yaitu $a+b > c$, $a+c > b$, dan $b+c > a$).  
- Jika tidak valid, cetak `BUKAN SEGITIGA`.
- Jika valid:
  - Jika ketiga sisinya sama panjang, cetak `SEGITIGA SAMA SISI`.
  - Jika tepat dua sisinya sama panjang, cetak `SEGITIGA SAMA KAKI`.
  - Jika ketiga sisinya berbeda panjang:
    - Cek apakah siku-siku (memenuhi teorema Pythagoras: $x^2 + y^2 = z^2$ di mana $z$ sisi terpanjang). Jika ya, cetak `SEGITIGA SIKU-SIKU`.
    - Jika bukan siku-siku, cetak `SEGITIGA SEMBARANG`.

**Format Masukan:**  
Tiga buah bilangan bulat dipisahkan oleh spasi: `a b c`.

**Format Keluaran:**  
Satu baris nama jenis segitiga sesuai ketentuan di atas.

**Contoh 1:**  
```text
Masukan:
3 4 5

Keluaran:
SEGITIGA SIKU-SIKU
```

**Contoh 2:**  
```text
Masukan:
1 2 10

Keluaran:
BUKAN SEGITIGA
```

---

### Soal 2.2: Tarif Parkir Progresif
**Deskripsi Masalah:**  
Sebuah mall menerapkan sistem tarif parkir per jam berdasarkan jenis kendaraan:
- **Motor (kode `'M'`):** Jam pertama Rp 2.000. Setiap jam berikutnya Rp 1.000/jam. Maksimal tarif per hari adalah Rp 10.000.
- **Mobil (kode `'C'`):** Jam pertama Rp 5.000. Setiap jam berikutnya Rp 3.000/jam. Maksimal tarif per hari adalah Rp 35.000.
- Jika jenis kendaraan bukan `'M'` maupun `'C'`, keluarkan pesan error: `JENIS KENDARAAN TIDAK DIKENAL`.

Durasi parkir diinput dalam satuan jam (bilangan bulat positif $\ge 1$). Jika durasi $> 24$, abaikan batasan maksimal harian (cukup hitung maksimal per siklus atau hitung tarif proporsional: untuk latihan ini asumsikan $1 \le \text{durasi} \le 24$ jam).

**Format Masukan:**  
Karakter jenis kendaraan dan bilangan bulat durasi jam, dipisahkan spasi.  
Contoh: `M 4` atau `C 12`.

**Format Keluaran:**  
Biaya parkir dalam format `Total Biaya: Rp <jumlah>` atau pesan error.

**Contoh 1:**  
```text
Masukan:
M 3

Keluaran:
Total Biaya: Rp 4000
```
*(Penjelasan: Jam 1 = 2000, Jam 2-3 = 2 x 1000 = 2000. Total = 4000)*

**Contoh 2:**  
```text
Masukan:
C 15

Keluaran:
Total Biaya: Rp 35000
```
*(Penjelasan: 5000 + 14 * 3000 = 47000, terkena tarif maksimal Rp 35000)*

---

## Level 3: Perulangan & Pola Bintang (Looping)

### Soal 3.1: Pola Belah Ketupat (Diamond Pattern)
*(Soal legendaris yang sering muncul di ujian live coding!)*

**Deskripsi Masalah:**  
Diberikan sebuah bilangan bulat ganjil $N$ ($1 \le N \le 29$). Buatlah pola berlian/belah ketupat menggunakan karakter bintang `*`.  
Tinggi total berlian adalah $N$ baris, dan bagian tengah memiliki lebar $N$ bintang.

**Format Masukan:**  
Satu bilangan ganjil $N$.

**Format Keluaran:**  
Pola bintang berlian dengan spasi di depannya.

**Contoh:**  
```text
Masukan:
5

Keluaran:
  *
 ***
*****
 ***
  *
```

---

### Soal 3.2: Pencari Bilangan Prima dalam Rentang
**Deskripsi Masalah:**  
Diberikan dua bilangan bulat positif $A$ dan $B$ ($1 \le A \le B \le 1000$). Temukan dan cetak seluruh bilangan prima di antara $A$ dan $B$ (inklusif).  
Di baris berikutnya, cetak jumlah total bilangan prima yang ditemukan. Jika tidak ada bilangan prima, cetak `TIDAK ADA`.

**Format Masukan:**  
Dua bilangan bulat $A$ dan $B$ dipisahkan oleh spasi.

**Format Keluaran:**  
- Baris 1: Bilangan-bilangan prima dipisahkan oleh spasi.
- Baris 2: `Jumlah: <total>` atau baris tunggal `TIDAK ADA`.

**Contoh 1:**  
```text
Masukan:
10 30

Keluaran:
11 13 17 19 23 29
Jumlah: 6
```

**Contoh 2:**  
```text
Masukan:
24 28

Keluaran:
TIDAK ADA
```

---

### Soal 3.3: Pola Angka Zig-zag
**Deskripsi Masalah:**  
Diberikan dua bilangan $R$ (baris) dan $C$ (kolom). Isi matriks berukuran $R \times C$ dengan angka mulai dari 1 sampai $R \times C$ secara zig-zag:
- Baris ganjil (indeks 1, 3, 5, ...): dari kiri ke kanan.
- Baris genap (indeks 2, 4, 6, ...): dari kanan ke kiri.

Setiap angka dicetak dengan lebar minimal 4 karakter (gunakan format `%4d`).

**Format Masukan:**  
Dua bilangan bulat $R$ dan $C$ ($1 \le R, C \le 20$).

**Format Keluaran:**  
Tampilan matriks angka zig-zag.

**Contoh:**  
```text
Masukan:
3 4

Keluaran:
   1   2   3   4
   8   7   6   5
   9  10  11  12
```

---

## Level 4: Array 1 Dimensi

### Soal 4.1: Elemen Terbesar Kedua & Frekuensi
**Deskripsi Masalah:**  
Diberikan array berisi $N$ buah bilangan bulat. Temukan nilai **terbesar kedua** (nilai unik terbesar setelah nilai maksimum) dan berapa kali nilai tersebut muncul di dalam array.  
Jika seluruh elemen array bernilai sama (sehingga tidak ada nilai terbesar kedua), cetak `-1`.

**Format Masukan:**  
- Baris 1: Bilangan bulat $N$ ($2 \le N \le 100$).
- Baris 2: $N$ buah bilangan bulat dipisahkan spasi.

**Format Keluaran:**  
Cetak nilai terbesar kedua dan frekuensinya dipisahkan oleh spasi, atau `-1` jika tidak ditemukan.

**Contoh 1:**  
```text
Masukan:
6
10 40 30 40 20 30

Keluaran:
30 2
```
*(Penjelasan: Nilai maksimum adalah 40. Nilai terbesar kedua adalah 30, muncul 2 kali).*

**Contoh 2:**  
```text
Masukan:
4
5 5 5 5

Keluaran:
-1
```

---

### Soal 4.2: Pembalik Array & Rotasi K Elemen
**Deskripsi Masalah:**  
Diberikan sebuah array berukuran $N$. Lakukan rotasi ke kanan sebanyak $K$ kali.  
Contoh rotasi 1 kali: `[1, 2, 3, 4, 5]` menjadi `[5, 1, 2, 3, 4]`.

**Format Masukan:**  
- Baris 1: Dua bilangan bulat $N$ dan $K$ ($1 \le N \le 100$, $0 \le K \le 1000$).
- Baris 2: $N$ buah elemen array.

**Format Keluaran:**  
Elemen array setelah dirotasi sebanyak $K$ kali, dipisahkan oleh spasi.

**Contoh:**  
```text
Masukan:
5 2
1 2 3 4 5

Keluaran:
4 5 1 2 3
```

---

### Soal 4.3: Filter Angka Ganjil & Genap
**Deskripsi Masalah:**  
Diberikan sebuah array berukuran $N$. Pisahkan elemen ke dalam dua kelompok:
1. Semua angka genap terlebih dahulu (pertahankan urutan kemunculan aslinya).
2. Diikuti oleh semua angka ganjil (pertahankan urutan kemunculan aslinya).

**Format Masukan:**  
- Baris 1: Bilangan bulat $N$.
- Baris 2: $N$ buah bilangan bulat.

**Format Keluaran:**  
Deretan angka setelah disusun ulang.

**Contoh:**  
```text
Masukan:
7
9 4 7 2 6 3 8

Keluaran:
4 2 6 8 9 7 3
```

---

## Level 5: String & Manipulasi Karakter

### Soal 5.1: Detektor Palindrom Bebas Spasi & Case-Insensitive
**Deskripsi Masalah:**  
Sebuah kata atau kalimat disebut palindrom jika dibaca dari depan maupun dari belakang menghasilkan urutan karakter yang sama.  
Tulis program yang menerima satu baris teks (dapat mengandung spasi dan huruf besar/kecil), lalu periksa apakah teks tersebut merupakan palindrom dengan **mengabaikan spasi dan perbedaan huruf besar/kecil**.

**Format Masukan:**  
Satu baris string teks (maksimal 200 karakter, dapat menggunakan `fgets`).

**Format Keluaran:**  
Cetak `PALINDROM` jika ya, atau `BUKAN PALINDROM` jika tidak.

**Contoh 1:**  
```text
Masukan:
Kasur ini rusak

Keluaran:
PALINDROM
```

**Contoh 2:**  
```text
Masukan:
Pemrograman C

Keluaran:
BUKAN PALINDROM
```

---

### Soal 5.2: Sandi Geser Sederhana (Caesar Cipher)
**Deskripsi Masalah:**  
Enkripsikan sebuah kalimat dengan menggeser setiap huruf alfabet sebanyak $K$ langkah maju:
- Huruf besar tetap menjadi huruf besar (`'A'` digeser 1 menjadi `'B'`, `'Z'` digeser 1 berputar kembali ke `'A'`).
- Huruf kecil tetap menjadi huruf kecil (`'a'` digeser 1 menjadi `'b'`, `'z'` digeser 1 berputar ke `'a'`).
- Karakter selain alfabet (angka, spasi, tanda baca) **tidak berubah**.

**Format Masukan:**  
- Baris 1: Bilangan bulat $K$ ($0 \le K \le 100$).
- Baris 2: String kalimat (maksimal 200 karakter).

**Format Keluaran:**  
Kalimat yang sudah terenkripsi.

**Contoh:**  
```text
Masukan:
3
Halo Dunia 123!

Keluaran:
Kdor Gxqld 123!
```

---

## Level 6: Array 2 Dimensi (Matriks)

### Soal 6.1: Selisih Mutlak Diagonal Matriks Persegi
**Deskripsi Masalah:**  
Diberikan sebuah matriks persegi berukuran $N \times N$.  
Hitung selisih mutlak $|D_1 - D_2|$ antara:
- $D_1$: Jumlah elemen pada diagonal utama (dari kiri atas ke kanan bawah).
- $D_2$: Jumlah elemen pada diagonal sekunder (dari kanan atas ke kiri bawah).

**Format Masukan:**  
- Baris 1: Bilangan bulat $N$ ($1 \le N \le 20$).
- $N$ baris berikutnya masing-masing berisi $N$ buah bilangan bulat.

**Format Keluaran:**  
Satu bilangan bulat non-negatif berupa nilai mutlak selisih kedua diagonal.

**Contoh:**  
```text
Masukan:
3
1 2 3
4 5 6
9 8 9

Keluaran:
2
```
*(Penjelasan: Diagonal utama = 1 + 5 + 9 = 15. Diagonal sekunder = 3 + 5 + 9 = 17. Selisih mutlak = |15 - 17| = 2).*

---

### Soal 6.2: Transpose Matriks M x N
**Deskripsi Masalah:**  
Diberikan sebuah matriks berukuran $M \times N$. Cetak matriks hasil transpose-nya (berukuran $N \times M$).

**Format Masukan:**  
- Baris 1: Dua bilangan bulat $M$ dan $N$ ($1 \le M, N \le 20$).
- $M$ baris berikutnya masing-masing berisi $N$ bilangan bulat.

**Format Keluaran:**  
Matriks transpose berukuran $N \times M$.

**Contoh:**  
```text
Masukan:
2 3
1 2 3
4 5 6

Keluaran:
1 4
2 5
3 6
```

---

## Level 7: Fungsi & Struct (Tantangan Lengkap)

### Soal 7.1: Rekapitulasi Data Nilai Mahasiswa
**Deskripsi Masalah:**  
Buatlah program menggunakan `struct` untuk mendata $N$ mahasiswa. Setiap mahasiswa memiliki data:
- `NIM` (string tanpa spasi, maks 15 karakter)
- `Nama` (string tanpa spasi, maks 30 karakter)
- `Nilai_Tugas` (float, bobot 20%)
- `Nilai_UTS` (float, bobot 35%)
- `Nilai_UAS` (float, bobot 45%)

Program harus:
1. Menghitung **Nilai Akhir**: $(0.2 \times \text{Tugas}) + (0.35 \times \text{UTS}) + (0.45 \times \text{UAS})$.
2. Menentukan **Status Kelulusan**: Jika Nilai Akhir $\ge 60.0$, status `"LULUS"`, selain itu `"GAGAL"`.
3. Menampilkan daftar seluruh mahasiswa dengan Nilai Akhir dan Status.
4. Menampilkan NIM dan Nama mahasiswa yang memperoleh **Nilai Akhir tertinggi**.

**Format Masukan:**  
- Baris 1: Jumlah mahasiswa $N$ ($1 \le N \le 50$).
- $N$ baris berikutnya masing-masing berisi:  
  `NIM Nama Nilai_Tugas Nilai_UTS Nilai_UAS`

**Format Keluaran:**  
Daftar seluruh mahasiswa beserta nilai akhir (2 desimal) dan statusnya, diikuti informasi mahasiswa dengan nilai tertinggi.

**Contoh:**  
```text
Masukan:
2
12345 Budi 80 75 85
67890 Siti 50 60 55

Keluaran:
--- HASIL NILAI ---
12345 Budi - Nilai Akhir: 80.50 - LULUS
67890 Siti - Nilai Akhir: 55.75 - GAGAL
Mahasiswa Terbaik: Budi (12345) dengan nilai 80.50
```

---

## 🛠️ Rekomendasi Alur Latihan
1. Coba kerjakan mandiri tanpa melihat bantuan AI / Google selama **20-30 menit per soal**.
2. Kompilasi kode menggunakan gcc di terminal:
   ```bash
   gcc nama_file.c -o program
   ./program
   ```
3. Uji dengan contoh kasus di soal dan coba buat kasus uji ekstrem (angka 0, angka kembar, batas atas/bawah).

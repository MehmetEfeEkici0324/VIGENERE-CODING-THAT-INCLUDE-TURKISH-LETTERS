#include <iostream>
#include <locale.h>
#include <string>
#include <cstring>
#include <array>
#include <windows.h>
using namespace std;

/* Char türü değişken 1 byte değerinde veri tutabilir ancak wchar_t ( wide char type ) kullanırsak ve cout yerine wcout
* ya da cin yerine wcin kullandığında Ş Ç Ö Ü İ gibi karakterleri 2 byte ve 4 byte gibi verileri tutabilen wchar_t tutabileceğinden kullanırız.
*/

/* SetConsoleOutputCP ve SetConsoleCP Windows API fonksiyonlarıdır. Konsolun hangi kod sayfası ile çalışacağını belirler.
* SetConsoleCP -> Girdi kod sayfası için ( yani wcin ne okuaycak )
* SetConsoleOutputCP  -> Çıktı kod sayfası için ( yani wcout ne basacak )
* 
* Her dil için ayrı kod sayfası kodu bulunur.
* 1254 -> Türkçe ( Latin-5 )
* 1252 -> Batı Avrupa Dilleri
* 866 -> Rusça
* 65001 -> UTF-8
* 
* SetConsoleCP(1254) ve SetConsoleOutputCP(1254) olarak kullanılabilir.
*/

wchar_t TemelBlok[29] = { L'A',L'B',L'C',L'Ç',L'D',L'E',L'F',L'G',L'Ğ',L'H',L'I',L'İ',L'J',L'K',L'L',L'M',L'N',L'O',L'Ö',L'P',L'R',L'S',L'Ş',L'T',L'U',L'Ü',L'V',L'Y',L'Z' };

wchar_t A[29] = {}, B[29] = {}, C[29] = {}, C2[29] = {}, D[29] = {}, E[29] = {}, F[29] = {}, G[29] = {}, G2[29] = {}, H[29] = {}, I[29] = {}, I2[29] = {}, J[29] = {}, K[29] = {}, L[29] = {}, M[29] = {}, N[29] = {}, O[29] = {}, O2[29] = {}, P[29] = {}, R[29] = {}, S[29] = {}, S2[29] = {}, T[29] = {}, U[29] = {}, U2[29] = {}, V[29] = {}, Y[29] = {}, Z[29] = {};
wchar_t KOD1[29] = {}, KOD2[29] = {}, KOD3[29] = {};

//türkçe karakter sorunu var onu çöz 
void DiziOlusturmaFonksiyonu(int katsayi, wchar_t Dizi[]) {
    if (Dizi == A) {
        for (int i = 0; i < 29; i++) {
            A[i] = TemelBlok[i];
        }
        for (int i = 0; i < 29; i++) {
            wcout << A[i];
        }
    }
    else if (Dizi == B) {
        for (int i = 0; i < 29; i++) {
            B[i] = TemelBlok[i + 1];
            if (i == 28) {
                B[i] = TemelBlok[0];
            }
        }
        for (int i = 0; i < 29; i++) {
            wcout << B[i];
        }
    }
    else {
        for (int i = katsayi; i < 29; i++) {
            if (i == 28) {
                for (int k = 0; k < katsayi + 1; k++) {
                    Dizi[i - katsayi + k] = TemelBlok[k];
                }
            }
            else {
                Dizi[i - katsayi] = TemelBlok[i + 1];
            }
        }
        for (int i = 0; i < 29; i++) {
            wcout << Dizi[i];
        }
    }
}

void KodBloklarınıGoster(wchar_t Sifre[]) {
    cout << "\n\n\t-----------------------------------------";
    for (int i = 0; i < 3; i++) {
        switch (Sifre[i]) {
        case 'A':
            cout << "\n\n\t A | ";
            DiziOlusturmaFonksiyonu(0, A);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'B':
            cout << "\n\n\t B | ";
            DiziOlusturmaFonksiyonu(0, B);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'C':
            cout << "\n\n\t C | ";
            DiziOlusturmaFonksiyonu(1, C);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";;
            cout << "\n";
            break;
        case 'c':
            cout << "\n\n\t Ç | ";
            DiziOlusturmaFonksiyonu(2, C2);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";;
            cout << "\n";
            break;
        case 'D':
            cout << "\n\n\t D | ";
            DiziOlusturmaFonksiyonu(3, D);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'E':
            cout << "\n\n\t E | ";
            DiziOlusturmaFonksiyonu(4, E);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'F':
            cout << "\n\n\t F | ";
            DiziOlusturmaFonksiyonu(5, F);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'G':
            cout << "\n\n\t G | ";
            DiziOlusturmaFonksiyonu(6, G);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'g':
            cout << "\n\n\t Ğ | ";
            DiziOlusturmaFonksiyonu(7, G2);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'H':
            cout << "\n\n\t H | ";
            DiziOlusturmaFonksiyonu(8, H);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'I':
            cout << "\n\n\t I | ";
            DiziOlusturmaFonksiyonu(9, I);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'i':
            cout << "\n\n\t İ | ";
            DiziOlusturmaFonksiyonu(10, I2);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'J':
            cout << "\n\n\t J | ";
            DiziOlusturmaFonksiyonu(11, J);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'K':
            cout << "\n\n\t K | ";
            DiziOlusturmaFonksiyonu(12, K);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'L':
            cout << "\n\n\t L | ";
            DiziOlusturmaFonksiyonu(13, L);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'M':
            cout << "\n\n\t M | ";
            DiziOlusturmaFonksiyonu(14, M);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'N':
            cout << "\n\n\t N | ";
            DiziOlusturmaFonksiyonu(15, N);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'O':
            cout << "\n\n\t O | ";
            DiziOlusturmaFonksiyonu(16, O);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'o':
            cout << "\n\n\t Ö | ";
            DiziOlusturmaFonksiyonu(17, O2);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'P':
            cout << "\n\n\t P | ";
            DiziOlusturmaFonksiyonu(18, P);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'R':
            cout << "\n\n\t R | ";
            DiziOlusturmaFonksiyonu(19, R);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'S':
            cout << "\n\n\t S | ";
            DiziOlusturmaFonksiyonu(20, S);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 's':
            cout << "\n\n\t Ş | ";
            DiziOlusturmaFonksiyonu(21, S2);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'T':
            cout << "\n\n\t T | ";
            DiziOlusturmaFonksiyonu(22, T);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'U':
            cout << "\n\n\t U | ";
            DiziOlusturmaFonksiyonu(23, U);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'u':
            cout << "\n\n\t Ü | ";
            DiziOlusturmaFonksiyonu(24, U2);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'V':
            cout << "\n\n\t V | ";
            DiziOlusturmaFonksiyonu(25, V);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'Y':
            cout << "\n\n\t Y | ";
            DiziOlusturmaFonksiyonu(26, Y);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        case 'Z':
            cout << "\n\n\t Z | ";
            DiziOlusturmaFonksiyonu(27, Z);
            cout << " | ";
            cout << "\n\n\t-----------------------------------------";
            cout << "\n";
            break;
        }
    }
}

void AtamaFonksiyonu(wchar_t sifre, wchar_t Hkod[]) {
     
    switch (sifre) {
    case 'A': 
        for (int i = 0; i < 29; i++) {
            Hkod[i] = A[i];
        }
        break;
    case 'B':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = B[i];
        }
        break;
    case 'C':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = C[i];
        }
        break;
    case 'c':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = C2[i];
        }
        break;
    case 'D':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = D[i];
        }
        break;
    case 'E':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = E[i];
        }
        break;
    case 'F':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = F[i];
        }
        break;
    case 'G':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = G[i];
        }
        break;
    case 'g':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = G2[i];
        }
        break;
    case 'H':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = H[i];
        }
        break;
    case 'I':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = I[i];
        }
        break;
    case 'i':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = I2[i];
        }
        break;
    case 'J':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = J[i];
        }
        break;
    case 'K':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = K[i];
        }
        break;
    case 'L':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = L[i];
        }
        break;
    case 'M':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = M[i];
        }
        break;
    case 'N':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = N[i];
        }
        break;
    case 'O':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = O[i];
        }
        break;
    case 'o':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = O2[i];
        }
        break;
    case 'P':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = P[i];
        }
        break;
    case 'R':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = R[i];
        }
        break;
    case 'S':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = S[i];
        }
        break;
    case 's':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = S2[i];
        }
        break;
    case 'T':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = T[i];
        }
        break;
    case 'U':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = U[i];
        }
        break;
    case 'u':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = U2[i];
        }
        break;
    case 'V':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = V[i];
        }
        break;
    case 'Y':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = Y[i];
        }
        break;
    case 'Z':
        for (int i = 0; i < 29; i++) {
            Hkod[i] = Z[i];
        }
        break;

    }
}

void KodOlustur(wstring metin, wchar_t sifre[])
    {

    wchar_t sifre1 = sifre[0], sifre2 = sifre[1], sifre3 = sifre[2];

    AtamaFonksiyonu(sifre1, KOD1);
    AtamaFonksiyonu(sifre2, KOD2);
    AtamaFonksiyonu(sifre3, KOD3);

    int k = 0, m = 1, n = 2;
    for (int i = 0; i < metin.size(); i++) {
        if (metin[i] == ' ') { 
            metin[i] = metin[i];
            k += 1;
            m += 1;
            n += 1;
        }
        else if (i == k) {
            for (int j = 0; j < 29; j++) {
                if (TemelBlok[j] == metin[k]) {
                    metin[k] = KOD1[j];
                    k = k + 3;
                    break;
                }
            }
        }
        else if (i == m) {
            for (int j = 0; j < 29; j++) {
                if (TemelBlok[j] == metin[m]) {
                    metin[m] = KOD2[j];
                    m = m + 3;
                    break;
                }
            }
        }
        else if (i == n) {
            for (int j = 0; j < 29; j++) {
                if (TemelBlok[j] == metin[n]) {
                    metin[n] = KOD3[j];
                    n = n + 3;
                    break;
                }
            }
        }
        else {
            wcout << "\n\n\t< ENTER A TEXT ( Cx002 ) >";
        }
    }

    wcout << "\n\n\tCODING TEXT : " << metin << endl;

    }

void KodCoz(wstring metin, wchar_t sifre[])
{

    wchar_t sifre1 = sifre[0], sifre2 = sifre[1], sifre3 = sifre[2];

    AtamaFonksiyonu(sifre1, KOD1);
    AtamaFonksiyonu(sifre2, KOD2);
    AtamaFonksiyonu(sifre3, KOD3);

    int k = 0, m = 1, n = 2;
    for (int i = 0; i < metin.size(); i++) {
        if (metin[i] == ' ') {
            metin[i] = metin[i];
            k += 1;
            m += 1;
            n += 1;
        }
        else if (i == k) {
            for (int j = 0; j < 29; j++) {
                if (KOD1[j] == metin[k]) {
                    metin[k] = TemelBlok[j];
                    k = k + 3;
                    break;
                }
            }
        }
        else if (i == m) {
            for (int j = 0; j < 29; j++) {
                if (KOD2[j] == metin[m]) {
                    metin[m] = TemelBlok[j];
                    m = m + 3;
                    break;
                }
            }
        }
        else if (i == n) {
            for (int j = 0; j < 29; j++) {
                if (KOD3[j] == metin[n]) {
                    metin[n] = TemelBlok[j];
                    n = n + 3;
                    break;
                }
            }
        }
        else {
            wcout << "\n\n\t< ENTER A TEXT ( Cx003 ) >";
        }
    }

    wcout << "\n\n\tENCODING TEXT : " << metin << endl;

}


int main() {

    SetConsoleOutputCP(1254);
    SetConsoleCP(1254);
    setlocale(LC_ALL, "Turkish");
    

    int HarfSayisi = 0;
    wchar_t SifreAl;
    wchar_t Sifre[3] = {};

    cout << "\n\n\t | ! PLEASE USE ONLY CAPITAL LETTERS ! | \n\t | ONLY ENTER [ c for Ç , g for Ğ , i for İ , o for Ö , s for Ş ve u for Ü  < ] WHEN YOU ENTER PASSWORD | ";
    cout << "\n\n\t | ENTER PASSWORD FOR VIGENERE ENCODING THAT INCLUDE TURKISH LETTERS | : ";

    passwordpart:

    for (int i = 0; i < 3; i++) {
        wcout << "\n\n\t > ENTER " << i + 1 << ". CHARACTER OF PASSWORD  : ";
        wcin >> SifreAl;
        Sifre[i] = SifreAl;
    }

    system("cls");

    selectpart:

    int secim;
    wcout << "\n\n\t > | SHOW YOUR PASSWORD ROWS | -> 0 ";
    wcout << "\n\t > | TO CODING A TEXT        | -> 1 ";
    wcout << "\n\t > | TO RECODING A TEXT      | -> 2 \n\n\t\t --> ";
    wcin >> secim;

    char YorN;
    wstring metin;
    if (secim == 0) {

        first:

        KodBloklarınıGoster(Sifre);

        cout << "\n\n\t > DO YOU WANNA COME BACK TO SELECTION MENU ( y / n ) : ";
        cin >> YorN;

        if (YorN == 'y') {
            system("timout /t 2 > nul");
            system("cls");
            goto selectpart;
        } 
        else if (YorN == 'n') {
            system("timeout /t 2 > nul");
            system("pause");
        }
        else {
            cout << "\n\n\t < INCORRECT SELECTION - ERROR OF SELECT ( Cx002 ) > ";
            system("timout /t 2 > nul");
            system("cls");
            goto first;
        }
    }
    else if (secim == 1) {

        coding:

        KodBloklarınıGoster(Sifre);
        wcout << "\n\n\t ENTER A TEXT ( MAX 30 CHARACTERS ) : ";
        wcin.ignore();
        getline(wcin, metin);

        try {
            if (metin.size() > 30) {
                throw(metin.size());
            }
            KodOlustur(metin, Sifre);
        }
        catch (size_t errorCode) {
            wcout << "\n\n\t < ENCODING BLOCKED - ERROR OF MOST LETTERS ( Cx001 [ " << errorCode << " ] ) > ";
            system("timeout /t 2 > nul");
            system("cls");
            KodBloklarınıGoster(Sifre);
            goto coding;

        }

        coding2:

        cout << "\n\n\t > DO YOU WANNA MAKE AN ANOTHER TRANSECTION ( y/n ) : ";
        cin >> YorN;

        if (YorN == 'y') {

            system("timeout /t 2 > nul");
            system("cls");
            goto selectpart;

        }
        else if (YorN == 'n') {

            system("timeout /t 2 > nul");
            system("pause");

        }
        else {

            wcout << "\n\n\t < INCORRECT SELECTION - ERROR OF SELECT ( Cx002 ) > ";
            system("timeout /t 2 > nul");
            system("cls");
            goto coding2;

        }
    }
    else if (secim == 2) {

        recoding:

        KodBloklarınıGoster(Sifre);
        wcout << "\n\n\t ENTER A TEXT ( MAX 30 CHARACTERS ) : ";
        wcin.ignore();
        getline(wcin, metin);

        try {
            if (metin.size() > 30) {
                throw(metin.size());
            }
            KodCoz(metin, Sifre);
        }
        catch (size_t errorCode) {
            wcout << "\n\n\t\a < ENCODING BLOCKED - ERROR OF MOST LETTERS ( Cx001 [ " << errorCode << " ] ) > ";
            system("timeout /t 2 > nul");
            system("cls");
            KodBloklarınıGoster(Sifre);
            goto recoding;

        }

        recoding2:

        cout << "\n\n\t > DO YOU WANNA MAKE AN ANOTHER TRANSECTION ( y/n ) : ";
        cin >> YorN;

        if (YorN == 'y') {

            system("timeout /t 2 > nul");
            system("cls");
            goto selectpart;

        }
        else if (YorN == 'n') {

            system("timeout /t 2 > nul");
            system("pause");

        }
        else {

            wcout << "\n\n\t < INCORRECT SELECTION - ERROR OF SELECT ( Cx002 ) > ";
            system("timeout /t 2 > nul");
            system("cls");
            goto recoding2;

        }
    }
    else {
        wcout << "\n\n\t < INCORRECT SELECTION - ERROR OF SELECT ( Cx002 ) > ";
        system("timeout /t 2 > nul");
        system("cls");
        goto selectpart;
    }
}

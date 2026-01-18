# 🔐 Vigenere Cipher - Turkish Language Edition

This project is a C++ implementation of the **Vigenere Cipher**, specifically optimized to support the **Turkish alphabet** (including characters like Ç, Ğ, İ, Ö, Ş, Ü). It utilizes Windows-specific character encoding and wide-character types to ensure seamless cryptographic operations with localized text.

## 🚀 Features

* **Turkish Alphabet Support**: Full integration of the 29-letter Turkish alphabet ($A, B, C, Ç, \dots, Z$) for both keys and messages.
* **Encoding & Decoding**: Securely encrypt plain text into ciphertext and decrypt it back using a 3-character keyword.
* **Wide Character Handling**: Uses `wchar_t` and `wcout/wcin` to accurately process multi-byte Turkish characters.
* **Code Page Management**: Utilizes Windows API functions (`SetConsoleOutputCP`) to set the console to Turkish (Latin-5) encoding.
* **Interactive Menu**: 
    * Show generated Vigenere rows based on your password.
    * Encode text with real-time error handling.
    * Decode encrypted strings back to original text.

## 🛠 Technical Implementation

### Alphabet Block
The core logic relies on a predefined `TemelBlok` containing the Turkish character set:
```cpp
wchar_t TemelBlok[29] = { L'A',L'B',L'C',L'Ç',L'D',L'E',L'F',L'G',L'Ğ',L'H',L'I',L'İ',L'J',L'K',L'L',L'M',L'N',L'O',L'Ö',L'P',L'R',L'S',L'Ş',L'T',L'U',L'Ü',L'V',L'Y',L'Z' };

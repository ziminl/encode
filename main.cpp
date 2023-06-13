



#include <iostream>
std::wstring xorEncryptDecrypt(const std::wstring& data, wchar_t key) {
    std::wstring result = data;
    for (wchar_t& ch : result) {
        ch ^= key;
    }
    return result;
}
std::wstring caesarEncryptDecrypt(const std::wstring& data, int key) {
    std::wstring result = data;
    for (wchar_t& ch : result) {
        if (iswalpha(ch)) {
            if (islower(ch)) {
                ch = L'a' + (ch - L'a' + key) % 26;
            } else if (isupper(ch)) {
                ch = L'A' + (ch - L'A' + key) % 26;
            }
        }
    }
    return result;
}

int main() {
    using namespace std;
    wstring toEncrypt = L"Test";
    wchar_t xorKey = 'd';
    int caesarKey = 3;
    wstring encryptedXOR = xorEncryptDecrypt(toEncrypt, xorKey);
    wcout << "XOR Encrypted data: " << encryptedXOR << endl;
    wstring decryptedXOR = xorEncryptDecrypt(encryptedXOR, xorKey);
    wcout << "XOR Decrypted data: " << decryptedXOR << endl;
    wstring encryptedCaesar = caesarEncryptDecrypt(toEncrypt, caesarKey);
    wcout << "Caesar Encrypted data: " << encryptedCaesar << endl;
    wstring decryptedCaesar = caesarEncryptDecrypt(encryptedCaesar, -caesarKey);
    wcout << "Caesar Decrypted data: " << decryptedCaesar << endl;
    return 0;
}






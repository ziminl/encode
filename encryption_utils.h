#ifndef ENCRYPTION_UTILS_H
#define ENCRYPTION_UTILS_H

#include <string>

std::wstring xorEncryptDecrypt(const std::wstring& data, wchar_t key);
std::wstring caesarEncryptDecrypt(const std::wstring& data, int key);

#endif // ENCRYPTION_UTILS_H

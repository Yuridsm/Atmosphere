#include <openssl/evp.h>
#include <openssl/rand.h>
#include <string>
#include <iostream>
#include <iomanip>

#include "IntroToPointers.h"
#include "Structural.h"

// Fun��o que criptografa uma string com AES-256-CBC
std::string encryptAES(const std::string& plaintext, const std::string& key, const std::string& iv) {
    // Configura��o do algoritmo AES-256-CBC
    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, (unsigned char*)key.c_str(), (unsigned char*)iv.c_str());

    // C�lculo do tamanho do bloco de sa�da
    int block_size = EVP_CIPHER_CTX_block_size(ctx);
    int in_len = plaintext.length();
    int out_len = in_len + block_size;
    unsigned char* ciphertext = new unsigned char[out_len];

    // Criptografia da mensagem
    EVP_EncryptUpdate(ctx, ciphertext, &out_len, (unsigned char*)plaintext.c_str(), in_len);
    int final_len;
    EVP_EncryptFinal_ex(ctx, ciphertext + out_len, &final_len);

    // Cria��o da string de sa�da
    std::string output((char*)ciphertext, out_len + final_len);

    // Libera a mem�ria alocada
    delete[] ciphertext;
    EVP_CIPHER_CTX_free(ctx);

    return output;
}

int main() {
    /*std::string key = "mysecretpassword";
    std::string iv = "initializationvet";
    std::string plaintext = "This is a secret message!";

    std::string ciphertext = encryptAES(plaintext, key, iv);

    std::cout << "Plaintext: " << plaintext << std::endl;

    std::cout << "Encrypted Message"  << std::endl;

    for (const auto& c : ciphertext) {
        std::cout << std::setfill('0') << std::setw(2) << std::uppercase << std::hex << static_cast<int>(c);
    }*/

    Execute();

	return 0;
}
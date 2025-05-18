#include <iostream>
#include <fstream>
using namespace std;

void encryptFile(const string &inputFile, const string &outputFile, int key)
{
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile.is_open() || !outFile.is_open())
    {
        cout << "Error opening files!" << endl;
        return;
    }

    char ch;
    while (inFile.get(ch))
    {
        outFile.put(ch + key);
    }

    inFile.close();
    outFile.close();
    cout << "File encrypted successfully." << endl;
}

void decryptFile(const string &inputFile, const string &outputFile, int key)
{
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile.is_open() || !outFile.is_open())
    {
        cout << "Error opening files!" << endl;
        return;
    }

    char ch;
    while (inFile.get(ch))
    {
        outFile.put(ch - key);
    }

    inFile.close();
    outFile.close();
    cout << "File decrypted successfully." << endl;
}

int main()
{
    string inputFile, encryptedFile, decryptedFile;
    int key;

    cout << "Enter the name of the input text file: ";
    cin >> inputFile;
    cout << "Enter the name for the encrypted output file: ";
    cin >> encryptedFile;
    cout << "Enter the name for the decrypted output file: ";
    cin >> decryptedFile;
    cout << "Enter the encryption key (shift value): ";
    cin >> key;

    encryptFile(inputFile, encryptedFile, key);
    decryptFile(encryptedFile, decryptedFile, key);

    return 0;
}

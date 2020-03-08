#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

bool encrypt(string fileName, int key)
{
    const int sizeOfString = 256;
    int sizeOfFile = 0;
    int count = 0;
    char railMatrix[100][sizeOfString];
    char information[sizeOfString] = { "" };
    char encryptedString[255];
    ofstream encryptedFile;
    fstream textFile;
    textFile.open("D://" + fileName + ".txt");
    if (textFile) {
        encryptedFile.open("D://encrepted.txt");
        while (!textFile.eof()) {
            int k = -1, row = 0, col = 0;
            textFile.getline(information, sizeOfString);
                for (int i = 0; i < key; ++i)
                    for (int j = 0; j < strlen(information); ++j)
                        railMatrix[i][j] = '\n';
                for (int i = 0; i < strlen(information); ++i) {
                    railMatrix[row][col++] = information[i];
                    if (row == 0 || row == key - 1)
                        k = k * (-1);
                    row = row + k;
                }
                for (int i = 0; i < key; ++i) {
                    for (int j = 0; j < strlen(information); ++j)
                        if (railMatrix[i][j] != '\n') 
                            encryptedFile << railMatrix[i][j];
                }
                encryptedFile << endl;
                sizeOfFile += strlen(information);
                count++;       
            }
        encryptedFile.close();
        if (key < sizeOfFile / 2) {
            return true;
        } 
    }
    textFile.close();
    return false;
}

int main()
{
    string fileName;
    cin >> fileName;
    int key = 0;
    cin >> key;
    encrypt(fileName, key);
    return 0;
}
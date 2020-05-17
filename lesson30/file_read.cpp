#include <iostream>
#include <fstream>
#include <cstdlib>


/*
 * app - open file in regime add tp file
 * ate - go to end in file read/write
 * binary - open file in bin
 * in - open in read mode
 * out - open in write mode
 * trunc - delete file if it exists
 */


int main(int argc, char *argv[]) {
    std::ifstream infile("FileName.txt", std::ios::binary);

    if(!infile) {
        std::cerr << "File system not readable or you don't have right permissions to modify this file" << std::endl;
        exit(1);
    } else {
        while(infile) {
            std::string strInput;
            // infile >> strInput;
            getline(infile, strInput);
            std::cout << strInput << std::endl;
        }
    }

    // Write to file (Require <fstream> library)
    // Read file (Require <fstream> library)
    // string data;
    // ifstream file;
    // file.open("file");
    // if (file.is_open())
    // {
    //     file >> data;
    //     cout << data << endl;
    //     file.close();
    // } else {
    //     std::cerr << "File system not readable or you don't have right permissions to modify this file" << std::endl;
    //     exit(1);
    // }

    return 0;
}
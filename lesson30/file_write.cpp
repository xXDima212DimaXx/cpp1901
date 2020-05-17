#include <iostream>
#include <fstream>
#include <cstdlib>


int main(int argc, char *argv[]) {
    std::ofstream outfile("FileName.txt");

    if(!outfile) {
        std::cerr << "File system not readable or you don't have right permissions to modify this file" << std::endl;
        exit(1);
    } else {
        outfile << "Data" << std::endl;
    }

    // Write to file (Require <fstream> library)
    // ofstream file;
    // file.open("file.txt");
    // if (file.is_open())
    // {
    //     file << "Some text here..." << endl;
    //     file.close();
    // } else {
    //     std::cerr << "File system not readable or you don't have right permissions to modify this file" << std::endl;
    //     exit(1);
    // }

    return 0;
}
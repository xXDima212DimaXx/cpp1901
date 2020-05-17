#include <iostream>
#include <fstream>
#include <cstdlib>


int main(int argc, char *argv[]) {
    std::fstream outfile("FileName.txt", std::ios::in | std::ios::out);

    if(!outfile) {
        std::cerr << "File system not readable or you don't have right permissions to modify this file" << std::endl;
        exit(1);
    } else {
        outfile << "Data" << std::endl;
    }

    return 0;
}
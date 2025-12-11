#include "Compressor.h"

#include <iostream>

int main() {
    maxcsolib::Arguments args;
    maxcsolib::default_args(args);
    args.inputs.push_back("B:\\My Programs\\Open Source\\maxcsolib\\cli\\x64\\Release\\Armored Core 3.iso");
    args.outputs.push_back("B:\\My Programs\\Open Source\\maxcsolib\\cli\\x64\\Release\\Armored Core 3.cso");
    maxcsolib::Compressor *compressor = new maxcsolib::Compressor();
    compressor->Compress(args);
    delete compressor;
    std::cout << "Hello World!\n";
}
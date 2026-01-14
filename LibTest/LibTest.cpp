#include "../maxcsolib/Compressor.h"

#include <iostream>

int main() {
    maxcsolib::Arguments args;
    maxcsolib::default_args(args);
    args.inputs.push_back("test.iso");
    args.outputs.push_back("test.cso");
    maxcsolib::Compressor *compressor = new maxcsolib::Compressor();
    compressor->Compress(args);
    delete compressor;
    std::cout << "Hello World!\n";
    return 0;
}

#include <iostream>
#include "latticrypt.h"

int main() {
    std::cout << "Latticrypt - Lattice Based Cryptography Library" << std::endl;
    std::cout << "Version: " << latticrypt::getVersion() << std::endl;
    
    if (latticrypt::initialize()) {
        std::cout << "Library initialized successfully!" << std::endl;
    } else {
        std::cerr << "Failed to initialize library" << std::endl;
        return 1;
    }
    
    std::cout << "\nThis is a template project for lattice-based cryptography." << std::endl;
    std::cout << "Add your implementation in the src/ directory." << std::endl;
    
    return 0;
}

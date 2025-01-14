#include <iostream>
#include <cstdint>

int main() {
    int base_addr_value[64];  // Address stored as an integer

    uint8_t* base_address = (uint8_t*)&base_addr_value;

    // Iterate over 16 bytes, increasing the address by 1 byte each time
    for (int i = 0; i < 16; ++i) {
        // Write some value at the current address (for example, 0xAB)
        char data;
      switch(i%4){
        case 0: data = 0xAB; break;
        case 1: data = 0xBC; break;
        case 2: data = 0xCD; break; 
        case 3: data = 0xEF; break;
      } 
        *base_address = data;

        // Print the current address and value stored at it
        std::cout << "Address: " << std::hex << (uintptr_t)base_address << " Value: " << std::hex << (int)(*base_address) << std::endl;

        // Increment the address by 1 byte
        base_address++;
    }

    return 0;
}

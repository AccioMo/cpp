
#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>
#include <string>
#include <stdint.h>

int main() {
    Data data;
    data.secret = "some secret data";

    std::cout << "Original data address: " << &data << std::endl;

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized data: " << raw << std::endl;

    Data *deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized data address: " << deserializedData << std::endl;
    std::cout << "Deserialized data value: " << deserializedData->secret << std::endl;

    return 0;
}

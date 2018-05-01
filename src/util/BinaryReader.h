#ifndef UTIL_BINARY_READER_H
#define UTIL_BINARY_READER_H

#include <istream>
#include <cstring>

template<typename T>
class BinaryReader {
public:
    static T ReadNative(std::istream& stream);
    static T ReadBigEndian(std::istream& stream);
    static T ReadLittleEndian(std::istream& stream);
};

template<typename T> T BinaryReader<T>::ReadNative(std::istream &stream) {

    T value;
    stream.read(reinterpret_cast<char*>(&value), sizeof(T));

    return value;

}

template<typename T> T BinaryReader<T>::ReadBigEndian(std::istream &stream) {

    unsigned char buffer[sizeof(T)];
    stream.read(reinterpret_cast<char*>(buffer), sizeof(T));

    unsigned char ordered[sizeof(T)];
    memset(ordered, 0, sizeof(T));

    for(size_t i = 0 ; i < sizeof(T) ; i++) {
        ordered[i] = buffer[sizeof(T) - i - 1];
    }

    T value;
    memcpy(&value, ordered, sizeof(T));

    return value;
}

template<typename T> T BinaryReader<T>::ReadLittleEndian(std::istream &stream) {

    unsigned char buffer[sizeof(T)];
    stream.read(reinterpret_cast<char*>(buffer), sizeof(T));

    T value;
    memcpy(&value, buffer, sizeof(T));

    return value;
}

#endif //UTIL_BINARY_READER_H

#ifndef UTIL_BINARY_READER_H
#define UTIL_BINARY_READER_H

#include <istream>

class BinaryReader {
public:
    static uint8_t ReadUInt8(std::istream& stream);
    static uint16_t ReadBigEndianUInt16(std::istream& stream);
    static uint16_t ReadLittleEndianUInt16(std::istream& stream);
    static uint16_t ReadNativeUInt16(std::istream& stream);
    static uint32_t ReadBigEndianUInt32(std::istream& stream);
    static uint32_t ReadLittleEndianUInt32(std::istream& stream);
    static uint32_t ReadNativeUInt32(std::istream& stream);
    static float ReadBigEndianFloat(std::istream& stream);
    static float ReadLittleEndianFloat(std::istream& stream);
    static float ReadNativeFloat(std::istream& stream);
};


#endif //UTIL_BINARY_READER_H

#include "BinaryReader.h"

#include <cstring>

uint8_t BinaryReader::ReadUInt8(std::istream& stream) {

    uint8_t value;
    stream.read(reinterpret_cast<char*>(&value), sizeof(uint8_t));

    return value;
}

uint16_t BinaryReader::ReadBigEndianUInt16(std::istream& stream) {

    unsigned char buffer[sizeof(uint16_t)];
    stream.read(reinterpret_cast<char*>(buffer), sizeof(uint16_t));

    return buffer[1] | buffer[0] << 8;

}

uint16_t BinaryReader::ReadLittleEndianUInt16(std::istream& stream) {

    unsigned char buffer[sizeof(uint16_t)];
    stream.read(reinterpret_cast<char*>(buffer), sizeof(uint16_t));

    return buffer[0] | buffer[1] << 8 ;

}

uint16_t BinaryReader::ReadNativeUInt16(std::istream& stream) {

    uint16_t value;
    stream.read(reinterpret_cast<char*>(&value), sizeof(uint16_t));

    return value;

}

uint32_t BinaryReader::ReadBigEndianUInt32(std::istream& stream) {

    unsigned char buffer[sizeof(uint32_t)];
    stream.read(reinterpret_cast<char*>(buffer), sizeof(uint32_t));

    return buffer[3] | buffer[2] << 8 | buffer[1] << 16 | buffer[0] << 24;

}

uint32_t BinaryReader::ReadLittleEndianUInt32(std::istream& stream) {

    unsigned char buffer[sizeof(uint32_t)];
    stream.read(reinterpret_cast<char*>(buffer), sizeof(uint32_t));

    return buffer[0] | buffer[1] << 8 | buffer[2] << 16 | buffer[3] << 24;

}

uint32_t BinaryReader::ReadNativeUInt32(std::istream& stream) {

    uint32_t value;
    stream.read(reinterpret_cast<char*>(&value), sizeof(uint32_t));

    return value;

}

float BinaryReader::ReadBigEndianFloat(std::istream& stream) {

    unsigned char buffer[sizeof(float)];
    float fl;
    uint32_t val;
    stream.read(reinterpret_cast<char*>(buffer), sizeof(float));

    val = buffer[3] | buffer[2] << 8 | buffer[1] << 16 | buffer[0] << 24;
    memcpy(&fl, &val, sizeof(float));

    return fl;
}

float BinaryReader::ReadLittleEndianFloat(std::istream& stream) {

    unsigned char buffer[sizeof(float)];
    float fl;
    uint32_t val;
    stream.read(reinterpret_cast<char*>(buffer), sizeof(float));

    val = buffer[0] | buffer[1] << 8 | buffer[2] << 16 | buffer[3] << 24;
    memcpy(&fl, &val, sizeof(float));

    return fl;
}

float BinaryReader::ReadNativeFloat(std::istream& stream) {

    float value;
    stream.read(reinterpret_cast<char*>(&value), sizeof(float));

    return value;

}
// enchanted_out_stream.h
#ifndef ENCHANTED_OUT_STREAM_H
#define ENCHANTED_OUT_STREAM_H

#include <iostream>

class EnchantedOutStream {
public:
    template<typename T>
    EnchantedOutStream& operator<<(const T& value) {
        std::cout << value;
        return *this;
    }

    EnchantedOutStream& operator<<(std::ostream& (*manip)(std::ostream&)) {
        manip(std::cout);
        return *this;
    }
};

#endif // ENCHANTED_OUT_STREAM_H

#include <iostream>

void string_notes() {
    /***
        std::string as a container (#include <string>)
            1. size() => the actual size of the string
            2. capacity() => the size of the allocated buffer
            3. resize() => adjusts the string length (truncates or add \0)
            4. reserve(x) => pre-allocate space for x characters (changes the capacity)
            5. push_back(x) => append the character x to the end of a string
            6. pop_back() => delete the last character of a string

        std::string vs. C-style string
            1. convert an std::string to const char* => use c_str()
                          (or allocate a new memory buffer using std::vector<char> and copy the string into it using memcpy)
            2. convert const char* to an std::string => use std::string constructor

        std::string_view (#include <string_view>)
            1. it is a lightweight, non-owning string view. it can refer to an existing string without copying the data, reducing unnecessary
               memory overhead. it is suitable for partial string operations, which incurs extra allocation and copies in std::string
            2. it can be initialized from std::string or C-style string, and you can use many operations similar to std::string. the difference is
               using std::string_view can avoid unnecessary string copying
            3. std::string::substr would involve a memory copy, but std::string_view::substr refers to the original string's memory, therefore
               the returned is a std::string_view

        stringstream (#include <sstream>)
            1. stringstream is a string-based data stream. the concept is similar to std::cin and std::cout (stringstream reads/writes to a "string stream",
               but std::cin and std::cout reads/writes to I/O)
            2. << => insert data into the stream
            3. >> => get from the stream (left to right)
            4. getline(stream, out, separator) => get the first characters of the stream until hits the separator
               istream& getline(istream& input_stream, string& output, char delim); std::getline(std::cin, ...)

        regex (#include <regex>)
            1.
    */
}

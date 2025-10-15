/*
 * Copyright (c) ghgltggamer 2025
 * Written by ghgltggamer
 * Licensed under the MIT License (Checkout the LICENSE for more information)
 * This file contains the defination of the ezstring data type
*/

#ifndef EZLIB_STRING
#define EZLIB_STRING

// Headers
#include <string.h> // required for the ez::backend::STRING

namespace ez{
    namespace backend {
        const int CSTRING = 1081; // Comes by the sum of ASCII Values of EZLIBCSTRING
    }

    namespace flag {
        const int MAX_ITERATION_AUTO = -1399; // Comes by the sum of ASCII Values of MAX_ITERATION_AUTO and we used negative value because positive can also point to the actual length required by the program
        const char NOSTRING[] = "";
    }

    namespace helper {
        unsigned long long strlen(const char msg[]);
        void strwrite (const char* target, char* point); // Write the target to the point
        void strcpy (const char* target, char* point, int max_iterations = ez::flag::MAX_ITERATION_AUTO); // Write the target to the point but respect the max iterations
    }

    class string_t {
        private:
            char* value_ptr = nullptr;
        public:
            int length = 0;
            string_t (char msg[]){
                length = ez::helper::strlen(msg);
                value_ptr = new char[length+1]; // +1 for the null termination
                ez::helper::strwrite(msg, value_ptr); // We used the write because we knows that value_ptr size is always enough to store the full string including null terminator
            }

            char* value(const char* msg = ez::flag::NOSTRING);
            const char* rdvalue();

            ~string_t(){
                delete [] value_ptr;
            }
    };
}

#endif
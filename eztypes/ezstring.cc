/*
 * Copyright (c) ghgltggamer 2025
 * Written by ghgltggamer
 * Licensed under the MIT License (Checkout the LICENSE for more information)
 * This file contains the defination of the ezstring data type
*/

#include "ezstring.hh"

namespace ez{
    namespace helper {
        unsigned long long strlen(const char msg[]){
            unsigned long long length = 0;
            while (*msg != '\0'){
                msg++;
                length++;
            }
            return length;
        }

        void strwrite (const char* target, char* point) // Write the target to the point
        {
            while ((*point++ = *target++) != '\0');
        }

        void strcpy(const char* target, char* point, int max_iterations) {
            int tracker = 0;
            if (max_iterations == ez::flag::MAX_ITERATION_AUTO) {
                while ((*point++ = *target++) != '\0');
            } else {
                while (tracker++ != max_iterations && (*point++ = *target++) != '\0');
            }
        }
    }


    // In type class
    char* string_t::value(const char* msg){
        if (*msg == '\0'){
            char* nstr = new char[length+1];
            ez::helper::strwrite(value_ptr, nstr);
            return nstr;
        }
        else {
            unsigned long long msg_length = ez::helper::strlen(msg);
            delete [] value_ptr;
            value_ptr = new char[msg_length+1];
            ez::helper::strwrite(msg, value_ptr);
            length = msg_length;
            return value_ptr;
        }
    }

    const char* string_t::rdvalue(){
        return value_ptr;
    }

}
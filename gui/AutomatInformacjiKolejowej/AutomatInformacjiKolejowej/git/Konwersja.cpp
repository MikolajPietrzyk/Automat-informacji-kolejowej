#include "Konwersja.h"

#include <msclr\marshal_cppstd.h>

std::string doStringa(System::String^ str) {
    return msclr::interop::marshal_as<std::string>(str);
}

System::String^ zStringa(const std::string str) {
    return gcnew System::String(str.c_str());
}

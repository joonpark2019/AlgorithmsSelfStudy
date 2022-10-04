#include <iostream>
#include <string>

template <typename String>
std::string StrCat(const String& s);

template <typename String, typename... Strings>
std::string StrCat(const String& s, Strings... strs);
/*
 Попытка применения библиотеки fmtlib.
 (c) 2018, Vladimir Gavrilov

 */


#include "../include/format.h"
#include <string>
#include <cstdio>

static const std::string format_string =
    R"~(class {0} : public Abstract_scaner<{1}>{{
public:
    {0}()  = default;
    ~{0}() = default;
private:
    Привет лунатикам.
}};)~";

static const std::string scaner_name     = "Scaner";

static const std::string lexem_info_name = "Lexem";

int main()
{
    auto formatted_string = fmt::format(format_string, scaner_name, lexem_info_name);
    puts(formatted_string.c_str());
    return 0;
}
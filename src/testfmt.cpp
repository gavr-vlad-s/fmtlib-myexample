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

int main()
{
    auto formatted_string = fmt::format(format_string, "Scaner", "Lexem");
    puts(formatted_string.c_str());
    return 0;
}
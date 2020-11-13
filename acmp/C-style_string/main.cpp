#include <iostream>

unsigned strlen(const char *str)
{
    const char * first = str;
    while (*str != '\0'){
        str++;
    }
    return  str - first;
}

void strcat(char *to, const char *from)
{
    char * end_to;
    end_to = strlen(to) + to;

    do {
        *end_to = *from;
        end_to++;
        from++;
    } while (*(end_to - 1) != '\0');
}

bool samestr(const char *a, const char *b){
    while(*b) {
        if (*a != *b) return false;
        a++; b++;
    }
    return true;
}

int strstr(const char *text, const char *pattern)
{
    if(strlen(text) == 0 && strlen(pattern) == 0){
        return 0;
    }
    const char * begin_text = text;
    while(*text) {
        if(samestr(text, pattern)){
            return text - begin_text;
        }
        text++;
    }
    return -1;
}



int main() {
//    char str[] = "ban";
//    std::cout << strlen(str) << std::endl;
//    if(str[3] == '\0') {std::cout << "cpp smart"; }

    char to[] = "";
    char from[] = "jgpepooooopepofff";
    std::cout << strstr(from, to);
    //std::cout << samestr(from,"\0");
    //std::cout << to << std::endl;

    return 0;
}
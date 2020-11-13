#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    size_t size;
    char *str;

    String(const char *str = ""): size(strlen(str)), str(new char[size + 1]){
        strcpy(this->str,str);
    }


    String(size_t n, char c): size(n), str(new char[n + 1]){
        for (int i = 0; i < n; i++){
            this->str[i] = c;
        }
        this->str[n] = '\0';
    }


    void append(String &other){
        char * appended = new char[this->size + other.size + 1];
        strcpy(appended, this->str);
        strcpy(appended + this->size, other.str);
        delete[] this->str;
        str = appended;
        size += other.size;
    }


    ~String(){
        delete[] str;
    }


};
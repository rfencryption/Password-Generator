#include <ctime>
#include <iostream>
#include <unistd.h>
#include <iostream>
std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789101112131415161740529406824"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "!$/()$#$%&/()=?=)(/&%$#!$%&/"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}

int main(int argc, char *argv[]) {
    srand((unsigned)time(NULL) * getpid());
    std::cout << gen_random(20) << "\n";
    return 0;

}


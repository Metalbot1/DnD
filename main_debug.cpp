///This main file is for debugging purposes.

#include "common.h"
#include "util/utilities.h"

int main(){
    std::vector<int> int_testvec = {1, 2, 3, 4, 5, 6, 7};
    std::vector<double> double_testvec = {1.04, 3.141562, 1.41435622};

    print_functions::print_vec("ints", int_testvec);
    print_functions::print_vec("dbls", double_testvec);

    return 0;
}
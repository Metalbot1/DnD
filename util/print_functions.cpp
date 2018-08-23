#include "print_functions.h"

template <class T>
void print_functions::print_vec(std::string vec_name, std::vector<T>& vec){
    if(vec.empty()){
        std::cout << "Vector " << vec_name << "is empty." << std::endl;
        return;
    }

    std::cout << vec_name << ": ";
    for(T& t : vec){
        std::cout << std::to_string(t) << " ";
    }
    std::cout << std::endl;
}
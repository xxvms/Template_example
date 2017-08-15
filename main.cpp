#include <iostream>

template <typename object_type>
const object_type& Get_Max(const object_type& value1, const object_type& value2){
    if (value1 > value2){
        return value1;
    } // no need for else!!! like below
        return value2;

}

template <typename object_type>
const object_type& Minimum(const object_type& value1, const object_type& value2)
{
    if (value1 > value2){
        return value2;
    }else {
        return value1;
    }
}

int main() {

    int one = 25;
    int two = 45;
    double d_one = 34.56;
    double d_two = 16.34;


    std::cout << "Max INT 25 and 45: " <<Get_Max(one, two) << '\n';
    std::cout << "Max Double 34.56 and 16.34: " << Get_Max(d_one, d_two) << '\n';
    std::cout << "------------------------------------------\n";
    std::cout << "Min INT 25 and 45: " << Minimum(one, two) << '\n';
    std::cout << "Min Double 34.56 and 16.54: " << Minimum(d_one, d_two) << '\n';




    return 0;
}
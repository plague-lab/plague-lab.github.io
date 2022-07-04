#include <iostream>
int main(){

    int tbl[] = {76,17,78,75,19,68,63,76,17,83,84,63,17,78,63,77,19,77,16,82,89};
    size_t size =  sizeof(tbl)/sizeof(tbl[0]);

    for(int i = 0; i < size; i++)
    {
        tbl[i] -= 32 ;
    }

    std::cout << "PWNME{";
    for (int i = 0; i < size; i++)
    {
        std::cout << (char)(tbl[i] + 64);
        
    }
    std::cout << "}" << std::endl;
    return 0;
}
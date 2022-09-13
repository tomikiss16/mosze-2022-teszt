#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];  //N_ELEMNTS
    std::cout << '1-100 ertekek duplazasa';  //;
    for (int i = 0;i<N_ELEMTS;i++)  //nincs megadva a lépésköz és az iterálás vége
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++)  //csak egyszer fut le
    {
        std::cout << "Ertek: "<<b[i]<<std:endl;  //nincs ; és érték kiirása
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag; //double int helyett
    for (int i = 0; i < N_ELEMENTS; i++) // , helyett ;
    {
        atlag += b[i];  // ; 
    }
    atlag = atlag / N_ELEMENTS;  // osztás kell csak
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; 
}

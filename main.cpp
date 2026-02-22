#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS-nek kell lennie
    std::cout << '1-100 ertekek duplazasa' // "" lenne a jó és hiányzik a ;
    for (int i = 0;)// nincsen feltétel és léptető
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hibás feltétel 
    {
        std::cout << "Ertek:" // ; hiánya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)//; helyett , van
    {
        atlag += b[i] // ; hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

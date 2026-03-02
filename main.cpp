#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //N_ELEMENTS-nek kell lennie
    std::cout << "1-100 ertekek duplazasa" <<std::endl; // "" lenne a jó és hiányzik a ;
    for (int i = 0; i < N_ELEMENTS; i++)// nincsen feltétel és léptető
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS ; i++) // hibás feltétel 
    {
        std::cout << "Ertek:" << b[i] << std::endl; // ; hiánya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0;
    for (int i = 0; i < N_ELEMENTS; i++)//; helyett , van
    {
        atlag += b[i]; // ; hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    std::cout << "Szia! En vagyok a munkatars." << std::endl;
    return 0;
}

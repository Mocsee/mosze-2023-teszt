#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Rossz volt a nev (N_ELEMENTS kell)
    int *b = new int[N_ELEMENTS];

    // Idezojelek es pontosvesszo potolva
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // A ciklusbol hianyzott a feltetel es a leptetes
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    // A feltetel javitva, hogy lefusson a kiiras
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    // Atlag nullazasa az elejen
    int atlag = 0;

    // Pontosvesszo a vesszo helyett a ciklusban
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // Memoria felszabaditasa
    delete[] b;

    return 0;
}
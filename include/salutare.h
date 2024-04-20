//
// Created by Admin on 4/19/2024.
//

#ifndef OOP_SALUTARE_H
#define OOP_SALUTARE_H

void salutare()
{
    std::cout << "========================================================================================================================" << std::endl;
    std::cout << "\t\t\tBine ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "ati ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "venit ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "la ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "magazinul ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "de ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "inghetata ";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "Pufic";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << std::endl;
    std::cout << "========================================================================================================================" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));

    for (int i = 0; i < 13; i++) {
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

}

#endif //OOP_SALUTARE_H

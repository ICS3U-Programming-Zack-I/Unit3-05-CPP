// Copyright (c)
// 2021 Zack Isingoma
// Creared by: Zack Isingoma
// Created on: Dec, 14 2021.
// This program makes users input numbers
// and it tells them the moth that corresponds.

#include<iostream>

int main() {
    int userMonth;
    std::cout << "Enter number of month: ";
    std::cin >> userMonth;

    switch (userMonth) {
        case 1:
        std::cout << "represents January. \n";
        break;

        case 2:
        std::cout << "represents February. \n";
        break;

        case 3:
        std::cout << "represents March. \n";
        break;

        case 4:
        std::cout << "represents April. \n";
        break;

        case 5:
        std::cout << "represents May. \n";
        break;

        case 6:
        std::cout << "represents June. \n";
        break;

        case 7:
        std::cout << "represents July. \n";
        break;

        case 8:
        std::cout << "represents August. \n";
        break;

        case 9:
        std::cout << "represents September. \n";
        break;

        case 10:
        std::cout << "represents October. \n";
        break;

        case 11:
        std::cout << "represents November. \n";
        break;

        case 12:
        std::cout << "represents December. \n";
        break;

        default :
        std::cout << "Error." << userMonth << "does not represent a month. \n";
    }
}

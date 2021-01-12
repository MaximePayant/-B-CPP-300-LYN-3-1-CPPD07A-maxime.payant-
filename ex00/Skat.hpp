/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Skat.hpp
*/

#ifndef SKAT_HPP
#define SKAT_HPP

#include <iostream>

class Skat
{
    private:
        std::string m_name;
        unsigned m_stimPacks;

    public:
        Skat(const std::string &name = "bob", int stimPaks = 15);
        ~Skat();

        unsigned& stimPaks();
        const std::string& name() const;
        void shareStimPaks(unsigned number, unsigned& stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status() const;
};

#endif // SKAT_HPP
/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Skat.cpp
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks) :
m_name(name),
m_stimPacks(stimPaks)
{
}

Skat::~Skat()
{}

unsigned& Skat::stimPaks()
{
    return (m_stimPacks);
}

const std::string& Skat::name() const
{
    return (m_name);
}

void Skat::shareStimPaks(unsigned number, unsigned& stock)
{
    if (number <= m_stimPacks) {
        stock += number;
        m_stimPacks -= number;
        std::cout << "Keep the change." << std::endl;
    }
    else
        std::cout << "Don't be greedy" << std::endl;
}

void Skat::addStimPaks(unsigned int number)
{
    if (number)
        m_stimPacks += number;
    else
        std::cout << "Hey boya, did you forget something?" << std::endl;
}

void Skat::useStimPaks()
{
    if (m_stimPacks)
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    else
        std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status() const
{
    std::cout
        << "Soldier "
        << m_name
        << " reporting "
        << m_stimPacks
        << " stimpaks remaining sir!"
        << std::endl;
}
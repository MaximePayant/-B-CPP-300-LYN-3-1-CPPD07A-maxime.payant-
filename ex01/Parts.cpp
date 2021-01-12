/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Parts.cpp
*/

#include "Parts.hpp"

Arms::Arms(const std::string& serial, bool functional) :
m_serial(serial),
m_isFunctional(functional)
{}

bool Arms::isFunctional() const
{
    return (m_isFunctional);
}

const std::string& Arms::serial() const
{
    return (m_serial);
}

void Arms::information() const
{
    std::cout
        << "\t[Parts] Arms "
        << m_serial
        << " status : "
        << (m_isFunctional ? "OK" : "KO")
        << std::endl;
}

Legs::Legs(const std::string& serial, bool functional) :
m_serial(serial),
m_isFunctional(functional)
{}

bool Legs::isFunctional() const
{
    return (m_isFunctional);
}

const std::string& Legs::serial() const
{
    return (m_serial);
}

void Legs::information() const
{
    std::cout
        << "\t[Parts] Legs "
        << m_serial
        << " status : "
        << (m_isFunctional ? "OK" : "KO")
        << std::endl;
}

Head::Head(const std::string& serial, bool functional) :
m_serial(serial),
m_isFunctional(functional)
{}

bool Head::isFunctional() const
{
    return (m_isFunctional);
}

const std::string& Head::serial() const
{
    return (m_serial);
}

void Head::information() const
{
    std::cout
        << "\t[Parts] Head "
        << m_serial
        << " status : "
        << (m_isFunctional ? "OK" : "KO")
        << std::endl;
}
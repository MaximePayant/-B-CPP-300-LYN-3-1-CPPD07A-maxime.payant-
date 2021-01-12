/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** KoalaBot.cpp
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(const std::string& serial) :
m_serial(serial)
{}

void KoalaBot::setParts(const Arms& arm)
{
    m_arm = arm;
}

void KoalaBot::setParts(const Legs& leg)
{
    m_leg = leg;
}

void KoalaBot::setParts(const Head& head)
{
    m_head = head;
}

void KoalaBot::swapParts(Arms& arm)
{
    Arms tmp = arm;

    arm = m_arm;
    m_arm = tmp;
}

void KoalaBot::swapParts(Legs& leg)
{
    Legs tmp = leg;

    leg = m_leg;
    m_leg = tmp;
}

void KoalaBot::swapParts(Head& head)
{
    Head tmp = head;

    head = m_head;
    m_head = tmp;
}

void KoalaBot::informations() const
{
    std::cout
        << "[KoalaBot] "
        << m_serial
        << std::endl;
    m_arm.information();
    m_leg.information();
    m_head.information();
}

bool KoalaBot::status() const
{
    return (m_arm.isFunctional() && m_leg.isFunctional() && m_head.isFunctional());
}
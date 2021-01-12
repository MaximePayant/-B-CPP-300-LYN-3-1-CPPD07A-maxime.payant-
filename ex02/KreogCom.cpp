/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** KreogCom.cpp
*/

#include <iostream>

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial) :
m_serial(serial),
m_x(x),
m_y(y),
m_next(NULL)
{
    std::cout
        << "KreogCom "
        << m_serial
        << " initialized"
        << std::endl;
}

KreogCom::~KreogCom()
{
    std::cout
        << "KreogCom "
        << m_serial
        << " shutting down"
        << std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *newKreagCom = new KreogCom(x, y, serial);

    newKreagCom->m_next = m_next;
    m_next = newKreagCom;
}

void KreogCom::removeCom()
{
    KreogCom *tmp;

    if (m_next) {
        tmp = m_next->m_next;
        delete(m_next);
        m_next = tmp;
    }
}

KreogCom *KreogCom::getCom() const
{
    return (m_next);
}

void KreogCom::ping()
{
    std::cout
        << "KreogCom "
        << m_serial
        << " currently at "
        << m_x
        << " "
        << m_y
        << std::endl;
}

void KreogCom::locateSquad()
{
    KreogCom *tmp = m_next;

    while (tmp != NULL) {
        tmp->ping();
        tmp = tmp->m_next;
    }
    ping();
}
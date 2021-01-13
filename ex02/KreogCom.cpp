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
m_next(NULL),
m_prev(NULL)
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
    if (m_next)
        m_next->m_prev = m_prev;
    if (m_prev)
        m_prev->m_next = m_next;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *newKreogCom = new KreogCom(x, y, serial);

    if (m_next)
        m_next->m_prev = newKreogCom;
    newKreogCom->m_next = m_next;
    newKreogCom->m_prev = this;
    m_next = newKreogCom;
}

void KreogCom::removeCom()
{
    if (m_next)
        delete(m_next);
}

KreogCom *KreogCom::getCom() const
{
    return (m_next);
}

void KreogCom::ping() const
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

void KreogCom::locateSquad() const
{
    KreogCom *tmp = m_next;

    while (tmp != NULL) {
        tmp->ping();
        tmp = tmp->m_next;
    }
    ping();
}
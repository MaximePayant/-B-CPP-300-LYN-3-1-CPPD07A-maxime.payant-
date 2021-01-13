/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** KreogCom.hpp
*/

#ifndef KREOG_COM_HPP
#define KREOG_COM_HPP

#include <deque>

class KreogCom
{

    private:
        const int m_serial;
        const int m_x;
        const int m_y;
        KreogCom *m_next;
        KreogCom *m_prev;

    public:
        KreogCom(int x, int y, int serial);
        ~KreogCom();

        void addCom(int x, int y, int serial);
        void removeCom();
        KreogCom *getCom() const;
        void ping() const;
        void locateSquad() const;

}; // class KreogCom

#endif // KREOG_COM_HPP
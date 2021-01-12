/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Parts.hpp
*/

#ifndef PARTS_HPP
#define PARTS_HPP

#include <iostream>

class Arms
{

    private:
        std::string m_serial;
        bool m_isFunctional;

    public:
        Arms(const std::string& serial = "A-01", bool functional = true);

        bool isFunctional() const;
        const std::string& serial() const;
        void information() const;

}; // class Arms

class Legs
{

    private:
        std::string m_serial;
        bool m_isFunctional;

    public:
        Legs(const std::string& serial = "L-01", bool functional = true);

        bool isFunctional() const;
        const std::string& serial() const;
        void information() const;

}; // class Legs

class Head
{

    private:
        std::string m_serial;
        bool m_isFunctional;

    public:
        Head(const std::string& serial = "H-01", bool functional = true);

        bool isFunctional() const;
        const std::string& serial() const;
        void information() const;

}; // class Head

#endif // PARTS_HPP
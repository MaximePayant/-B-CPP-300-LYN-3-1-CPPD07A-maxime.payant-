/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** KoalaBot.hpp
*/

#ifndef KOALA_BOT_HPP
#define KOALA_BOT_HPP

#include "Parts.hpp"

class KoalaBot
{
    private:
        std::string m_serial;
        Arms m_arm;
        Legs m_leg;
        Head m_head;

    public:
        KoalaBot(const std::string& serial = "Bob-01");

        void setParts(const Arms& part);
        void setParts(const Legs& part);
        void setParts(const Head& part);
        void swapParts(Arms& part);
        void swapParts(Legs& part);
        void swapParts(Head& part);
        void informations() const;
        bool status() const;
};

#endif // KOALA_BOT_HPP
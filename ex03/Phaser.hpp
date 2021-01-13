/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Phaser.hpp
*/

#ifndef PHASER_HPP
#define PHASER_HPP

#include "Sounds.hpp"

class Phaser
{

    public:
        typedef enum
        {
            REGULAR,
            PLASMA,
            ROCKET
        } AmmoType;

        const std::string ammoName[3] = {"regular", "plasma", "rocket"};

        Phaser(int maxAmmo = 20, AmmoType type = REGULAR);

        void fire();
        void ejectClip();
        void changeType(AmmoType newType);
        void reload();
        void addAmmo(AmmoType type);
        int getCurrentAmmos() const;

    private:
        AmmoType m_type;
        int m_maxAmmo;
        int m_regularAmmo;
        int m_plasmaAmmo;
        int m_rocketAmmo;
        Sounds m_sounds;
        static const int Empty = 0;

};

#endif // PHASER_HPP
/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Phaser.cpp
*/

#include "Phaser.hpp"

Phaser::Phaser(int maxAmmo, AmmoType type) :
m_type(type),
m_maxAmmo(maxAmmo),
m_loadedAmmo(20),
m_magazineAmmo(20),
m_sounds()
{}

static std::string getSound(Sounds sounds, Phaser::AmmoType type)
{
    switch (type)
    {
        case Phaser::REGULAR:
            return (sounds.Regular);
        case Phaser::PLASMA:
            return (sounds.Plasma);
        case Phaser::ROCKET:
            return (sounds.Rocket);
    }
    return ("");
}

void Phaser::fire()
{
    if (m_loadedAmmo == Empty)
        std::cout
            << "Clip empty, please reload"
            << std::endl;
    else {
        std::cout
            << getSound(m_sounds, m_type)
            << std::endl;
        m_loadedAmmo -= 1;
    }
}

void Phaser::ejectClip()
{
    m_loadedAmmo = Empty;
}

void Phaser::changeType(AmmoType newType)
{
    std::cout
        << "Switching  ammo to type: "
        << ammoName[newType]
        << std::endl;
    m_type = newType;
}

void Phaser::reload()
{
    std::cout
        << "Reloading ..."
        << std::endl;
    m_loadedAmmo = m_maxAmmo;
}

void Phaser::addAmmo(AmmoType type)
{
    (void)type;
    if (m_loadedAmmo == m_maxAmmo)
        std::cout
            << "Clip  full"
            << std::endl;
    else
        m_loadedAmmo += 1;
}

int Phaser::getCurrentAmmos()
{
    return (m_loadedAmmo);
}
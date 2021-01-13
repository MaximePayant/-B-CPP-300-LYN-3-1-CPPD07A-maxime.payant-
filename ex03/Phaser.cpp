/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Phaser.cpp
*/

#include "Phaser.hpp"

Phaser::Phaser(int maxAmmo, AmmoType type) :
m_defaultType(type),
m_maxAmmo(maxAmmo),
m_ammoMagazine(maxAmmo, type),
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
    if (m_ammoMagazine.empty())
        std::cout
            << "Clip empty, please reload"
            << std::endl;
    else {
        std::cout
            << getSound(m_sounds, m_ammoMagazine.front())
            << std::endl;
        m_ammoMagazine.pop_front();
    }
}

void Phaser::ejectClip()
{
    m_ammoMagazine.clear();
}

void Phaser::changeType(AmmoType newType)
{
    std::cout
        << "Switching ammo to type: "
        << ammoName[newType]
        << std::endl;
    m_defaultType = newType;
}

void Phaser::reload()
{
    ejectClip();
    std::cout
        << "Reloading ..."
        << std::endl;
    m_ammoMagazine.insert(m_ammoMagazine.begin(), m_maxAmmo, m_defaultType);
}

void Phaser::addAmmo(AmmoType type)
{
    if (m_ammoMagazine.size() == m_maxAmmo)
        std::cout
            << "Clip full"
            << std::endl;
    else
        m_ammoMagazine.push_back(type);
}

int Phaser::getCurrentAmmos() const
{
    return (m_ammoMagazine.size());
}
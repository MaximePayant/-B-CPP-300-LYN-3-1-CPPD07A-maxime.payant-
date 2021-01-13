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
m_regularAmmo(0),
m_plasmaAmmo(0),
m_rocketAmmo(0),
m_sounds()
{
    switch (type)
    {
        case REGULAR:
            m_regularAmmo = maxAmmo;
            break;
        case PLASMA:
            m_plasmaAmmo = maxAmmo;
            break;
        case ROCKET:
            m_rocketAmmo = maxAmmo;
            break;
    }
}

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
    switch (m_type) {
        case REGULAR:
            if (m_regularAmmo == Empty)
                std::cout
                    << "Clip empty, please reload"
                    << std::endl;
            else {
                std::cout
                    << getSound(m_sounds, m_type)
                    << std::endl;
                m_regularAmmo -= 1;
            }
            break;
        case PLASMA:
            if (m_plasmaAmmo == Empty)
                std::cout
                    << "Clip empty, please reload"
                    << std::endl;
            else {
                std::cout
                    << getSound(m_sounds, m_type)
                    << std::endl;
                m_plasmaAmmo -= 1;
            }
            break;
        case ROCKET:
            if (m_rocketAmmo == Empty)
                std::cout
                    << "Clip empty, please reload"
                    << std::endl;
            else {
                std::cout
                    << getSound(m_sounds, m_type)
                    << std::endl;
                m_rocketAmmo -= 1;
            }
            break;
    }
}

void Phaser::ejectClip()
{
    switch (m_type) {
        case REGULAR:
            m_regularAmmo = Empty;
            break;
        case PLASMA:
            m_plasmaAmmo = Empty;
            break;
        case ROCKET:
            m_rocketAmmo = Empty;
            break;
    }
}

void Phaser::changeType(AmmoType newType)
{
    std::cout
        << "Switching ammo to type: "
        << ammoName[newType]
        << std::endl;
    m_type = newType;
}

void Phaser::reload()
{
    std::cout
        << "Reloading ..."
        << std::endl;
    switch (m_type) {
        case REGULAR:
            m_regularAmmo = m_maxAmmo;
            break;
        case PLASMA:
            m_plasmaAmmo = m_maxAmmo;
            break;
        case ROCKET:
            m_rocketAmmo = m_maxAmmo;
            break;
    }
}

void Phaser::addAmmo(AmmoType type)
{
    switch (type) {
        case REGULAR:
            if (m_regularAmmo == m_maxAmmo)
                std::cout
                    << "Clip full"
                    << std::endl;
            else
                m_regularAmmo += 1;
            break;
        case PLASMA:
            if (m_plasmaAmmo == m_maxAmmo)
                std::cout
                    << "Clip full"
                    << std::endl;
            else
                m_plasmaAmmo += 1;
            break;
        case ROCKET:
            if (m_rocketAmmo == m_maxAmmo)
                std::cout
                    << "Clip full"
                    << std::endl;
            else
                m_rocketAmmo += 1;
            break;
    }
}

int Phaser::getCurrentAmmos() const
{
    switch (m_type) {
        case REGULAR:
            return (m_regularAmmo);
        case PLASMA:
            return (m_plasmaAmmo);
        case ROCKET:
            return (m_rocketAmmo);
    }
    return (0);
}
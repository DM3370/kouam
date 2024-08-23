#include "projets.h"

class ProjetsData : public QSharedData
{
public:

};

Projets::Projets() : data(new ProjetsData)
{

}

Projets::Projets(const Projets &rhs) : data(rhs.data)
{

}

Projets &Projets::operator=(const Projets &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

Projets::~Projets()
{

}


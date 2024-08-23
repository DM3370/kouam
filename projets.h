#ifndef PROJETS_H
#define PROJETS_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class ProjetsData;

class Projets
{
public:
    Projets();
    Projets(const Projets &);
    Projets &operator=(const Projets &);
    ~Projets();

private:
    QSharedDataPointer<ProjetsData> data;
};

#endif // PROJETS_H

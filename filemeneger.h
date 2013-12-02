#ifndef FILEMENEGER_H
#define FILEMENEGER_H
#include <QDebug>
#include <QDir>
#include <QObject>
#include <QList>
#include <QTextCodec>

class FileMeneger : public QObject
{
    Q_OBJECT

public:
    FileMeneger();
    ~FileMeneger();
    void CalcSizeDir();

public slots:
    void SetPathForCalcSize(QString path);

private:
    QString rootPath;

private slots:

signals:

};

#endif // FILEMENEGER_H

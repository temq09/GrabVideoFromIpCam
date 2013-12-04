#ifndef FILEMENEGER_H
#define FILEMENEGER_H
#include <QDebug>
#include <QDir>
#include <QObject>
#include <QList>
#include <QTextCodec>
#include <QDateTime>

class FileMeneger : public QObject
{
    Q_OBJECT

public:
    explicit FileMeneger(QObject *parent = 0);
    ~FileMeneger();
    void CalcSizeDir();
    void ClearDir(QString pathForClear);
    QString rootPath;
    QString FindOldFile(QString path);
    bool DeleteOldFile(QString pathToDelete);

public slots:
    void SetPathForCalcSize(QString path); 

private:
    Q_DISABLE_COPY(FileMeneger)
};

#endif // FILEMENEGER_H

#include "filemeneger.h"

FileMeneger::FileMeneger(QObject *parent) : QObject(parent)
{
    qDebug() << "КОнструктор файл менеджера";
}

FileMeneger::~FileMeneger()
{
    qDebug() << "Деструктор файл менеджера";
}

quint64 FileMeneger::ClearDir(QString pathForClear)
{
    qDebug() << "Функция очистки от старых файлов";
    quint64 sizeDeletedFile = 0;
    QString oldFile = FindOldFile(pathForClear, sizeDeletedFile);
    if(DeleteOldFile(oldFile))
    {
        qDebug() << "Файл - " << oldFile << "удален";
        return sizeDeletedFile;
    }
    else
        return 0;
}

QString FileMeneger::FindOldFile(QString path, quint64 &sizeDeletedFile)
{
    qDebug() << "Ищем самый старый файл";
    QList<QString> dirList;
    dirList.clear();
    //QString pathToOldFile;
    QFileInfo oldFile = NULL;
    dirList.push_back(path);
    while(!dirList.isEmpty())
    {
        QString currentPathDir = dirList.front();
        dirList.pop_front();
        QDir currentFolder(currentPathDir);
        currentFolder.setFilter(QDir::Files | QDir::Dirs | QDir::NoSymLinks);
        currentFolder.setSorting(QDir::Time);
        QFileInfoList fileInfo (currentFolder.entryInfoList());
        foreach (QFileInfo file, fileInfo) {
            QString name = file.fileName();
            if(name == "." || name == ".." || name.isEmpty())
                continue;
            else if(file.isDir())
                dirList.push_back(file.filePath());
            else
            {
                if(oldFile.filePath().isNull())
                {
                    oldFile.operator =(file);
                }
                else
                {
                    if(oldFile.lastModified().operator >(file.lastModified()) )
                        oldFile.operator =(file);
                }
            }
        }
    }
    qDebug() << "Самый старый файл - " << oldFile.filePath();
    sizeDeletedFile = oldFile.size();
    return oldFile.filePath();
}

bool FileMeneger::DeleteOldFile(QString pathToDelete)
{
    qDebug() << "Удалаяем файл";
    QFile fileToDelete(pathToDelete);
    return fileToDelete.remove();
}

void FileMeneger::CalcSizeDir()
{

}

void FileMeneger::SetPathForCalcSize(QString path)
{
    //this->rootPath = path;
}

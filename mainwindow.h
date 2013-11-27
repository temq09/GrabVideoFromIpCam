#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QScopedPointer>
#include <QPushButton>
#include <QDebug>
#include <videostreamview.h>
#include <QList>
#include <QLineEdit>
#include <QLabel>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <dialog_addcamera.h>
#include <QStringListModel>
#include <QMultiMap>
#include <QMouseEvent>
#include <QDrag>
#include <QMimeData>
#include <QCloseEvent>
#include <mystringlistmodel.h>
#include <QEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);
    //bool eventFilter(QObject *t, QEvent *e);


public slots:
    void HandlerDataToAddCamera(QString IPadres, QString Port, QString Login, QString Password);

private:
    //Properties
    Ui::MainWindow *ui;
    int currentCountVideoWidget;
    QVector<QSharedPointer<VideoStreamView> > vectorOfWidget;
    struct infoAboutCamera
    {
        QString ipAdress;
        QString port;
        QString userName;
        QString password;

        infoAboutCamera(QString IPAdress = NULL, QString Port = NULL, QString UserName = NULL, QString Password = NULL):
            ipAdress(IPAdress),
            port(Port),
            userName(UserName),
            password(Password)
        {
            qDebug() << "Конструктор структуры";
        }

        ~infoAboutCamera()
        {
            qDebug() << "Деструктор структуры";
        }
    };
    QList<infoAboutCamera> cameraList;
    QList<QString> cameraIPAdress;
    QMultiMap<QString, infoAboutCamera> cameraListMap;
    QStringListModel model;
    int durationVideo;
    QString path;

    //Methods
    void decrementCountVideoWidget(int count);
    void incrementCountVideoWidget(int count);
    void initializeForm(int dimensionForm);
    void refreshCamList();
    void SetPath();
    void AddWidget(int indexWidget, int counterRow, int counterColumn);


private slots:
    void HandleACtion4();
    void HandleAction9();
    void HandleACtion16();
    void AddCamera();
    void slot_SendInfoAboutCam(QString IPAdress, int IDobject);
    void slot_GetDurationVideo();

signals:
    void signal_durationChanged(int duration);
    void signal_appClose();
};

#endif // MAINWINDOW_H

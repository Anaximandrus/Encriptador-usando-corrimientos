/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnIniciar;
    QLabel *lblTitle;
    QRadioButton *corrCheck;
    QRadioButton *decorrCheck;
    QLabel *label_2;
    QLineEdit *valCorr;
    QRadioButton *abrirFinCheck;
    QLabel *aOrg;
    QPushButton *btnAOrg;
    QTextEdit *txtFile;
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *valR;
    QLabel *label_5;
    QLineEdit *valG;
    QLabel *label_6;
    QLineEdit *valB;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(658, 269);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AppointmentNew));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnIniciar = new QPushButton(centralwidget);
        btnIniciar->setObjectName("btnIniciar");
        btnIniciar->setGeometry(QRect(20, 190, 241, 51));
        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(260, 0, 201, 31));
        corrCheck = new QRadioButton(centralwidget);
        corrCheck->setObjectName("corrCheck");
        corrCheck->setGeometry(QRect(20, 150, 112, 26));
        corrCheck->setChecked(false);
        decorrCheck = new QRadioButton(centralwidget);
        decorrCheck->setObjectName("decorrCheck");
        decorrCheck->setGeometry(QRect(140, 150, 151, 26));
        decorrCheck->setChecked(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 111, 31));
        valCorr = new QLineEdit(centralwidget);
        valCorr->setObjectName("valCorr");
        valCorr->setGeometry(QRect(200, 70, 31, 28));
        abrirFinCheck = new QRadioButton(centralwidget);
        abrirFinCheck->setObjectName("abrirFinCheck");
        abrirFinCheck->setGeometry(QRect(460, 240, 191, 26));
        abrirFinCheck->setChecked(true);
        abrirFinCheck->setAutoExclusive(false);
        aOrg = new QLabel(centralwidget);
        aOrg->setObjectName("aOrg");
        aOrg->setGeometry(QRect(280, 30, 361, 31));
        btnAOrg = new QPushButton(centralwidget);
        btnAOrg->setObjectName("btnAOrg");
        btnAOrg->setGeometry(QRect(20, 30, 241, 31));
        txtFile = new QTextEdit(centralwidget);
        txtFile->setObjectName("txtFile");
        txtFile->setGeometry(QRect(270, 60, 371, 171));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(270, 60, 371, 181));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 70, 41, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 110, 41, 31));
        valR = new QLineEdit(centralwidget);
        valR->setObjectName("valR");
        valR->setGeometry(QRect(50, 110, 31, 28));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 110, 41, 31));
        valG = new QLineEdit(centralwidget);
        valG->setObjectName("valG");
        valG->setGeometry(QRect(120, 110, 31, 28));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 110, 41, 31));
        valB = new QLineEdit(centralwidget);
        valB->setObjectName("valB");
        valB->setGeometry(QRect(190, 110, 31, 28));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnIniciar->setText(QCoreApplication::translate("MainWindow", "Iniciar", nullptr));
        lblTitle->setText(QCoreApplication::translate("MainWindow", "Pracitca 0 - Corrimientos", nullptr));
        corrCheck->setText(QCoreApplication::translate("MainWindow", "Cifrado", nullptr));
        decorrCheck->setText(QCoreApplication::translate("MainWindow", "Descifrado", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Desplazamiento", nullptr));
        abrirFinCheck->setText(QCoreApplication::translate("MainWindow", "Abrir archivos al finalizar", nullptr));
        aOrg->setText(QCoreApplication::translate("MainWindow", "Aun no se ha seleccionado un archivo", nullptr));
        btnAOrg->setText(QCoreApplication::translate("MainWindow", "Elegir archivo de origen", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Texto", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

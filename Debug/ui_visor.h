/********************************************************************************
** Form generated from reading UI file 'visor.ui'
**
** Created: Wed Mar 4 06:47:06 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISOR_H
#define UI_VISOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Visor
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout;
    QLabel *LPatrones;
    QLineEdit *lEPatronesPositivos;
    QPushButton *pBDirPatronesPositivos;
    QPushButton *pBAntPatronPositivo;
    QPushButton *pBSigPatronPositivo;
    QLabel *LImgPatronesPositivos;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pBGirarPatronesPositivos;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pBEspejarVerticalPatronesPositivos;
    QPushButton *pBEspejarPatronesPositivos;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pBEscalarPatronesPositivos;
    QLineEdit *lEAltoPatronesPositivos;
    QLabel *label;
    QLineEdit *lEAnchoPatronesPositivos;
    QPushButton *pBGeneraFicheroPatronesPositivos;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LNoPatrones;
    QLineEdit *lEPatronesNegativos;
    QPushButton *pBDirPatronesNegativos;
    QPushButton *pBAntPatronNegativo;
    QPushButton *pBSigPatronNegativo;
    QLabel *LImgPatronesNegativos;
    QPushButton *pBGeneraFicheroPatronesNegativos;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Visor)
    {
        if (Visor->objectName().isEmpty())
            Visor->setObjectName(QString::fromUtf8("Visor"));
        Visor->resize(774, 635);
        centralWidget = new QWidget(Visor);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        splitter = new QSplitter(frame_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMaximumSize(QSize(16777215, 40));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_8);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LPatrones = new QLabel(frame_8);
        LPatrones->setObjectName(QString::fromUtf8("LPatrones"));
        LPatrones->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(LPatrones);

        lEPatronesPositivos = new QLineEdit(frame_8);
        lEPatronesPositivos->setObjectName(QString::fromUtf8("lEPatronesPositivos"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lEPatronesPositivos->sizePolicy().hasHeightForWidth());
        lEPatronesPositivos->setSizePolicy(sizePolicy);
        lEPatronesPositivos->setMinimumSize(QSize(0, 0));
        lEPatronesPositivos->setMaximumSize(QSize(16777215, 16777215));
        lEPatronesPositivos->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(lEPatronesPositivos);

        pBDirPatronesPositivos = new QPushButton(frame_8);
        pBDirPatronesPositivos->setObjectName(QString::fromUtf8("pBDirPatronesPositivos"));
        pBDirPatronesPositivos->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(pBDirPatronesPositivos);

        pBAntPatronPositivo = new QPushButton(frame_8);
        pBAntPatronPositivo->setObjectName(QString::fromUtf8("pBAntPatronPositivo"));
        pBAntPatronPositivo->setEnabled(false);
        pBAntPatronPositivo->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(pBAntPatronPositivo);

        pBSigPatronPositivo = new QPushButton(frame_8);
        pBSigPatronPositivo->setObjectName(QString::fromUtf8("pBSigPatronPositivo"));
        pBSigPatronPositivo->setEnabled(false);
        pBSigPatronPositivo->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(pBSigPatronPositivo);


        verticalLayout->addWidget(frame_8);

        LImgPatronesPositivos = new QLabel(frame);
        LImgPatronesPositivos->setObjectName(QString::fromUtf8("LImgPatronesPositivos"));
        LImgPatronesPositivos->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        verticalLayout->addWidget(LImgPatronesPositivos);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMaximumSize(QSize(16777215, 160));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pBGirarPatronesPositivos = new QPushButton(frame_4);
        pBGirarPatronesPositivos->setObjectName(QString::fromUtf8("pBGirarPatronesPositivos"));
        pBGirarPatronesPositivos->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_4->addWidget(pBGirarPatronesPositivos);

        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pBEspejarVerticalPatronesPositivos = new QPushButton(frame_5);
        pBEspejarVerticalPatronesPositivos->setObjectName(QString::fromUtf8("pBEspejarVerticalPatronesPositivos"));

        horizontalLayout_5->addWidget(pBEspejarVerticalPatronesPositivos);

        pBEspejarPatronesPositivos = new QPushButton(frame_5);
        pBEspejarPatronesPositivos->setObjectName(QString::fromUtf8("pBEspejarPatronesPositivos"));

        horizontalLayout_5->addWidget(pBEspejarPatronesPositivos);


        verticalLayout_4->addWidget(frame_5);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMaximumSize(QSize(16777215, 40));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_6);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pBEscalarPatronesPositivos = new QPushButton(frame_6);
        pBEscalarPatronesPositivos->setObjectName(QString::fromUtf8("pBEscalarPatronesPositivos"));

        horizontalLayout_4->addWidget(pBEscalarPatronesPositivos);

        lEAltoPatronesPositivos = new QLineEdit(frame_6);
        lEAltoPatronesPositivos->setObjectName(QString::fromUtf8("lEAltoPatronesPositivos"));
        lEAltoPatronesPositivos->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(lEAltoPatronesPositivos);

        label = new QLabel(frame_6);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lEAnchoPatronesPositivos = new QLineEdit(frame_6);
        lEAnchoPatronesPositivos->setObjectName(QString::fromUtf8("lEAnchoPatronesPositivos"));
        lEAnchoPatronesPositivos->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_4->addWidget(lEAnchoPatronesPositivos);


        verticalLayout_4->addWidget(frame_6);

        pBGeneraFicheroPatronesPositivos = new QPushButton(frame_4);
        pBGeneraFicheroPatronesPositivos->setObjectName(QString::fromUtf8("pBGeneraFicheroPatronesPositivos"));
        pBGeneraFicheroPatronesPositivos->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_4->addWidget(pBGeneraFicheroPatronesPositivos);


        verticalLayout->addWidget(frame_4);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_9 = new QFrame(frame_2);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMaximumSize(QSize(16777215, 40));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_9);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LNoPatrones = new QLabel(frame_9);
        LNoPatrones->setObjectName(QString::fromUtf8("LNoPatrones"));
        LNoPatrones->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(LNoPatrones);

        lEPatronesNegativos = new QLineEdit(frame_9);
        lEPatronesNegativos->setObjectName(QString::fromUtf8("lEPatronesNegativos"));
        sizePolicy.setHeightForWidth(lEPatronesNegativos->sizePolicy().hasHeightForWidth());
        lEPatronesNegativos->setSizePolicy(sizePolicy);
        lEPatronesNegativos->setMinimumSize(QSize(0, 0));
        lEPatronesNegativos->setMaximumSize(QSize(16777215, 16777215));
        lEPatronesNegativos->setBaseSize(QSize(0, 0));

        horizontalLayout_2->addWidget(lEPatronesNegativos);

        pBDirPatronesNegativos = new QPushButton(frame_9);
        pBDirPatronesNegativos->setObjectName(QString::fromUtf8("pBDirPatronesNegativos"));
        pBDirPatronesNegativos->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(pBDirPatronesNegativos);

        pBAntPatronNegativo = new QPushButton(frame_9);
        pBAntPatronNegativo->setObjectName(QString::fromUtf8("pBAntPatronNegativo"));
        pBAntPatronNegativo->setEnabled(false);
        pBAntPatronNegativo->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(pBAntPatronNegativo);

        pBSigPatronNegativo = new QPushButton(frame_9);
        pBSigPatronNegativo->setObjectName(QString::fromUtf8("pBSigPatronNegativo"));
        pBSigPatronNegativo->setEnabled(false);
        pBSigPatronNegativo->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(pBSigPatronNegativo);


        verticalLayout_2->addWidget(frame_9);

        LImgPatronesNegativos = new QLabel(frame_2);
        LImgPatronesNegativos->setObjectName(QString::fromUtf8("LImgPatronesNegativos"));
        LImgPatronesNegativos->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        verticalLayout_2->addWidget(LImgPatronesNegativos);

        pBGeneraFicheroPatronesNegativos = new QPushButton(frame_2);
        pBGeneraFicheroPatronesNegativos->setObjectName(QString::fromUtf8("pBGeneraFicheroPatronesNegativos"));

        verticalLayout_2->addWidget(pBGeneraFicheroPatronesNegativos);

        splitter->addWidget(frame_2);

        horizontalLayout_3->addWidget(splitter);


        verticalLayout_3->addWidget(frame_3);

        Visor->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Visor);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 774, 25));
        Visor->setMenuBar(menuBar);

        retranslateUi(Visor);

        QMetaObject::connectSlotsByName(Visor);
    } // setupUi

    void retranslateUi(QMainWindow *Visor)
    {
        Visor->setWindowTitle(QApplication::translate("Visor", "Visor", 0, QApplication::UnicodeUTF8));
        LPatrones->setText(QApplication::translate("Visor", "Patrones", 0, QApplication::UnicodeUTF8));
        lEPatronesPositivos->setText(QString());
        pBDirPatronesPositivos->setText(QApplication::translate("Visor", "...", 0, QApplication::UnicodeUTF8));
        pBAntPatronPositivo->setText(QApplication::translate("Visor", "<", 0, QApplication::UnicodeUTF8));
        pBSigPatronPositivo->setText(QApplication::translate("Visor", ">", 0, QApplication::UnicodeUTF8));
        LImgPatronesPositivos->setText(QString());
        pBGirarPatronesPositivos->setText(QApplication::translate("Visor", "Giro 90\302\272", 0, QApplication::UnicodeUTF8));
        pBEspejarVerticalPatronesPositivos->setText(QApplication::translate("Visor", "Espejar Vertical", 0, QApplication::UnicodeUTF8));
        pBEspejarPatronesPositivos->setText(QApplication::translate("Visor", "Espejar Horizontal", 0, QApplication::UnicodeUTF8));
        pBEscalarPatronesPositivos->setText(QApplication::translate("Visor", "Escalar (AltoxAncho)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Visor", "X", 0, QApplication::UnicodeUTF8));
        pBGeneraFicheroPatronesPositivos->setText(QApplication::translate("Visor", "Generar Fichero Patrones", 0, QApplication::UnicodeUTF8));
        LNoPatrones->setText(QApplication::translate("Visor", "No Patrones", 0, QApplication::UnicodeUTF8));
        lEPatronesNegativos->setText(QString());
        pBDirPatronesNegativos->setText(QApplication::translate("Visor", "...", 0, QApplication::UnicodeUTF8));
        pBAntPatronNegativo->setText(QApplication::translate("Visor", "<", 0, QApplication::UnicodeUTF8));
        pBSigPatronNegativo->setText(QApplication::translate("Visor", ">", 0, QApplication::UnicodeUTF8));
        LImgPatronesNegativos->setText(QString());
        pBGeneraFicheroPatronesNegativos->setText(QApplication::translate("Visor", "Generar Fichero No Patrones", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Visor: public Ui_Visor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISOR_H

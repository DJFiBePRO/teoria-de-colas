/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *RespuestaPo;
    QLabel *label_9;
    QLabel *RespuestaPne;
    QLabel *label_10;
    QLabel *RespuestaPn;
    QLabel *label_11;
    QLabel *RespuestaL;
    QLabel *label_12;
    QLabel *RespuestaLq;
    QLabel *label_13;
    QLabel *RespuestaLn;
    QLabel *label_14;
    QLabel *RespuestaW;
    QLabel *label_15;
    QLabel *RespuestaWq;
    QLabel *label_16;
    QLabel *RespuestaWn;
    QLabel *label_8;
    QLabel *RespuestaPk;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *TXT_Miu;
    QLineEdit *TXT_N;
    QLineEdit *TXT_Landa;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *PS_Calcular;
    QLineEdit *TXT_K;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QFormLayout *formLayout;
    QLabel *label_17;
    QLabel *label_28;
    QLabel *label_18;
    QLineEdit *TXT_Cte;
    QLabel *label_19;
    QLineEdit *TXT_Cts;
    QLabel *label_26;
    QLineEdit *TXT_Ctse;
    QPushButton *pushButton;
    QLineEdit *TXT_Horas;
    QLabel *label_29;
    QLineEdit *TXT_Cs;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_3;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *RespuestaCtte;
    QLabel *label_22;
    QLabel *RespuestaCtts;
    QLabel *label_27;
    QLabel *RespuestaCttse;
    QLabel *label_23;
    QLabel *RespuestaCt;
    QLabel *RespuestaCts;
    QLabel *label_30;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_2;
    QLabel *label_24;
    QComboBox *comboBox;
    QLineEdit *TXT_Num;
    QPushButton *pushButton_2;
    QLabel *LblCE;
    QLabel *label_25;
    QLabel *label_31;
    QLabel *LblParcial;
    QLabel *RespuestaProbabilidad;
    QLabel *LblFormula;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(801, 674);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 270, 121, 205));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(236, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 99, 99, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(245, 49, 49, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(118, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(157, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(245, 127, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        label_6->setPalette(palette);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        RespuestaPo = new QLabel(layoutWidget);
        RespuestaPo->setObjectName(QString::fromUtf8("RespuestaPo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, RespuestaPo);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        RespuestaPne = new QLabel(layoutWidget);
        RespuestaPne->setObjectName(QString::fromUtf8("RespuestaPne"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, RespuestaPne);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_10);

        RespuestaPn = new QLabel(layoutWidget);
        RespuestaPn->setObjectName(QString::fromUtf8("RespuestaPn"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, RespuestaPn);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_11);

        RespuestaL = new QLabel(layoutWidget);
        RespuestaL->setObjectName(QString::fromUtf8("RespuestaL"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, RespuestaL);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_12);

        RespuestaLq = new QLabel(layoutWidget);
        RespuestaLq->setObjectName(QString::fromUtf8("RespuestaLq"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, RespuestaLq);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_13);

        RespuestaLn = new QLabel(layoutWidget);
        RespuestaLn->setObjectName(QString::fromUtf8("RespuestaLn"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, RespuestaLn);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_14);

        RespuestaW = new QLabel(layoutWidget);
        RespuestaW->setObjectName(QString::fromUtf8("RespuestaW"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, RespuestaW);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_15);

        RespuestaWq = new QLabel(layoutWidget);
        RespuestaWq->setObjectName(QString::fromUtf8("RespuestaWq"));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, RespuestaWq);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_16);

        RespuestaWn = new QLabel(layoutWidget);
        RespuestaWn->setObjectName(QString::fromUtf8("RespuestaWn"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, RespuestaWn);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        RespuestaPk = new QLabel(layoutWidget);
        RespuestaPk->setObjectName(QString::fromUtf8("RespuestaPk"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, RespuestaPk);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 50, 215, 160));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        TXT_Miu = new QLineEdit(layoutWidget1);
        TXT_Miu->setObjectName(QString::fromUtf8("TXT_Miu"));

        gridLayout->addWidget(TXT_Miu, 2, 1, 1, 1);

        TXT_N = new QLineEdit(layoutWidget1);
        TXT_N->setObjectName(QString::fromUtf8("TXT_N"));

        gridLayout->addWidget(TXT_N, 4, 1, 1, 1);

        TXT_Landa = new QLineEdit(layoutWidget1);
        TXT_Landa->setObjectName(QString::fromUtf8("TXT_Landa"));

        gridLayout->addWidget(TXT_Landa, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        PS_Calcular = new QPushButton(layoutWidget1);
        PS_Calcular->setObjectName(QString::fromUtf8("PS_Calcular"));

        gridLayout->addWidget(PS_Calcular, 5, 0, 1, 2);

        TXT_K = new QLineEdit(layoutWidget1);
        TXT_K->setObjectName(QString::fromUtf8("TXT_K"));

        gridLayout->addWidget(TXT_K, 3, 1, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(450, 40, 221, 191));
        formLayout = new QFormLayout(layoutWidget2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_17);

        label_28 = new QLabel(layoutWidget2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_28);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_18);

        TXT_Cte = new QLineEdit(layoutWidget2);
        TXT_Cte->setObjectName(QString::fromUtf8("TXT_Cte"));

        formLayout->setWidget(2, QFormLayout::FieldRole, TXT_Cte);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_19);

        TXT_Cts = new QLineEdit(layoutWidget2);
        TXT_Cts->setObjectName(QString::fromUtf8("TXT_Cts"));

        formLayout->setWidget(3, QFormLayout::FieldRole, TXT_Cts);

        label_26 = new QLabel(layoutWidget2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_26);

        TXT_Ctse = new QLineEdit(layoutWidget2);
        TXT_Ctse->setObjectName(QString::fromUtf8("TXT_Ctse"));

        formLayout->setWidget(4, QFormLayout::FieldRole, TXT_Ctse);

        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, pushButton);

        TXT_Horas = new QLineEdit(layoutWidget2);
        TXT_Horas->setObjectName(QString::fromUtf8("TXT_Horas"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TXT_Horas);

        label_29 = new QLabel(layoutWidget2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_29);

        TXT_Cs = new QLineEdit(layoutWidget2);
        TXT_Cs->setObjectName(QString::fromUtf8("TXT_Cs"));

        formLayout->setWidget(5, QFormLayout::FieldRole, TXT_Cs);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(450, 270, 191, 151));
        formLayout_3 = new QFormLayout(layoutWidget3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, label_20);

        label_21 = new QLabel(layoutWidget3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_21);

        RespuestaCtte = new QLabel(layoutWidget3);
        RespuestaCtte->setObjectName(QString::fromUtf8("RespuestaCtte"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, RespuestaCtte);

        label_22 = new QLabel(layoutWidget3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_22);

        RespuestaCtts = new QLabel(layoutWidget3);
        RespuestaCtts->setObjectName(QString::fromUtf8("RespuestaCtts"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, RespuestaCtts);

        label_27 = new QLabel(layoutWidget3);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_27);

        RespuestaCttse = new QLabel(layoutWidget3);
        RespuestaCttse->setObjectName(QString::fromUtf8("RespuestaCttse"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, RespuestaCttse);

        label_23 = new QLabel(layoutWidget3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_23);

        RespuestaCt = new QLabel(layoutWidget3);
        RespuestaCt->setObjectName(QString::fromUtf8("RespuestaCt"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, RespuestaCt);

        RespuestaCts = new QLabel(layoutWidget3);
        RespuestaCts->setObjectName(QString::fromUtf8("RespuestaCts"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, RespuestaCts);

        label_30 = new QLabel(layoutWidget3);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_30);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(190, 450, 135, 70));
        gridLayout_2 = new QGridLayout(layoutWidget4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 0, 0, 1, 2);

        comboBox = new QComboBox(layoutWidget4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 1);

        TXT_Num = new QLineEdit(layoutWidget4);
        TXT_Num->setObjectName(QString::fromUtf8("TXT_Num"));

        gridLayout_2->addWidget(TXT_Num, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 2, 0, 1, 2);

        LblCE = new QLabel(centralwidget);
        LblCE->setObjectName(QString::fromUtf8("LblCE"));
        LblCE->setGeometry(QRect(40, 230, 241, 16));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(190, 610, 121, 21));
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(190, 530, 47, 13));
        LblParcial = new QLabel(centralwidget);
        LblParcial->setObjectName(QString::fromUtf8("LblParcial"));
        LblParcial->setGeometry(QRect(190, 580, 581, 16));
        RespuestaProbabilidad = new QLabel(centralwidget);
        RespuestaProbabilidad->setObjectName(QString::fromUtf8("RespuestaProbabilidad"));
        RespuestaProbabilidad->setGeometry(QRect(190, 630, 47, 13));
        LblFormula = new QLabel(centralwidget);
        LblFormula->setObjectName(QString::fromUtf8("LblFormula"));
        LblFormula->setGeometry(QRect(190, 550, 581, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 801, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PICM", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Resultados:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Po:", nullptr));
        RespuestaPo->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Pne:", nullptr));
        RespuestaPne->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Pn:", nullptr));
        RespuestaPn->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "L:", nullptr));
        RespuestaL->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Lq:", nullptr));
        RespuestaLq->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Ln:", nullptr));
        RespuestaLn->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "W:", nullptr));
        RespuestaW->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Wq:", nullptr));
        RespuestaWq->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Wn:", nullptr));
        RespuestaWn->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Pk:", nullptr));
        RespuestaPk->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "PICM", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Valor de N:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Valor de lamda:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Valor de miu:", nullptr));
        PS_Calcular->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Valor de K:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Costos PICM", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Hoas x D\303\255a laboral:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Valor de Cte:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Valor de Cts:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Valor de Ctse:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calcular Costos", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Valor de Cs:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Resultados de los Costos:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "CTte:", nullptr));
        RespuestaCtte->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "CTts:", nullptr));
        RespuestaCtts->setText(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "CTtse:", nullptr));
        RespuestaCttse->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "CT:", nullptr));
        RespuestaCt->setText(QString());
        RespuestaCts->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "CTs:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Probabilidad Espec\303\255fica:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", ">=", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "<=", nullptr));

        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Obtener", nullptr));
        LblCE->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "Resultado obtenido:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "F\303\263rmula:", nullptr));
        LblParcial->setText(QString());
        RespuestaProbabilidad->setText(QString());
        LblFormula->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

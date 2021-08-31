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
    QFormLayout *formLayout_4;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_40;
    QLabel *RespuestaPe;
    QLabel *label_33;
    QLabel *RespuestaPn_3;
    QLabel *label_34;
    QLabel *RespuestaL_3;
    QLabel *label_35;
    QLabel *RespuestaLq_3;
    QLabel *label_36;
    QLabel *RespuestaLn_3;
    QLabel *label_38;
    QLabel *RespuestaWq_3;
    QLabel *label_37;
    QLabel *RespuestaW_3;
    QLabel *label_39;
    QLabel *RespuestaWn_3;
    QLabel *RespuestaPo_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLineEdit *TXT_Miu;
    QLineEdit *TXT_M;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *TXT_Landa;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *TXT_N;
    QLabel *label_3;
    QLabel *label;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_28;
    QLineEdit *TXT_Horas;
    QLabel *label_18;
    QLineEdit *TXT_Cte;
    QLabel *label_19;
    QLineEdit *TXT_Cts;
    QLabel *label_26;
    QLineEdit *TXT_Ctse;
    QLabel *label_31;
    QLineEdit *TXT_Cs;
    QPushButton *pushButton_2;
    QLabel *label_17;
    QWidget *layoutWidget_3;
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
    QLabel *label_32;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_2;
    QLabel *label_24;
    QComboBox *comboBox;
    QLineEdit *TXT_Num;
    QPushButton *pushButton_3;
    QLabel *label_25;
    QLabel *label_4;
    QLabel *LblParcial;
    QLabel *RespuestaProbabilidad;
    QLabel *LblFormula;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 652);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 280, 121, 205));
        formLayout_4 = new QFormLayout(layoutWidget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
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
        label_29->setPalette(palette);

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, label_29);

        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_30);

        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_40);

        RespuestaPe = new QLabel(layoutWidget);
        RespuestaPe->setObjectName(QString::fromUtf8("RespuestaPe"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, RespuestaPe);

        label_33 = new QLabel(layoutWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_33);

        RespuestaPn_3 = new QLabel(layoutWidget);
        RespuestaPn_3->setObjectName(QString::fromUtf8("RespuestaPn_3"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, RespuestaPn_3);

        label_34 = new QLabel(layoutWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_34);

        RespuestaL_3 = new QLabel(layoutWidget);
        RespuestaL_3->setObjectName(QString::fromUtf8("RespuestaL_3"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, RespuestaL_3);

        label_35 = new QLabel(layoutWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_35);

        RespuestaLq_3 = new QLabel(layoutWidget);
        RespuestaLq_3->setObjectName(QString::fromUtf8("RespuestaLq_3"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, RespuestaLq_3);

        label_36 = new QLabel(layoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_36);

        RespuestaLn_3 = new QLabel(layoutWidget);
        RespuestaLn_3->setObjectName(QString::fromUtf8("RespuestaLn_3"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, RespuestaLn_3);

        label_38 = new QLabel(layoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_38);

        RespuestaWq_3 = new QLabel(layoutWidget);
        RespuestaWq_3->setObjectName(QString::fromUtf8("RespuestaWq_3"));

        formLayout_4->setWidget(7, QFormLayout::FieldRole, RespuestaWq_3);

        label_37 = new QLabel(layoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_37);

        RespuestaW_3 = new QLabel(layoutWidget);
        RespuestaW_3->setObjectName(QString::fromUtf8("RespuestaW_3"));

        formLayout_4->setWidget(8, QFormLayout::FieldRole, RespuestaW_3);

        label_39 = new QLabel(layoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        formLayout_4->setWidget(9, QFormLayout::LabelRole, label_39);

        RespuestaWn_3 = new QLabel(layoutWidget);
        RespuestaWn_3->setObjectName(QString::fromUtf8("RespuestaWn_3"));

        formLayout_4->setWidget(9, QFormLayout::FieldRole, RespuestaWn_3);

        RespuestaPo_3 = new QLabel(layoutWidget);
        RespuestaPo_3->setObjectName(QString::fromUtf8("RespuestaPo_3"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, RespuestaPo_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 45, 221, 181));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TXT_Miu = new QLineEdit(layoutWidget1);
        TXT_Miu->setObjectName(QString::fromUtf8("TXT_Miu"));

        gridLayout->addWidget(TXT_Miu, 2, 2, 1, 1);

        TXT_M = new QLineEdit(layoutWidget1);
        TXT_M->setObjectName(QString::fromUtf8("TXT_M"));

        gridLayout->addWidget(TXT_M, 3, 2, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 0, 1, 3);

        TXT_Landa = new QLineEdit(layoutWidget1);
        TXT_Landa->setObjectName(QString::fromUtf8("TXT_Landa"));

        gridLayout->addWidget(TXT_Landa, 1, 2, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        TXT_N = new QLineEdit(layoutWidget1);
        TXT_N->setObjectName(QString::fromUtf8("TXT_N"));

        gridLayout->addWidget(TXT_N, 4, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 2);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(540, 40, 228, 192));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_28);

        TXT_Horas = new QLineEdit(layoutWidget_2);
        TXT_Horas->setObjectName(QString::fromUtf8("TXT_Horas"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TXT_Horas);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_18);

        TXT_Cte = new QLineEdit(layoutWidget_2);
        TXT_Cte->setObjectName(QString::fromUtf8("TXT_Cte"));

        formLayout->setWidget(2, QFormLayout::FieldRole, TXT_Cte);

        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_19);

        TXT_Cts = new QLineEdit(layoutWidget_2);
        TXT_Cts->setObjectName(QString::fromUtf8("TXT_Cts"));

        formLayout->setWidget(3, QFormLayout::FieldRole, TXT_Cts);

        label_26 = new QLabel(layoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_26);

        TXT_Ctse = new QLineEdit(layoutWidget_2);
        TXT_Ctse->setObjectName(QString::fromUtf8("TXT_Ctse"));

        formLayout->setWidget(4, QFormLayout::FieldRole, TXT_Ctse);

        label_31 = new QLabel(layoutWidget_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_31);

        TXT_Cs = new QLineEdit(layoutWidget_2);
        TXT_Cs->setObjectName(QString::fromUtf8("TXT_Cs"));

        formLayout->setWidget(5, QFormLayout::FieldRole, TXT_Cs);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, pushButton_2);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_17->setFont(font1);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_17);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(540, 310, 191, 151));
        formLayout_3 = new QFormLayout(layoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, label_20);

        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_21);

        RespuestaCtte = new QLabel(layoutWidget_3);
        RespuestaCtte->setObjectName(QString::fromUtf8("RespuestaCtte"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, RespuestaCtte);

        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_22);

        RespuestaCtts = new QLabel(layoutWidget_3);
        RespuestaCtts->setObjectName(QString::fromUtf8("RespuestaCtts"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, RespuestaCtts);

        label_27 = new QLabel(layoutWidget_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_27);

        RespuestaCttse = new QLabel(layoutWidget_3);
        RespuestaCttse->setObjectName(QString::fromUtf8("RespuestaCttse"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, RespuestaCttse);

        label_23 = new QLabel(layoutWidget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_23);

        RespuestaCt = new QLabel(layoutWidget_3);
        RespuestaCt->setObjectName(QString::fromUtf8("RespuestaCt"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, RespuestaCt);

        RespuestaCts = new QLabel(layoutWidget_3);
        RespuestaCts->setObjectName(QString::fromUtf8("RespuestaCts"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, RespuestaCts);

        label_32 = new QLabel(layoutWidget_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_32);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(180, 410, 135, 70));
        gridLayout_2 = new QGridLayout(layoutWidget_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 0, 0, 1, 2);

        comboBox = new QComboBox(layoutWidget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 1);

        TXT_Num = new QLineEdit(layoutWidget_4);
        TXT_Num->setObjectName(QString::fromUtf8("TXT_Num"));

        gridLayout_2->addWidget(TXT_Num, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 2);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(180, 570, 121, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 490, 47, 13));
        LblParcial = new QLabel(centralwidget);
        LblParcial->setObjectName(QString::fromUtf8("LblParcial"));
        LblParcial->setGeometry(QRect(180, 540, 581, 16));
        RespuestaProbabilidad = new QLabel(centralwidget);
        RespuestaProbabilidad->setObjectName(QString::fromUtf8("RespuestaProbabilidad"));
        RespuestaProbabilidad->setGeometry(QRect(180, 590, 47, 13));
        LblFormula = new QLabel(centralwidget);
        LblFormula->setObjectName(QString::fromUtf8("LblFormula"));
        LblFormula->setGeometry(QRect(180, 510, 581, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PFCS", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Resultados:", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Po:", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Pe:", nullptr));
        RespuestaPe->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Pn:", nullptr));
        RespuestaPn_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "L:", nullptr));
        RespuestaL_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Lq:", nullptr));
        RespuestaLq_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Ln:", nullptr));
        RespuestaLn_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Wq:", nullptr));
        RespuestaWq_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "W:", nullptr));
        RespuestaW_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Wn:", nullptr));
        RespuestaWn_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        RespuestaPo_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Valor de M:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Valor de N:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Valor de lambda:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Valor de miu:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PFCS", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Hoas x D\303\255a laboral:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Valor de Cte:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Valor de Cts:", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Valor de Ctse:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Valor de Cs:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Calcular Costos", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Costos PFCS", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Resultados de los Costos:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "CTte:", nullptr));
        RespuestaCtte->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "CTts:", nullptr));
        RespuestaCtts->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "CTtse:", nullptr));
        RespuestaCttse->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "CT:", nullptr));
        RespuestaCt->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        RespuestaCts->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "CTs:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Probabilidad Espec\303\255fica:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", ">=", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "<=", nullptr));

        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Obtener", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Resultado obtenido:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "F\303\263rmula:", nullptr));
        LblParcial->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        RespuestaProbabilidad->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        LblFormula->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

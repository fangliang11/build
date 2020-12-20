/********************************************************************************
** Form generated from reading UI file 'primitiveFactoryDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMITIVEFACTORYDLG_H
#define UI_PRIMITIVEFACTORYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrimitiveFactoryDlg
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *planeTab;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *planeWidthDoubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *planeHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *boxTab;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *boxDxDoubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *boxDyDoubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *boxDzDoubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *sphereTab;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QDoubleSpinBox *sphereRadiusDoubleSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_21;
    QDoubleSpinBox *spherePosXDoubleSpinBox;
    QDoubleSpinBox *spherePosYDoubleSpinBox;
    QDoubleSpinBox *spherePosZDoubleSpinBox;
    QLabel *label_22;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *spherePosToOriginButton;
    QPushButton *spherePosFromClipboardButton;
    QWidget *cylTab;
    QGridLayout *gridLayout_6;
    QFormLayout *formLayout_6;
    QLabel *label_7;
    QDoubleSpinBox *cylRadiusDoubleSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *cylHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *coneTab;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_4;
    QLabel *label_10;
    QDoubleSpinBox *coneTopRadiusDoubleSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *coneBottomRadiusDoubleSpinBox;
    QLabel *label_11;
    QDoubleSpinBox *coneHeightDoubleSpinBox;
    QGroupBox *snoutGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_12;
    QDoubleSpinBox *coneXOffsetDoubleSpinBox;
    QLabel *label_13;
    QDoubleSpinBox *coneYOffsetDoubleSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *torusTab;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_5;
    QLabel *label_14;
    QDoubleSpinBox *torusInsideRadiusDoubleSpinBox;
    QLabel *label_15;
    QDoubleSpinBox *torusOutsideRadiusDoubleSpinBox;
    QLabel *label_16;
    QDoubleSpinBox *torusAngleDoubleSpinBox;
    QGroupBox *torusRectGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QDoubleSpinBox *torusRectSectionHeightDoubleSpinBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QWidget *dishTab;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_13;
    QLabel *label_18;
    QDoubleSpinBox *dishRadiusDoubleSpinBox;
    QLabel *label_19;
    QDoubleSpinBox *dishHeightDoubleSpinBox;
    QGroupBox *dishEllipsoidGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_39;
    QDoubleSpinBox *dishRadius2DoubleSpinBox;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_13;
    QWidget *coordinateSystemTab;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *csMatrixTextEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *csClearMatrixButton;
    QPushButton *csSetMatrixBasedOnSelectedObjectButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_40;
    QSpinBox *precisionSpinBox;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *createPushButton;
    QPushButton *closePushButton;
    QSpacerItem *verticalSpacer_14;

    void setupUi(QDialog *PrimitiveFactoryDlg)
    {
        if (PrimitiveFactoryDlg->objectName().isEmpty())
            PrimitiveFactoryDlg->setObjectName(QString::fromUtf8("PrimitiveFactoryDlg"));
        PrimitiveFactoryDlg->resize(689, 353);
        verticalLayout_6 = new QVBoxLayout(PrimitiveFactoryDlg);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tabWidget = new QTabWidget(PrimitiveFactoryDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        planeTab = new QWidget();
        planeTab->setObjectName(QString::fromUtf8("planeTab"));
        gridLayout = new QGridLayout(planeTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(planeTab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("dx"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        planeWidthDoubleSpinBox = new QDoubleSpinBox(planeTab);
        planeWidthDoubleSpinBox->setObjectName(QString::fromUtf8("planeWidthDoubleSpinBox"));
        planeWidthDoubleSpinBox->setDecimals(6);
        planeWidthDoubleSpinBox->setMinimum(0.000001000000000);
        planeWidthDoubleSpinBox->setMaximum(100000000.000000000000000);
        planeWidthDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, planeWidthDoubleSpinBox);

        label_2 = new QLabel(planeTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("dy"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        planeHeightDoubleSpinBox = new QDoubleSpinBox(planeTab);
        planeHeightDoubleSpinBox->setObjectName(QString::fromUtf8("planeHeightDoubleSpinBox"));
        planeHeightDoubleSpinBox->setDecimals(6);
        planeHeightDoubleSpinBox->setMinimum(0.000001000000000);
        planeHeightDoubleSpinBox->setMaximum(100000000.000000000000000);
        planeHeightDoubleSpinBox->setValue(1.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, planeHeightDoubleSpinBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(333, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/images/primPlane.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(planeTab, icon, QString());
        boxTab = new QWidget();
        boxTab->setObjectName(QString::fromUtf8("boxTab"));
        gridLayout_2 = new QGridLayout(boxTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(boxTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setText(QString::fromUtf8("dx"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        boxDxDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDxDoubleSpinBox->setObjectName(QString::fromUtf8("boxDxDoubleSpinBox"));
        boxDxDoubleSpinBox->setDecimals(6);
        boxDxDoubleSpinBox->setMinimum(0.000001000000000);
        boxDxDoubleSpinBox->setMaximum(100000000.000000000000000);
        boxDxDoubleSpinBox->setValue(1.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, boxDxDoubleSpinBox);

        label_4 = new QLabel(boxTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setText(QString::fromUtf8("dy"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        boxDyDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDyDoubleSpinBox->setObjectName(QString::fromUtf8("boxDyDoubleSpinBox"));
        boxDyDoubleSpinBox->setDecimals(6);
        boxDyDoubleSpinBox->setMinimum(0.000001000000000);
        boxDyDoubleSpinBox->setMaximum(100000000.000000000000000);
        boxDyDoubleSpinBox->setValue(1.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, boxDyDoubleSpinBox);

        label_5 = new QLabel(boxTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setText(QString::fromUtf8("dz"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        boxDzDoubleSpinBox = new QDoubleSpinBox(boxTab);
        boxDzDoubleSpinBox->setObjectName(QString::fromUtf8("boxDzDoubleSpinBox"));
        boxDzDoubleSpinBox->setDecimals(6);
        boxDzDoubleSpinBox->setMinimum(0.000001000000000);
        boxDzDoubleSpinBox->setMaximum(100000000.000000000000000);
        boxDzDoubleSpinBox->setValue(1.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, boxDzDoubleSpinBox);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(334, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/primBox.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(boxTab, icon1, QString());
        sphereTab = new QWidget();
        sphereTab->setObjectName(QString::fromUtf8("sphereTab"));
        gridLayout_3 = new QGridLayout(sphereTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(sphereTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        sphereRadiusDoubleSpinBox = new QDoubleSpinBox(sphereTab);
        sphereRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("sphereRadiusDoubleSpinBox"));
        sphereRadiusDoubleSpinBox->setDecimals(6);
        sphereRadiusDoubleSpinBox->setMinimum(0.000001000000000);
        sphereRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        sphereRadiusDoubleSpinBox->setValue(2.000000000000000);

        horizontalLayout->addWidget(sphereRadiusDoubleSpinBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(317, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 136, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 0, 1, 1);

        groupBox = new QGroupBox(sphereTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setText(QString::fromUtf8("y"));

        gridLayout_7->addWidget(label_21, 2, 0, 1, 1);

        spherePosXDoubleSpinBox = new QDoubleSpinBox(groupBox);
        spherePosXDoubleSpinBox->setObjectName(QString::fromUtf8("spherePosXDoubleSpinBox"));
        spherePosXDoubleSpinBox->setDecimals(6);
        spherePosXDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        spherePosXDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout_7->addWidget(spherePosXDoubleSpinBox, 1, 1, 1, 1);

        spherePosYDoubleSpinBox = new QDoubleSpinBox(groupBox);
        spherePosYDoubleSpinBox->setObjectName(QString::fromUtf8("spherePosYDoubleSpinBox"));
        spherePosYDoubleSpinBox->setDecimals(6);
        spherePosYDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        spherePosYDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout_7->addWidget(spherePosYDoubleSpinBox, 2, 1, 1, 1);

        spherePosZDoubleSpinBox = new QDoubleSpinBox(groupBox);
        spherePosZDoubleSpinBox->setObjectName(QString::fromUtf8("spherePosZDoubleSpinBox"));
        spherePosZDoubleSpinBox->setDecimals(6);
        spherePosZDoubleSpinBox->setMinimum(-1000000000.000000000000000);
        spherePosZDoubleSpinBox->setMaximum(1000000000.000000000000000);

        gridLayout_7->addWidget(spherePosZDoubleSpinBox, 3, 1, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setText(QString::fromUtf8("z"));

        gridLayout_7->addWidget(label_22, 3, 0, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setText(QString::fromUtf8("x"));

        gridLayout_7->addWidget(label_20, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, 0, -1);
        spherePosToOriginButton = new QPushButton(groupBox);
        spherePosToOriginButton->setObjectName(QString::fromUtf8("spherePosToOriginButton"));

        horizontalLayout_3->addWidget(spherePosToOriginButton);

        spherePosFromClipboardButton = new QPushButton(groupBox);
        spherePosFromClipboardButton->setObjectName(QString::fromUtf8("spherePosFromClipboardButton"));

        horizontalLayout_3->addWidget(spherePosFromClipboardButton);


        gridLayout_7->addLayout(horizontalLayout_3, 5, 0, 1, 2);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/primSphere.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(sphereTab, icon2, QString());
        cylTab = new QWidget();
        cylTab->setObjectName(QString::fromUtf8("cylTab"));
        gridLayout_6 = new QGridLayout(cylTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_7 = new QLabel(cylTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_7);

        cylRadiusDoubleSpinBox = new QDoubleSpinBox(cylTab);
        cylRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("cylRadiusDoubleSpinBox"));
        cylRadiusDoubleSpinBox->setDecimals(6);
        cylRadiusDoubleSpinBox->setMinimum(0.000001000000000);
        cylRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        cylRadiusDoubleSpinBox->setValue(2.000000000000000);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, cylRadiusDoubleSpinBox);

        label_8 = new QLabel(cylTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_8);

        cylHeightDoubleSpinBox = new QDoubleSpinBox(cylTab);
        cylHeightDoubleSpinBox->setObjectName(QString::fromUtf8("cylHeightDoubleSpinBox"));
        cylHeightDoubleSpinBox->setDecimals(6);
        cylHeightDoubleSpinBox->setMinimum(0.000001000000000);
        cylHeightDoubleSpinBox->setMaximum(100000000.000000000000000);
        cylHeightDoubleSpinBox->setValue(5.000000000000000);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, cylHeightDoubleSpinBox);


        gridLayout_6->addLayout(formLayout_6, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(316, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 1, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/primCylinder.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(cylTab, icon3, QString());
        coneTab = new QWidget();
        coneTab->setObjectName(QString::fromUtf8("coneTab"));
        gridLayout_4 = new QGridLayout(coneTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_10 = new QLabel(coneTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_10);

        coneTopRadiusDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneTopRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("coneTopRadiusDoubleSpinBox"));
        coneTopRadiusDoubleSpinBox->setDecimals(6);
        coneTopRadiusDoubleSpinBox->setMinimum(0.000000000000000);
        coneTopRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        coneTopRadiusDoubleSpinBox->setValue(0.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, coneTopRadiusDoubleSpinBox);

        label_9 = new QLabel(coneTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        coneBottomRadiusDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneBottomRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("coneBottomRadiusDoubleSpinBox"));
        coneBottomRadiusDoubleSpinBox->setDecimals(6);
        coneBottomRadiusDoubleSpinBox->setMinimum(0.000000000000000);
        coneBottomRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        coneBottomRadiusDoubleSpinBox->setValue(2.000000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, coneBottomRadiusDoubleSpinBox);

        label_11 = new QLabel(coneTab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_11);

        coneHeightDoubleSpinBox = new QDoubleSpinBox(coneTab);
        coneHeightDoubleSpinBox->setObjectName(QString::fromUtf8("coneHeightDoubleSpinBox"));
        coneHeightDoubleSpinBox->setDecimals(6);
        coneHeightDoubleSpinBox->setMinimum(0.000001000000000);
        coneHeightDoubleSpinBox->setMaximum(100000000.000000000000000);
        coneHeightDoubleSpinBox->setValue(3.000000000000000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, coneHeightDoubleSpinBox);


        verticalLayout->addLayout(formLayout_4);

        snoutGroupBox = new QGroupBox(coneTab);
        snoutGroupBox->setObjectName(QString::fromUtf8("snoutGroupBox"));
        snoutGroupBox->setCheckable(true);
        snoutGroupBox->setChecked(false);
        formLayout_3 = new QFormLayout(snoutGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_12 = new QLabel(snoutGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_12);

        coneXOffsetDoubleSpinBox = new QDoubleSpinBox(snoutGroupBox);
        coneXOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("coneXOffsetDoubleSpinBox"));
        coneXOffsetDoubleSpinBox->setDecimals(6);
        coneXOffsetDoubleSpinBox->setMinimum(0.000000000000000);
        coneXOffsetDoubleSpinBox->setMaximum(100000000.000000000000000);
        coneXOffsetDoubleSpinBox->setValue(0.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, coneXOffsetDoubleSpinBox);

        label_13 = new QLabel(snoutGroupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        coneYOffsetDoubleSpinBox = new QDoubleSpinBox(snoutGroupBox);
        coneYOffsetDoubleSpinBox->setObjectName(QString::fromUtf8("coneYOffsetDoubleSpinBox"));
        coneYOffsetDoubleSpinBox->setDecimals(6);
        coneYOffsetDoubleSpinBox->setMinimum(0.000000000000000);
        coneYOffsetDoubleSpinBox->setMaximum(100000000.000000000000000);
        coneYOffsetDoubleSpinBox->setValue(0.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, coneYOffsetDoubleSpinBox);


        verticalLayout->addWidget(snoutGroupBox);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 1, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/primCone.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(coneTab, icon4, QString());
        torusTab = new QWidget();
        torusTab->setObjectName(QString::fromUtf8("torusTab"));
        gridLayout_5 = new QGridLayout(torusTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_14 = new QLabel(torusTab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_14);

        torusInsideRadiusDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusInsideRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("torusInsideRadiusDoubleSpinBox"));
        torusInsideRadiusDoubleSpinBox->setDecimals(6);
        torusInsideRadiusDoubleSpinBox->setMinimum(0.000001000000000);
        torusInsideRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        torusInsideRadiusDoubleSpinBox->setValue(1.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, torusInsideRadiusDoubleSpinBox);

        label_15 = new QLabel(torusTab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_15);

        torusOutsideRadiusDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusOutsideRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("torusOutsideRadiusDoubleSpinBox"));
        torusOutsideRadiusDoubleSpinBox->setDecimals(6);
        torusOutsideRadiusDoubleSpinBox->setMinimum(0.000001000000000);
        torusOutsideRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        torusOutsideRadiusDoubleSpinBox->setValue(1.500000000000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, torusOutsideRadiusDoubleSpinBox);

        label_16 = new QLabel(torusTab);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_16);

        torusAngleDoubleSpinBox = new QDoubleSpinBox(torusTab);
        torusAngleDoubleSpinBox->setObjectName(QString::fromUtf8("torusAngleDoubleSpinBox"));
        torusAngleDoubleSpinBox->setDecimals(6);
        torusAngleDoubleSpinBox->setMinimum(0.000001000000000);
        torusAngleDoubleSpinBox->setMaximum(360.000000000000000);
        torusAngleDoubleSpinBox->setValue(360.000000000000000);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, torusAngleDoubleSpinBox);


        verticalLayout_2->addLayout(formLayout_5);

        torusRectGroupBox = new QGroupBox(torusTab);
        torusRectGroupBox->setObjectName(QString::fromUtf8("torusRectGroupBox"));
        torusRectGroupBox->setCheckable(true);
        torusRectGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(torusRectGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(torusRectGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_2->addWidget(label_17);

        torusRectSectionHeightDoubleSpinBox = new QDoubleSpinBox(torusRectGroupBox);
        torusRectSectionHeightDoubleSpinBox->setObjectName(QString::fromUtf8("torusRectSectionHeightDoubleSpinBox"));
        torusRectSectionHeightDoubleSpinBox->setDecimals(6);
        torusRectSectionHeightDoubleSpinBox->setMinimum(0.000001000000000);
        torusRectSectionHeightDoubleSpinBox->setMaximum(100000000.000000000000000);
        torusRectSectionHeightDoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(torusRectSectionHeightDoubleSpinBox);


        verticalLayout_2->addWidget(torusRectGroupBox);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(267, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/primTorus.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(torusTab, icon5, QString());
        dishTab = new QWidget();
        dishTab->setObjectName(QString::fromUtf8("dishTab"));
        gridLayout_13 = new QGridLayout(dishTab);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_18 = new QLabel(dishTab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_18);

        dishRadiusDoubleSpinBox = new QDoubleSpinBox(dishTab);
        dishRadiusDoubleSpinBox->setObjectName(QString::fromUtf8("dishRadiusDoubleSpinBox"));
        dishRadiusDoubleSpinBox->setDecimals(6);
        dishRadiusDoubleSpinBox->setMinimum(0.000001000000000);
        dishRadiusDoubleSpinBox->setMaximum(100000000.000000000000000);
        dishRadiusDoubleSpinBox->setValue(1.000000000000000);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, dishRadiusDoubleSpinBox);

        label_19 = new QLabel(dishTab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_19);

        dishHeightDoubleSpinBox = new QDoubleSpinBox(dishTab);
        dishHeightDoubleSpinBox->setObjectName(QString::fromUtf8("dishHeightDoubleSpinBox"));
        dishHeightDoubleSpinBox->setDecimals(6);
        dishHeightDoubleSpinBox->setMinimum(0.000001000000000);
        dishHeightDoubleSpinBox->setMaximum(100000000.000000000000000);
        dishHeightDoubleSpinBox->setValue(0.500000000000000);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, dishHeightDoubleSpinBox);


        verticalLayout_5->addLayout(formLayout_13);

        dishEllipsoidGroupBox = new QGroupBox(dishTab);
        dishEllipsoidGroupBox->setObjectName(QString::fromUtf8("dishEllipsoidGroupBox"));
        dishEllipsoidGroupBox->setCheckable(true);
        dishEllipsoidGroupBox->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(dishEllipsoidGroupBox);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_39 = new QLabel(dishEllipsoidGroupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_5->addWidget(label_39);

        dishRadius2DoubleSpinBox = new QDoubleSpinBox(dishEllipsoidGroupBox);
        dishRadius2DoubleSpinBox->setObjectName(QString::fromUtf8("dishRadius2DoubleSpinBox"));
        dishRadius2DoubleSpinBox->setDecimals(6);
        dishRadius2DoubleSpinBox->setMinimum(0.000001000000000);
        dishRadius2DoubleSpinBox->setMaximum(100000000.000000000000000);
        dishRadius2DoubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(dishRadius2DoubleSpinBox);


        verticalLayout_5->addWidget(dishEllipsoidGroupBox);


        gridLayout_13->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_13, 0, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_13, 1, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/primDish.gif"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(dishTab, icon6, QString());
        coordinateSystemTab = new QWidget();
        coordinateSystemTab->setObjectName(QString::fromUtf8("coordinateSystemTab"));
        gridLayout_14 = new QGridLayout(coordinateSystemTab);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        csMatrixTextEdit = new QPlainTextEdit(coordinateSystemTab);
        csMatrixTextEdit->setObjectName(QString::fromUtf8("csMatrixTextEdit"));

        verticalLayout_3->addWidget(csMatrixTextEdit);


        gridLayout_14->addLayout(verticalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        csClearMatrixButton = new QPushButton(coordinateSystemTab);
        csClearMatrixButton->setObjectName(QString::fromUtf8("csClearMatrixButton"));

        horizontalLayout_4->addWidget(csClearMatrixButton);

        csSetMatrixBasedOnSelectedObjectButton = new QPushButton(coordinateSystemTab);
        csSetMatrixBasedOnSelectedObjectButton->setObjectName(QString::fromUtf8("csSetMatrixBasedOnSelectedObjectButton"));

        horizontalLayout_4->addWidget(csSetMatrixBasedOnSelectedObjectButton);


        gridLayout_14->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        tabWidget->addTab(coordinateSystemTab, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_40 = new QLabel(PrimitiveFactoryDlg);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_6->addWidget(label_40);

        precisionSpinBox = new QSpinBox(PrimitiveFactoryDlg);
        precisionSpinBox->setObjectName(QString::fromUtf8("precisionSpinBox"));
        precisionSpinBox->setMinimum(4);
        precisionSpinBox->setMaximum(65536);
        precisionSpinBox->setSingleStep(4);
        precisionSpinBox->setValue(24);

        horizontalLayout_6->addWidget(precisionSpinBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        createPushButton = new QPushButton(PrimitiveFactoryDlg);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));

        horizontalLayout_6->addWidget(createPushButton);

        closePushButton = new QPushButton(PrimitiveFactoryDlg);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout_6->addWidget(closePushButton);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_14 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_14);


        retranslateUi(PrimitiveFactoryDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrimitiveFactoryDlg);
    } // setupUi

    void retranslateUi(QDialog *PrimitiveFactoryDlg)
    {
        PrimitiveFactoryDlg->setWindowTitle(QCoreApplication::translate("PrimitiveFactoryDlg", "Primitive factory", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(planeTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Plane", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(boxTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Box", nullptr));
        label_6->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "radius", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PrimitiveFactoryDlg", "Position", nullptr));
#if QT_CONFIG(tooltip)
        spherePosToOriginButton->setToolTip(QCoreApplication::translate("PrimitiveFactoryDlg", "Set position to origin", nullptr));
#endif // QT_CONFIG(tooltip)
        spherePosToOriginButton->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "clear", nullptr));
#if QT_CONFIG(tooltip)
        spherePosFromClipboardButton->setToolTip(QCoreApplication::translate("PrimitiveFactoryDlg", "Try to interpret clipboard contents as position (\"x y z\")", nullptr));
#endif // QT_CONFIG(tooltip)
        spherePosFromClipboardButton->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "clipboard", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sphereTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Sphere", nullptr));
        label_7->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "radius", nullptr));
        label_8->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "height", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cylTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Cylinder", nullptr));
        label_10->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "top radius", nullptr));
        label_9->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "bottom radius", nullptr));
        label_11->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "height", nullptr));
        snoutGroupBox->setTitle(QCoreApplication::translate("PrimitiveFactoryDlg", "Snout mode", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("PrimitiveFactoryDlg", "displacement of axes along X-axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_12->setStatusTip(QCoreApplication::translate("PrimitiveFactoryDlg", "displacement of axes along X-axis", nullptr));
#endif // QT_CONFIG(statustip)
        label_12->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "x offset", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("PrimitiveFactoryDlg", "displacement of axes along Y-axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_13->setStatusTip(QCoreApplication::translate("PrimitiveFactoryDlg", "displacement of axes along Y-axis", nullptr));
#endif // QT_CONFIG(statustip)
        label_13->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "y offset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(coneTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Cone", nullptr));
        label_14->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "inside radius", nullptr));
        label_15->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "outside radius", nullptr));
        label_16->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "angle (degrees)", nullptr));
        torusRectGroupBox->setTitle(QCoreApplication::translate("PrimitiveFactoryDlg", "Rectangular section", nullptr));
        label_17->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "inside radius", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(torusTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Torus", nullptr));
        label_18->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "radius", nullptr));
        label_19->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "height", nullptr));
        dishEllipsoidGroupBox->setTitle(QCoreApplication::translate("PrimitiveFactoryDlg", "Ellipsoid mode", nullptr));
        label_39->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "radius 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(dishTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Dish", nullptr));
        csClearMatrixButton->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "Reset Matrix", nullptr));
#if QT_CONFIG(tooltip)
        csSetMatrixBasedOnSelectedObjectButton->setToolTip(QCoreApplication::translate("PrimitiveFactoryDlg", "<html><head/><body><p>Select an item in the DB Tree</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        csSetMatrixBasedOnSelectedObjectButton->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "Get Selected Item Matrix", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(coordinateSystemTab), QCoreApplication::translate("PrimitiveFactoryDlg", "Coordinate System", nullptr));
        label_40->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "Initial precision", nullptr));
        createPushButton->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "Create", nullptr));
        closePushButton->setText(QCoreApplication::translate("PrimitiveFactoryDlg", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrimitiveFactoryDlg: public Ui_PrimitiveFactoryDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMITIVEFACTORYDLG_H
